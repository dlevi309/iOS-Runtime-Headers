/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

@class CLLocation;


@protocol ATXLocationManagerGPS
@property (assign,nonatomic,__weak) id<ATXLocationManagerGPSDelegate> delegate; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL locationEnabled; 
@required
-(id<ATXLocationManagerGPSDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(CLLocation *)location;
-(id)updateLocationWithTimeout:(double)arg1;
-(BOOL)locationEnabled;

@end

