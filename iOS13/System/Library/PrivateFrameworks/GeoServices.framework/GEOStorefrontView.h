/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)identifier;
-(id)initWithStorefrontView:(id)arg1 ;
-(GEOOrientedPosition)lookAt;
-(GEOStorefrontImagery *)imageryInfo;
@end

