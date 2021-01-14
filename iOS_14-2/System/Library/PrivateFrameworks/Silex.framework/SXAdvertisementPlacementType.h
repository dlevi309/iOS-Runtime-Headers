/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXAdvertisementPlacementType.h>

@protocol SXAdvertisementPlacementType <SXAutoPlacementType>
@property (nonatomic,readonly) unsigned long long frequency; 
@property (nonatomic,readonly) unsigned long long bannerType; 
@property (nonatomic,readonly) SXConvertibleValue distanceFromMedia; 
@required
-(unsigned long long)frequency;
-(unsigned long long)bannerType;
-(SXConvertibleValue)distanceFromMedia;

@end


@class SXJSONArray, NSString;

@interface SXAdvertisementPlacementType : SXJSONObject <SXAdvertisementPlacementType>

@property (nonatomic,readonly) unsigned long long frequency; 
@property (nonatomic,readonly) unsigned long long bannerType; 
@property (nonatomic,readonly) SXConvertibleValue distanceFromMedia; 
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) id<SXAutoPlacementLayout> layout; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(SXJSONArray *)conditional;
-(id<SXAutoPlacementLayout>)layout;
-(BOOL)enabled;
-(SXConvertibleValue)distanceFromMedia;
-(unsigned long long)bannerType;
-(unsigned long long)frequency;
-(NSString *)description;
-(unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2 ;
@end

