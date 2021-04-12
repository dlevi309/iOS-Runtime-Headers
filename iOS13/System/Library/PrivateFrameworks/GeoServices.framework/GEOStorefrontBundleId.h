/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

