/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UICollectionLayoutItemSolver *)solution;
-(CGRect)layoutFrame;
-(NSCollectionLayoutItem *)item;
-(id)initWithSolution:(id)arg1 ;
-(void)setLayoutFrame:(CGRect)arg1 ;
@end

