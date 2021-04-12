/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechniqueGatherContext.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSMapTable;

@interface ARTechniqueParallelGatherContext : ARTechniqueGatherContext {

	ARTechniqueParallelGatherContext* _previousContext;
	NSIndexSet* _requiredTechniqueIndices;
	NSIndexSet* _deterministicTechniqueIndices;
	unsigned long long _techniqueCount;
	NSMutableDictionary* _gatheredDataByTechniqueIndex;
	os_unfair_lock_s _gatherLock;
	NSMutableIndexSet* _lateResultTechniqueIndices;
	NSMapTable* _techniquesByIndex;
	BOOL _resultsCaptured;
	BOOL _requiredTimeIntervalComplete;

}

@property (assign) BOOL requiredTimeIntervalComplete;              //@synthesize requiredTimeIntervalComplete=_requiredTimeIntervalComplete - In the implementation block
-(id)description;
-(id)gatheredData;
-(id)initWithParentContext:(id)arg1 previousContext:(id)arg2 requiredTechniqueIndices:(id)arg3 deterministicTechniqueIndices:(id)arg4 techniques:(id)arg5 ;
-(void)setRequiredTimeIntervalComplete:(BOOL)arg1 ;
-(BOOL)deterministicResultsCaptured;
-(id)addResultData:(id)arg1 forTechniqueAtIndex:(unsigned long long)arg2 ;
-(BOOL)requiredTimeIntervalComplete;
-(id)captureGatheredData;
-(id)_allGatheredDataByTechniqueIndex;
-(id)lateResultDataForTechniqueAtIndex:(unsigned long long)arg1 ;
@end

