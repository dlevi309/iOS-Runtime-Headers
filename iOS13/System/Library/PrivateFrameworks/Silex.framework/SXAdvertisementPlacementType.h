/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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


@class NSString, SXJSONArray;

@interface SXAdvertisementPlacementType : SXJSONObject <SXAdvertisementPlacementType>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) id<SXAutoPlacementLayout> layout; 
@property (nonatomic,readonly) unsigned long long frequency; 
@property (nonatomic,readonly) unsigned long long bannerType; 
@property (nonatomic,readonly) SXConvertibleValue distanceFromMedia; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(SXConvertibleValue)distanceFromMedia;
-(unsigned long long)bannerType;
-(unsigned long long)frequency;
-(id<SXAutoPlacementLayout>)layout;
-(BOOL)enabled;
-(SXJSONArray *)conditional;
-(NSString *)description;
-(unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2 ;
@end

