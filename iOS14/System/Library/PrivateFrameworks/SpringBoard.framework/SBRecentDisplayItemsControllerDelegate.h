/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBRecentDisplayItemsControllerDelegate <NSObject>
@optional
-(BOOL)recentDisplayItemsControllerShouldRepresentAppClipsAsWebClips:(id)arg1;
-(BOOL)recentDisplayItemsController:(id)arg1 shouldAddItem:(id)arg2;
-(void)recentDisplayItemsControllerDidUpdateDisplayItems:(id)arg1;
-(void)recentDisplayItemsController:(id)arg1 didAddItem:(id)arg2;
-(void)recentDisplayItemsController:(id)arg1 didAddItem:(id)arg2 andDropItem:(id)arg3;
-(void)recentDisplayItemsController:(id)arg1 didMoveItemToFront:(id)arg2;
-(void)recentDisplayItemsController:(id)arg1 didRemoveItem:(id)arg2;

@end

