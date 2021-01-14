/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXAdvertisingSettings.h>

@class NSString;

@interface SXJSONAdvertisementSettings : SXJSONObject <SXAdvertisingSettings>

@property (nonatomic,readonly) unsigned long long frequency; 
@property (nonatomic,readonly) unsigned long long bannerType; 
@property (nonatomic,readonly) id<SXAutoPlacementLayout> layout; 
@property (nonatomic,readonly) SXConvertibleValue distanceFromMedia; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(SXConvertibleValue)distanceFromMedia;
-(id<SXAutoPlacementLayout>)layout;
-(unsigned long long)bannerType;
-(unsigned long long)frequency;
-(unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2 ;
@end

