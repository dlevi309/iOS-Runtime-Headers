/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSDate;

@interface GEOStorefrontBundleId : NSObject {

	unsigned long long _identifier;
	NSDate* _date;

}

@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
-(id)init;
-(NSDate *)date;
-(unsigned long long)identifier;
-(id)initWithBundleId:(id)arg1 ;
@end

