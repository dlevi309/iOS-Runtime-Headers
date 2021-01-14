/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@interface PFCacheStatistics : NSObject {

	unsigned long long _hits;
	unsigned long long _misses;
	unsigned long long _evictions;

}

@property (readonly) unsigned long long hits;                   //@synthesize hits=_hits - In the implementation block
@property (readonly) unsigned long long misses;                 //@synthesize misses=_misses - In the implementation block
@property (readonly) unsigned long long evictions;              //@synthesize evictions=_evictions - In the implementation block
-(void)recordMiss;
-(void)accumulate:(id)arg1 ;
-(void)recordEvictions:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)hits;
-(unsigned long long)misses;
-(void)recordHit;
-(unsigned long long)evictions;
@end

