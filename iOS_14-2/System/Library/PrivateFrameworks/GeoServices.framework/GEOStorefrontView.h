/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOStorefrontImagery;

@interface GEOStorefrontView : NSObject {

	unsigned long long _identifier;
	GEOStorefrontImagery* _imageryInfo;
	GEOOrientedPosition _lookAt;

}

@property (nonatomic,readonly) unsigned long long identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) GEOStorefrontImagery * imageryInfo;              //@synthesize imageryInfo=_imageryInfo - In the implementation block
@property (nonatomic,readonly) GEOOrientedPosition lookAt;                      //@synthesize lookAt=_lookAt - In the implementation block
-(id)init;
-(GEOOrientedPosition)lookAt;
-(unsigned long long)identifier;
-(GEOStorefrontImagery *)imageryInfo;
-(id)initWithStorefrontView:(id)arg1 ;
@end

