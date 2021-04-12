/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSNumber, NSDictionary;

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * origin; 
@property (nonatomic,copy) NSString * audioDestination; 
@property (nonatomic,copy) NSString * audioSource; 
@property (assign,nonatomic) BOOL clearContext; 
@property (assign,nonatomic) int codec; 
@property (nonatomic,copy) NSString * deviceIdentifier; 
@property (nonatomic,copy) NSString * deviceModel; 
@property (assign,nonatomic) BOOL disableAutoEndpointing; 
@property (nonatomic,copy) NSString * dspStatus; 
@property (assign,nonatomic) BOOL enablePartialResults; 
@property (nonatomic,copy) NSString * headsetAddress; 
@property (nonatomic,copy) NSString * headsetId; 
@property (nonatomic,copy) NSString * headsetName; 
@property (nonatomic,copy) NSNumber * isCarryDevice; 
@property (nonatomic,copy) NSString * motionActivity; 
@property (nonatomic,copy) NSNumber * motionConfidence; 
@property (nonatomic,copy) NSNumber * noiseReductionLevel; 
@property (nonatomic,copy) NSString * turnId; 
@property (nonatomic,copy) NSDictionary * voiceTriggerEventInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)startSpeech;
+(id)startSpeechWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)origin;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setOrigin:(NSString *)arg1 ;
-(int)codec;
-(void)setCodec:(int)arg1 ;
-(void)setMotionActivity:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(NSString *)audioSource;
-(void)setAudioSource:(NSString *)arg1 ;
-(NSString *)motionActivity;
-(id)encodedClassName;
-(BOOL)clearContext;
-(NSDictionary *)voiceTriggerEventInfo;
-(void)setVoiceTriggerEventInfo:(NSDictionary *)arg1 ;
-(BOOL)requiresResponse;
-(NSString *)audioDestination;
-(void)setAudioDestination:(NSString *)arg1 ;
-(void)setClearContext:(BOOL)arg1 ;
-(BOOL)disableAutoEndpointing;
-(void)setDisableAutoEndpointing:(BOOL)arg1 ;
-(NSString *)dspStatus;
-(void)setDspStatus:(NSString *)arg1 ;
-(BOOL)enablePartialResults;
-(void)setEnablePartialResults:(BOOL)arg1 ;
-(NSString *)headsetAddress;
-(void)setHeadsetAddress:(NSString *)arg1 ;
-(NSString *)headsetId;
-(void)setHeadsetId:(NSString *)arg1 ;
-(NSString *)headsetName;
-(void)setHeadsetName:(NSString *)arg1 ;
-(NSNumber *)isCarryDevice;
-(void)setIsCarryDevice:(NSNumber *)arg1 ;
-(NSNumber *)motionConfidence;
-(void)setMotionConfidence:(NSNumber *)arg1 ;
-(NSNumber *)noiseReductionLevel;
-(void)setNoiseReductionLevel:(NSNumber *)arg1 ;
-(NSString *)turnId;
-(void)setTurnId:(NSString *)arg1 ;
@end

