/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/


@class NSMutableDictionary;

@interface EntityMapCache : NSObject {

	NSMutableDictionary* _uuidMap;
	unsigned _capacityLimit;
	unsigned _pruneSize;
	double _hitRetainTime;
	double _missRetainTime;

}

@property (assign) double hitRetainTime;                //@synthesize hitRetainTime=_hitRetainTime - In the implementation block
@property (assign) double missRetainTime;               //@synthesize missRetainTime=_missRetainTime - In the implementation block
@property (assign) unsigned capacityLimit;              //@synthesize capacityLimit=_capacityLimit - In the implementation block
@property (assign) unsigned pruneSize;                  //@synthesize pruneSize=_pruneSize - In the implementation block
-(id)init;
-(id)description;
-(void)pruneCache;
-(id)stateDictionary;
-(id)entryForUUID:(id)arg1 ;
-(void)setEntry:(id)arg1 forUUID:(id)arg2 ;
-(double)hitRetainTime;
-(void)setHitRetainTime:(double)arg1 ;
-(double)missRetainTime;
-(void)setMissRetainTime:(double)arg1 ;
-(unsigned)capacityLimit;
-(void)setCapacityLimit:(unsigned)arg1 ;
-(unsigned)pruneSize;
-(void)setPruneSize:(unsigned)arg1 ;
@end

