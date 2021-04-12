/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol WFFavoriteLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<WFFavoriteLocationProviderDelegate> delegate; 
@optional
-(id)migrationOperation;

@required
-(id<WFFavoriteLocationProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setLocations:(id)arg1;
-(id)locations;
-(void)addLocation:(id)arg1;
-(id)initWithDelegate:(id)arg1 persistence:(id)arg2;
-(void)removeLocation:(id)arg1;

@end

