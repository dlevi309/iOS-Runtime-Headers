/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)entryForUUID:(id)arg1 ;
-(unsigned)capacityLimit;
-(double)missRetainTime;
-(void)pruneCache;
-(void)setEntry:(id)arg1 forUUID:(id)arg2 ;
-(id)stateDictionary;
-(void)setMissRetainTime:(double)arg1 ;
-(unsigned)pruneSize;
-(id)description;
-(double)hitRetainTime;
-(void)setCapacityLimit:(unsigned)arg1 ;
-(void)setPruneSize:(unsigned)arg1 ;
-(void)setHitRetainTime:(double)arg1 ;
@end

