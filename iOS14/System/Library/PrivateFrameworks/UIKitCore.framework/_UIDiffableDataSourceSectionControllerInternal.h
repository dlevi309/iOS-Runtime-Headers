/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDiffableDataSourceSectionController.h>

@class NSArray, NSSet;

@interface _UIDiffableDataSourceSectionControllerInternal : _UIDiffableDataSourceSectionController

@property (nonatomic,readonly) NSArray * itemRenderers; 
@property (nonatomic,readonly) NSSet * associatedSectionIdentifiers; 
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 viewPropertyAnimator:(id)arg3 customAnimationsProvider:(/*^block*/id)arg4 ;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)collectionViewDiffableDataSourceSectionController;
-(id)initWithItemRenderers:(id)arg1 ;
-(void)applySnapshot:(id)arg1 toSection:(id)arg2 customAnimationsProvider:(/*^block*/id)arg3 ;
@end

