/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)willBeginAccessPower;
-(BOOL)getAveragePower:(float*)arg1 andPeakPower:(float*)arg2 ;
-(void)didEndAccessPower;
-(id)getCurrentAudioPowerProvider;
-(id<AFAudioPowerProviding>)previousProvider;
-(void)setPreviousProvider:(id<AFAudioPowerProviding>)arg1 ;
@end

