/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UICollectionLayoutSectionSolver;
@class _UICollectionPreferredSizes;

@interface _UICollectionCompositionalSolverPreferredSizesRebaseInfo : NSObject {

	id<_UICollectionLayoutSectionSolver> _solution;
	_UICollectionPreferredSizes* _preferredSizes;

}

@property (nonatomic,readonly) id<_UICollectionLayoutSectionSolver> solution;              //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) _UICollectionPreferredSizes * preferredSizes;               //@synthesize preferredSizes=_preferredSizes - In the implementation block
-(id<_UICollectionLayoutSectionSolver>)solution;
-(_UICollectionPreferredSizes *)preferredSizes;
-(id)initWithSolution:(id)arg1 preferredSizes:(id)arg2 ;
@end

