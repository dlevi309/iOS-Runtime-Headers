/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSMutableDictionary;

@interface MTNonretainedCache : NSObject {

	NSMutableDictionary* _cache;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSMutableDictionary *)cache;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 creation:(/*^block*/id)arg2 ;
@end

