/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXAdvertisingSettings.h>

@protocol SXAutoPlacementLayout;
@class NSString;

@interface SXAutoPlacementAdvertisingSettings : NSObject <SXAdvertisingSettings> {

	unsigned long long _bannerType;
	id<SXAutoPlacementLayout> _layout;
	unsigned long long _frequency;
	SXConvertibleValue _distanceFromMedia;

}

@property (nonatomic,readonly) unsigned long long frequency;                      //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) unsigned long long bannerType;                     //@synthesize bannerType=_bannerType - In the implementation block
@property (nonatomic,readonly) id<SXAutoPlacementLayout> layout;                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) SXConvertibleValue distanceFromMedia;              //@synthesize distanceFromMedia=_distanceFromMedia - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)frequency;
-(unsigned long long)bannerType;
-(id<SXAutoPlacementLayout>)layout;
-(id)initWithFrequency:(unsigned long long)arg1 bannerType:(unsigned long long)arg2 layout:(id)arg3 distanceFromMedia:(SXConvertibleValue)arg4 ;
-(SXConvertibleValue)distanceFromMedia;
@end
