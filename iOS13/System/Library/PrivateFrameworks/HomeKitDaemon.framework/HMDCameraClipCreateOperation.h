/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraClipModelOperation.h>

@class NSNumber, NSDate;

@interface HMDCameraClipCreateOperation : HMDCameraClipModelOperation {

	NSNumber* _targetFragmentDuration;
	NSDate* _clipStartDate;

}

@property (readonly) NSNumber * targetFragmentDuration;              //@synthesize targetFragmentDuration=_targetFragmentDuration - In the implementation block
@property (readonly) NSDate * clipStartDate;                         //@synthesize clipStartDate=_clipStartDate - In the implementation block
+(id)logCategory;
-(void)main;
-(NSNumber *)targetFragmentDuration;
-(NSDate *)clipStartDate;
-(id)initWithLocalZone:(id)arg1 targetFragmentDuration:(double)arg2 startDate:(id)arg3 dataSource:(id)arg4 ;
@end

