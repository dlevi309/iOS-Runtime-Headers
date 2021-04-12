/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXAdvertisingSettings <NSObject>
@property (nonatomic,readonly) unsigned long long frequency; 
@property (nonatomic,readonly) unsigned long long bannerType; 
@property (nonatomic,readonly) id<SXAutoPlacementLayout> layout; 
@property (nonatomic,readonly) SXConvertibleValue distanceFromMedia; 
@required
-(unsigned long long)frequency;
-(unsigned long long)bannerType;
-(id<SXAutoPlacementLayout>)layout;
-(SXConvertibleValue)distanceFromMedia;

@end

