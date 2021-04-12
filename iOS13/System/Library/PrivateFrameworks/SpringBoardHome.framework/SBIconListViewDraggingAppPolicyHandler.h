/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconListViewDraggingPolicyHandling.h>

@class NSMapTable, SBIconListViewDraggingDestinationDelegate, NSString;

@interface SBIconListViewDraggingAppPolicyHandler : NSObject <SBIconListViewDraggingPolicyHandling> {

	NSMapTable* _dragContexts;
	SBIconListViewDraggingDestinationDelegate* _draggingDestinationDelegate;

}

@property (assign,nonatomic,__weak) SBIconListViewDraggingDestinationDelegate * draggingDestinationDelegate;              //@synthesize draggingDestinationDelegate=_draggingDestinationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)setDraggingDestinationDelegate:(SBIconListViewDraggingDestinationDelegate *)arg1 ;
-(BOOL)allowsSpringLoadForSession:(id)arg1 onIconView:(id)arg2 ;
-(void)handleSpringLoadOnIconView:(id)arg1 ;
-(void)_cancelDragPauseTimerForDropSession:(id)arg1 ;
-(SBIconListViewDraggingDestinationDelegate *)draggingDestinationDelegate;
-(void)_dragPauseTimerFired:(id)arg1 ;
-(void)_resetDragPauseTimerForPoint:(CGPoint)arg1 dropSession:(id)arg2 ;
-(void)_updateDragPauseForDropSession:(id)arg1 ;
-(id)_iconForDragItem:(id)arg1 ;
-(id)_iconViewForDragItem:(id)arg1 ;
-(id)_destinationFolderIconViewForDragItem:(id)arg1 iconIndexPath:(id*)arg2 folderRelativeIconIndexPath:(id*)arg3 ;
-(void)_cancelDragPauseTimers;
@end

