/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)contextForBuiltInVoiceTrigger;
+(id)contextForHearstVoiceTriggerWithDeviceId:(id)arg1 ;
+(id)contextForOpportuneSpeakerListener;
+(id)contextForJarvisWithDeviceId:(id)arg1 ;
+(id)contextForServerInvoke;
+(id)recordTypeString:(long long)arg1 ;
+(id)contextForBTLE;
+(id)contextForVoiceTriggerTraining;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
-(NSString *)deviceId;
-(NSObject*<OS_xpc_object>)xpcObject;
-(void)setDeviceId:(NSString *)arg1 ;
-(id)avvcContext;
-(id)avvcContextSettings;
-(BOOL)isRTSTriggered;
-(BOOL)isHearstVoiceTriggered;
-(id)initWithRecordType:(long long)arg1 deviceId:(id)arg2 ;
-(long long)recordTypeFromAVVCActivationMode:(long long)arg1 ;
-(void)setAlwaysUseRemoteBuiltInMic:(BOOL)arg1 ;
-(id)_createAVVCContextWithType:(long long)arg1 deviceId:(id)arg2 ;
-(long long)avvcActivationMode:(long long)arg1 ;
-(BOOL)isBuiltInVoiceTriggered;
-(BOOL)isJarvisVoiceTriggered;
-(BOOL)isHearstDoubleTapTriggered;
-(id)initWithAVVCContext:(id)arg1 ;
-(BOOL)isVoiceTriggered;
-(BOOL)isTriggeredFromHearst;
-(BOOL)isServerInvoked;
-(BOOL)isStarkTriggered;
-(BOOL)alwaysUseRemoteBuiltInMic;
@end

