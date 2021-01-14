/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol WFFavoriteLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<WFFavoriteLocationProviderDelegate> delegate; 
@optional
-(id)migrationOperation;

@required
-(id)locations;
-(void)addLocation:(id)arg1;
-(void)setLocations:(id)arg1;
-(id<WFFavoriteLocationProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)initWithDelegate:(id)arg1 persistence:(id)arg2;
-(void)removeLocation:(id)arg1;

@end

