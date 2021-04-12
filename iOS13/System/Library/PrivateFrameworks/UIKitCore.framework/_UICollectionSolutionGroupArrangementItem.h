/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UICollectionLayoutItemSolver, NSCollectionLayoutItem;

@interface _UICollectionSolutionGroupArrangementItem : NSObject {

	_UICollectionLayoutItemSolver* _solution;
	CGRect _layoutFrame;

}

@property (assign,nonatomic) CGRect layoutFrame;                                      //@synthesize layoutFrame=_layoutFrame - In the implementation block
@property (nonatomic,readonly) _UICollectionLayoutItemSolver * solution;              //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutItem * item; 
-(NSCollectionLayoutItem *)item;
-(_UICollectionLayoutItemSolver *)solution;
-(CGRect)layoutFrame;
-(id)initWithSolution:(id)arg1 ;
-(void)setLayoutFrame:(CGRect)arg1 ;
@end

