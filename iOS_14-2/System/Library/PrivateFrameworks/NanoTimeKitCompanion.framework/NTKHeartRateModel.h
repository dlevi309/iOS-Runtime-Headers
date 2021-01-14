/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKHeartRateQueryObserver.h>

@protocol NTKHeartRateModelDelegate;
@class HKQuantitySample;

@interface NTKHeartRateModel : NSObject <NTKHeartRateQueryObserver> {

	id<NTKHeartRateModelDelegate> _delegate;
	HKQuantitySample* _mostRecentHeartRate;

}

@property (nonatomic,retain) HKQuantitySample * mostRecentHeartRate;                       //@synthesize mostRecentHeartRate=_mostRecentHeartRate - In the implementation block
@property (nonatomic,__weak,readonly) id<NTKHeartRateModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NTKHeartRateModelDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)manager:(id)arg1 receivedLatestHeartRateSample:(id)arg2 ;
-(HKQuantitySample *)mostRecentHeartRate;
-(void)setMostRecentHeartRate:(HKQuantitySample *)arg1 ;
@end

