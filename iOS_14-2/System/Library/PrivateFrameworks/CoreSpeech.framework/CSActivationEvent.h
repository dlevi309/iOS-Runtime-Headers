/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSString, NSDictionary;

@interface CSActivationEvent : NSObject {

	float _vadScore;
	NSString* _UUID;
	unsigned long long _type;
	NSString* _deviceId;
	NSDictionary* _activationInfo;
	unsigned long long _hosttime;

}

@property (nonatomic,readonly) NSString * UUID;                              //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * deviceId;                            //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,retain) NSDictionary * activationInfo;                  //@synthesize activationInfo=_activationInfo - In the implementation block
@property (assign,nonatomic) unsigned long long hosttime;                    //@synthesize hosttime=_hosttime - In the implementation block
@property (assign,nonatomic) float vadScore;                                 //@synthesize vadScore=_vadScore - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription; 
+(id)remoteMicVADEvent:(id)arg1 vadScore:(float)arg2 hostTime:(unsigned long long)arg3 ;
+(id)jarvisVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3 ;
+(id)remoteMicVoiceTriggerEvent:(id)arg1 activationInfo:(id)arg2 hostTime:(unsigned long long)arg3 ;
+(id)remoraVoiceTriggerEvent:(id)arg1 hostTime:(unsigned long long)arg2 ;
+(id)builtInMicVoiceTriggerEvent:(id)arg1 hostTime:(unsigned long long)arg2 ;
+(id)mediaserverdLaunchedEvent:(unsigned long long)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
-(NSString *)UUID;
-(id)xpcObject;
-(void)setType:(unsigned long long)arg1 ;
-(NSDictionary *)activationInfo;
-(void)setVadScore:(float)arg1 ;
-(id)_activationTypeString;
-(float)vadScore;
-(NSString *)localizedDescription;
-(void)setDeviceId:(NSString *)arg1 ;
-(unsigned long long)type;
-(unsigned long long)hosttime;
-(void)setActivationInfo:(NSDictionary *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 vadScore:(float)arg4 hosttime:(unsigned long long)arg5 ;
-(NSString *)deviceId;
-(id)initWithType:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 hosttime:(unsigned long long)arg4 ;
-(void)setHosttime:(unsigned long long)arg1 ;
@end

