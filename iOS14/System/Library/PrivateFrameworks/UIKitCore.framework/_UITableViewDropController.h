/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>
#import <UIKitCore/_UITableViewDropCoordinatorDelegate.h>

@protocol _UITableViewDropControllerDelegate, UIDropSession;
@class UIDropInteraction, UITableView, NSIndexPath, UITableViewDropProposal, NSMapTable, NSString;

@interface _UITableViewDropController : NSObject <UIDropInteractionDelegate_Private, _UITableViewDropCoordinatorDelegate> {

	BOOL _canOnlyHandleReordering;
	UIDropInteraction* _dropInteraction;
	UITableView*<_UITableViewDropControllerDelegate> _tableView;
	unsigned long long _defaultDropOperation;
	NSIndexPath* _targetIndexPath;
	UITableViewDropProposal* _dropProposal;
	id<UIDropSession> _dropSession;
	long long _ignoringDragsCount;
	NSMapTable* _dragItemDropAnimations;

}

@property (nonatomic,retain) UIDropInteraction * dropInteraction;                                            //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (assign,nonatomic,__weak) UITableView*<_UITableViewDropControllerDelegate> tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) unsigned long long defaultDropOperation;                                        //@synthesize defaultDropOperation=_defaultDropOperation - In the implementation block
@property (getter=isTrackingDrag,nonatomic,readonly) BOOL trackingDrag; 
@property (nonatomic,retain) NSIndexPath * targetIndexPath;                                                  //@synthesize targetIndexPath=_targetIndexPath - In the implementation block
@property (nonatomic,retain) UITableViewDropProposal * dropProposal;                                         //@synthesize dropProposal=_dropProposal - In the implementation block
@property (nonatomic,retain) id<UIDropSession> dropSession;                                                  //@synthesize dropSession=_dropSession - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnoreDrags; 
@property (assign,nonatomic) long long ignoringDragsCount;                                                   //@synthesize ignoringDragsCount=_ignoringDragsCount - In the implementation block
@property (nonatomic,retain) NSMapTable * dragItemDropAnimations;                                            //@synthesize dragItemDropAnimations=_dragItemDropAnimations - In the implementation block
@property (assign,nonatomic) BOOL canOnlyHandleReordering;                                                   //@synthesize canOnlyHandleReordering=_canOnlyHandleReordering - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(UIDropInteraction *)dropInteraction;
-(UITableViewDropProposal *)dropProposal;
-(id<UIDropSession>)dropSession;
-(void)beginIgnoringDrags;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(NSIndexPath *)targetIndexPath;
-(void)setDragItemDropAnimations:(NSMapTable *)arg1 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(long long)ignoringDragsCount;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(UITableView*<_UITableViewDropControllerDelegate>)tableView;
-(id)animateDragItem:(id)arg1 toTarget:(id)arg2 ;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(id)animateDragItem:(id)arg1 toRowAtIndexPath:(id)arg2 ;
-(BOOL)isActive;
-(NSMapTable *)dragItemDropAnimations;
-(BOOL)shouldIgnoreDrags;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)setDropSession:(id<UIDropSession>)arg1 ;
-(BOOL)commitPlaceholderInsertionWithContext:(id)arg1 dataSourceUpdates:(/*^block*/id)arg2 ;
-(BOOL)canOnlyHandleReordering;
-(unsigned long long)defaultDropOperation;
-(void)setDropProposal:(UITableViewDropProposal *)arg1 ;
-(id)animateDragItem:(id)arg1 toCell:(id)arg2 withPreviewParameters:(id)arg3 ;
-(void)uninstallFromTableView;
-(void)setupDragInteraction;
-(id)animateDragItem:(id)arg1 intoRowAtIndexPath:(id)arg2 rect:(CGRect)arg3 ;
-(void)setCanOnlyHandleReordering:(BOOL)arg1 ;
-(void)insertPlaceholderAtIndexPath:(id)arg1 withContext:(id)arg2 previewParametersProvider:(/*^block*/id)arg3 ;
-(id)initWithTableView:(id)arg1 ;
-(id)defaultAnimatorForDragItem:(id)arg1 ;
-(void)setIgnoringDragsCount:(long long)arg1 ;
-(BOOL)deletePlaceholder:(id)arg1 ;
-(void)setTableView:(UITableView*<_UITableViewDropControllerDelegate>)arg1 ;
-(void)setTargetIndexPath:(NSIndexPath *)arg1 ;
-(void)setDefaultDropOperation:(unsigned long long)arg1 ;
-(BOOL)isTrackingDrag;
-(void)updateTargetIndexPathAndDropProposalForSession:(id)arg1 ;
-(void)resetAllDragState;
-(void)resetTrackingState;
-(void)endIgnoringDrags;
@end

