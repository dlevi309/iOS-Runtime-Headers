/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@class NSDictionary;

@interface _DECPredictionCacheResult : NSObject {

	unsigned long long _hits;
	unsigned long long _misses;
	NSDictionary* _predictions;

}

@property (nonatomic,readonly) unsigned long long hits;                 //@synthesize hits=_hits - In the implementation block
@property (nonatomic,readonly) unsigned long long misses;               //@synthesize misses=_misses - In the implementation block
@property (nonatomic,readonly) NSDictionary * predictions;              //@synthesize predictions=_predictions - In the implementation block
-(NSDictionary *)predictions;
-(id)description;
-(unsigned long long)hits;
-(id)initWithPredictions:(id)arg1 hits:(unsigned long long)arg2 misses:(unsigned long long)arg3 ;
-(unsigned long long)misses;
@end

