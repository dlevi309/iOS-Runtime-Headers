/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(UITableView *)tableView;
-(id)initWithTableView:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)selectedIndexPathsChanged:(id)arg1 ;
-(BOOL)supportsMultiSelectInteraction:(id)arg1 ;
-(BOOL)isInMultiSelectMode;
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1 ;
-(BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(CGPoint)arg3 withVelocity:(CGPoint)arg4 ;
-(void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(CGPoint)arg2 ;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(CGPoint)arg1 ;
-(void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(CGPoint)arg2 ;
-(void)didEndMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1 ;
-(void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)_tableViewDelegate;
-(void)_selectIndexPaths:(id)arg1 ;
-(void)_deselectIndexPaths:(id)arg1 ;
-(BOOL)_shouldBeginInteractionAtPoint:(CGPoint)arg1 ;
-(BOOL)_isPointInsideEditControl:(CGPoint)arg1 ;
-(UIMultiSelectInteraction *)multiSelectInteraction;
-(void)setMultiSelectInteraction:(UIMultiSelectInteraction *)arg1 ;
-(UIMultiSelectInteractionState *)currentSelectionState;
-(void)setCurrentSelectionState:(UIMultiSelectInteractionState *)arg1 ;
-(void)_updateSelectedIndexPaths:(id)arg1 ;
-(void)_updateSelectedIndexPathsForCurrentSelection;
-(void)willBeginExtendingSelectionAtIndexPath:(id)arg1 ;
-(void)_endAutoScroll;
-(void)_adjustSelectionRangeToIndexPath:(id)arg1 isDeselecting:(BOOL)arg2 ;
-(void)toggleSelectionStateUpToIndexPath:(id)arg1 ;
-(void)_handleAutoScrollFromPoint:(CGPoint)arg1 ;
-(void)uninstallFromTableView;
@end

