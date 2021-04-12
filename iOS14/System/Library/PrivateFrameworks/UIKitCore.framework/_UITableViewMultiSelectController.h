/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIMultiSelectInteractionDelegate.h>

@class UITableView, UIMultiSelectInteraction, UIMultiSelectInteractionState, NSString;

@interface _UITableViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate> {

	UITableView* _tableView;
	UIMultiSelectInteraction* _multiSelectInteraction;
	UIMultiSelectInteractionState* _currentSelectionState;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                                     //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIMultiSelectInteraction * multiSelectInteraction;                  //@synthesize multiSelectInteraction=_multiSelectInteraction - In the implementation block
@property (nonatomic,retain) UIMultiSelectInteractionState * currentSelectionState;              //@synthesize currentSelectionState=_currentSelectionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isPointInsideEditControl:(CGPoint)arg1 ;
-(void)_updateSelectedIndexPathsForCurrentSelection;
-(UITableView *)tableView;
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1 ;
-(void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)didEndMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(BOOL)_shouldBeginInteractionAtIndexPath:(id)arg1 ;
-(void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(CGPoint)arg2 ;
-(BOOL)shouldAllowSelectionExtensionAtIndexPath:(id)arg1 ;
-(BOOL)supportsMultiSelectInteraction:(id)arg1 ;
-(void)_endAutoScroll;
-(void)uninstallFromTableView;
-(void)_handleAutoScrollFromPoint:(CGPoint)arg1 ;
-(BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1 ;
-(void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(CGPoint)arg2 ;
-(id)initWithTableView:(id)arg1 ;
-(UIMultiSelectInteractionState *)currentSelectionState;
-(void)setTableView:(UITableView *)arg1 ;
-(UIMultiSelectInteraction *)multiSelectInteraction;
-(id)_tableViewDelegate;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(CGPoint)arg1 ;
-(void)setCurrentSelectionState:(UIMultiSelectInteractionState *)arg1 ;
-(void)_adjustSelectionRangeToIndexPath:(id)arg1 isDeselecting:(BOOL)arg2 ;
-(BOOL)isInMultiSelectMode;
-(void)selectedIndexPathsChanged:(id)arg1 ;
-(void)_selectIndexPaths:(id)arg1 ;
-(BOOL)_shouldBeginInteractionAtPoint:(CGPoint)arg1 ;
-(void)_deselectIndexPaths:(id)arg1 ;
-(void)willBeginExtendingSelectionAtIndexPath:(id)arg1 ;
-(void)_updateSelectedIndexPaths:(id)arg1 ;
-(void)setMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 ;
-(void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)toggleSelectionStateUpToIndexPath:(id)arg1 ;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(CGPoint)arg3 withVelocity:(CGPoint)arg4 ;
@end

