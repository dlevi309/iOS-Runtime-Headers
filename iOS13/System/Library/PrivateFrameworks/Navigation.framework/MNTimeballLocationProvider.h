/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

@class CLLocation;


@protocol MNTimeballLocationProvider <NSObject>
@property (assign,nonatomic) double desiredAccuracy; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
@required
-(id<CLLocationManagerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(CLLocation *)location;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
-(id)initWithEffectiveBundle:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;

@end

