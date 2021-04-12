/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXAdvertisingSettings.h>

@class NSString;

@interface SXJSONAdvertisementSettings : SXJSONObject <SXAdvertisingSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long frequency; 
@property (nonatomic,readonly) unsigned long long bannerType; 
@property (nonatomic,readonly) id<SXAutoPlacementLayout> layout; 
@property (nonatomic,readonly) SXConvertibleValue distanceFromMedia; 
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(SXConvertibleValue)distanceFromMedia;
-(id<SXAutoPlacementLayout>)layout;
-(unsigned long long)bannerType;
-(unsigned long long)frequency;
-(unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2 ;
@end

