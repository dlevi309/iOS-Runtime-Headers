/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSDate, NSData;

@interface _GEOMapItemHandleCacheData : NSObject {

	NSDate* _timestamp;
	NSData* _data;

}

@property (nonatomic,readonly) NSDate * timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long cost; 
-(NSData *)data;
-(NSDate *)timestamp;
-(id)initWithTimestamp:(id)arg1 data:(id)arg2 ;
-(unsigned long long)cost;
@end

