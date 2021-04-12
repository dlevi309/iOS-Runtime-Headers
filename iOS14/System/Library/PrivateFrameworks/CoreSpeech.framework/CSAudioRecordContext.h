/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CSAudioRecordContext : NSObject <NSCopying> {

	BOOL _alwaysUseRemoteBuiltInMic;
	long long _type;
	NSString* _deviceId;

}

@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * deviceId;                               //@synthesize deviceId=_deviceId - In the implementation block
@property (assign,nonatomic) BOOL alwaysUseRemoteBuiltInMic;                    //@synthesize alwaysUseRemoteBuiltInMic=_alwaysUseRemoteBuiltInMic - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcObject; 
+(id)defaultContext;
+(id)contextForRemoraVoiceTriggerWithDeviceId:(id)arg1 ;
+(id)contextForHearstVoiceTriggerWithDeviceId:(id)arg1 ;
+(id)contextForOpportuneSpeakerListener;
+(id)contextForJarvisWithDeviceId:(id)arg1 ;
+(id)contextForServerInvoke;
+(id)recordTypeString:(long long)arg1 ;
+(id)contextForBuiltInVoiceTrigger;
+(id)contextForBTLEWithDeviceId:(id)arg1 ;
+(id)contextForVoiceTriggerTraining;
+(id)contextForHomeButton;
-(id)initWithXPCObject:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcObject;
-(void)setType:(long long)arg1 ;
-(id)description;
-(void)setDeviceId:(NSString *)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceId;
-(BOOL)isEqual:(id)arg1 ;
-(id)avvcContext;
-(id)avvcContextSettings;
-(BOOL)isRTSTriggered;
-(BOOL)isHearstVoiceTriggered;
-(BOOL)isBuiltInVoiceTriggered;
-(BOOL)isPluginContext;
-(id)initWithRecordType:(long long)arg1 deviceId:(id)arg2 ;
-(void)setAlwaysUseRemoteBuiltInMic:(BOOL)arg1 ;
-(long long)recordTypeFromAVVCActivationMode:(long long)arg1 ;
-(id)_createAVVCContextWithType:(long long)arg1 deviceId:(id)arg2 ;
-(long long)avvcActivationMode:(long long)arg1 ;
-(BOOL)isJarvisVoiceTriggered;
-(BOOL)isHearstDoubleTapTriggered;
-(id)initWithAVVCContext:(id)arg1 ;
-(BOOL)isVoiceTriggered;
-(BOOL)isTriggeredFromHearst;
-(BOOL)isHomePressed;
-(BOOL)isServerInvoked;
-(BOOL)isStarkTriggered;
-(BOOL)isDictation;
-(BOOL)alwaysUseRemoteBuiltInMic;
@end

