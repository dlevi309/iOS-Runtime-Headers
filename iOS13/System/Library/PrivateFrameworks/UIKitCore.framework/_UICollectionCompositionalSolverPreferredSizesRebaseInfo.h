/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

