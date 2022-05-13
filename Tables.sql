-- Table: public.tablica

-- DROP TABLE IF EXISTS public.tablica;

CREATE TABLE IF NOT EXISTS public.tablica
(
    team_id integer NOT NULL GENERATED ALWAYS AS IDENTITY ( INCREMENT 1 START 1 MINVALUE 1 MAXVALUE 2147483647 CACHE 1 ),
    team_name character varying(20) COLLATE pg_catalog."default" NOT NULL,
    team_placement integer NOT NULL,
    team_games integer NOT NULL,
    team_wins integer NOT NULL,
    team_points integer NOT NULL,
    CONSTRAINT "CIS table div 1_pkey" PRIMARY KEY (team_id)
)

TABLESPACE pg_default;

ALTER TABLE IF EXISTS public.tablica
    OWNER to postgres;