/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSMutableDictionary;

@interface MTNonretainedCache : NSObject {

	NSMutableDictionary* _cache;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cache;
-(id)objectForKeyedSubscript:(id)arg1 creation:(/*^block*/id)arg2 ;
@end

