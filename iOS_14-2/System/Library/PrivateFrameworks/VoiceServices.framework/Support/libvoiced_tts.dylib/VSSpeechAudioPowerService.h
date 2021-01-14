/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libobjc.A.dylib/AFAudioPowerProviding.h>

@protocol AFAudioPowerProviding;
@class NSString;

@interface VSSpeechAudioPowerService : NSObject <AFAudioPowerProviding> {

	id<AFAudioPowerProviding> _previousProvider;

}

@property (assign,nonatomic,__weak) id<AFAudioPowerProviding> previousProvider;              //@synthesize previousProvider=_previousProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServices;
-(void)didEndAccessPower;
-(void)willBeginAccessPower;
-(BOOL)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2 ;
-(id)getCurrentAudioPowerProvider;
-(id<AFAudioPowerProviding>)previousProvider;
-(void)setPreviousProvider:(id<AFAudioPowerProviding>)arg1 ;
@end

