/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

