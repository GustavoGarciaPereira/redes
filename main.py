from fastapi import FastAPI, HTTPException
from pydantic import BaseModel
import ipaddress

app = FastAPI()

