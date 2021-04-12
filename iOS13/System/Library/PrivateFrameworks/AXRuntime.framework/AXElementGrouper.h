/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
*/


#import <AXRuntime/AXRuntime-Structs.h>
@class NSArray;

@interface AXElementGrouper : NSObject {

	double _thresholdForDeterminingEqualSize;
	long long _heuristics;

}

@property (assign,nonatomic) long long heuristics;                                   //@synthesize heuristics=_heuristics - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumGroupSize; 
@property (nonatomic,readonly) unsigned long long maximumGroupSize; 
@property (nonatomic,readonly) unsigned long long preferredGroupSize; 
@property (nonatomic,readonly) double thresholdForDeterminingEqualSize;              //@synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize - In the implementation block
@property (nonatomic,readonly) NSArray * transformationPasses; 
-(id)init;
-(void)setHeuristics:(long long)arg1 ;
-(long long)heuristics;
-(id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned long long*)arg2 ;
-(id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(BOOL)arg2 ;
-(id)_applyTransformationPassesToRootGroup:(id)arg1 ;
-(id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(BOOL)arg2 ;
-(unsigned long long)minimumGroupSize;
-(double)thresholdForDeterminingEqualSize;
-(unsigned long long)maximumGroupSize;
-(unsigned long long)preferredGroupSize;
-(id)_applyTransformationPass:(id)arg1 toGroup:(id)arg2 ;
-(NSArray *)transformationPasses;
-(id)_groupablesForItems:(id)arg1 ;
-(id)initWithHeuristics:(long long)arg1 ;
-(id)groupElementsInRootGroup:(id)arg1 ;
-(BOOL)_frame:(CGRect)arg1 isApproximatelySameSizeAsFrame:(CGRect)arg2 ;
@end

