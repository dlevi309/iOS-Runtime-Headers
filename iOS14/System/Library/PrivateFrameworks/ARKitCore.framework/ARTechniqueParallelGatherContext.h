/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechniqueGatherContext.h>

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

