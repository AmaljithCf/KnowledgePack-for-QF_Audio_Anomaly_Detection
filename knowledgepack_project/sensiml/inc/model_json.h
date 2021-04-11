#ifndef __MODEL_JSON_H__
#define __MODEL_JSON_H__

const char recognition_model_string_json[] = {"{"\NumModels"\:1,"\ModelIndexes"\:{"\0"\:"\Tensorflow_model_1"\},"\ModelDescriptions"\:[{"\Name"\:"\Tensorflow_model_1"\,"\ClassMaps"\:{"\1"\:"\Crowd"\,"\2"\:"\Explosion"\,"\3"\:"\GlassBreak"\,"\4"\:"\GunShot"\,"\5"\:"\Siren"\,"\0"\:"\Unknown"\},"\ModelType"\:"\TFMicro"\}]}"};


int recognition_model_string_json_len = sizeof(recognition_model_string_json);

#endif /* __MODEL_JSON_H__ */