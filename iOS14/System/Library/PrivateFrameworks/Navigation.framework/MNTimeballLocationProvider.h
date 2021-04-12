/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

@class CLLocation;


@protocol MNTimeballLocationProvider <NSObject>
@property (assign,nonatomic) double desiredAccuracy; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
@required
-(void)stopUpdatingLocation;
-(void)startUpdatingLocation;
-(void)setDesiredAccuracy:(double)arg1;
-(id<CLLocationManagerDelegate>)delegate;
-(double)desiredAccuracy;
-(CLLocation *)location;
-(void)setDelegate:(id)arg1;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
-(id)initWithEffectiveBundle:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;

@end

