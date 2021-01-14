/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


@protocol OS_os_log;
@class NSObject, PRPose;

@interface PRDevicePoseValidator : NSObject {

	NSObject*<OS_os_log> _logger;
	double _maximumSpeed;
	PRPose* _previousPose;

}

@property (assign,nonatomic) double maximumSpeed;                //@synthesize maximumSpeed=_maximumSpeed - In the implementation block
@property (nonatomic,retain) PRPose * previousPose;              //@synthesize previousPose=_previousPose - In the implementation block
-(void)setMaximumSpeed:(double)arg1 ;
-(PRPose *)previousPose;
-(void)setPreviousPose:(PRPose *)arg1 ;
-(double)maximumSpeed;
-(id)initWithMaximumSpeed:(double)arg1 ;
-(BOOL)validatePose:(id)arg1 ;
@end

