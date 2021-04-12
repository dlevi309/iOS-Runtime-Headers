/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/AVCAudioPowerSpectrumMeterDelegate.h>

@protocol TUAudioFrequencyControllerDelegate, OS_dispatch_queue;
@class NSObject, AVCAudioPowerSpectrumMeter, NSString;

@interface TUAudioFrequencyController : NSObject <AVCAudioPowerSpectrumMeterDelegate> {

	id<TUAudioFrequencyControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	AVCAudioPowerSpectrumMeter* _powerSpectrumMeter;

}

@property (nonatomic,__weak,readonly) id<TUAudioFrequencyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) AVCAudioPowerSpectrumMeter * powerSpectrumMeter;                     //@synthesize powerSpectrumMeter=_powerSpectrumMeter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)normalizedPowerLevelForPowerSpectrum:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<TUAudioFrequencyControllerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(AVCAudioPowerSpectrumMeter *)powerSpectrumMeter;
-(void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2 ;
-(void)meterServerDidDisconnect:(id)arg1 ;
-(void)registerParticipantPowerSpectrum:(long long)arg1 ;
-(void)unregisterParticipantPowerSpectrum:(long long)arg1 ;
@end

