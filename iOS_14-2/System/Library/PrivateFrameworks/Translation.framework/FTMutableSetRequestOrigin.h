/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSetRequestOrigin.h>

@interface FTMutableSetRequestOrigin : FTSetRequestOrigin

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL enable_geo_location_features; 
-(double)latitude;
-(id)init;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(BOOL)enable_geo_location_features;
-(void)setEnable_geo_location_features:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

