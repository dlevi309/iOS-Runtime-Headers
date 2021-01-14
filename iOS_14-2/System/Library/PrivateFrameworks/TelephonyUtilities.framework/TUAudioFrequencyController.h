/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<TUAudioFrequencyControllerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(AVCAudioPowerSpectrumMeter *)powerSpectrumMeter;
-(void)meterServerDidDisconnect:(id)arg1 ;
-(void)registerParticipantPowerSpectrum:(long long)arg1 ;
-(void)unregisterParticipantPowerSpectrum:(long long)arg1 ;
@end

