/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>

@protocol OS_os_transaction;
@class SearchUIRowModel, UIView, NSObject, NSString;

@interface SearchUIDragSource : NSObject <UIDragInteractionDelegate, UIDragInteractionDelegate_Private> {

	SearchUIRowModel* _dragObject;
	UIView* _overrideDragPreviewView;
	UIView* _dragSourceView;
	NSObject*<OS_os_transaction> _transaction;

}

@property (__weak) UIView * dragSourceView;                                 //@synthesize dragSourceView=_dragSourceView - In the implementation block
@property (retain) NSObject*<OS_os_transaction> transaction;                //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) SearchUIRowModel * dragObject;                 //@synthesize dragObject=_dragObject - In the implementation block
@property (nonatomic,retain) UIView * overrideDragPreviewView;              //@synthesize overrideDragPreviewView=_overrideDragPreviewView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dragSourceForView:(id)arg1 dragObject:(id)arg2 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(id)_requiredContextIDsForDragSessionInView:(id)arg1 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(void)setDragObject:(SearchUIRowModel *)arg1 ;
-(id)initWithView:(id)arg1 dragObject:(id)arg2 ;
-(void)setDragSourceView:(UIView *)arg1 ;
-(UIView *)dragSourceView;
-(UIView *)overrideDragPreviewView;
-(SearchUIRowModel *)dragObject;
-(BOOL)isMailDrag;
-(id)dragParametersForPreviewView:(id)arg1 ;
-(BOOL)_shouldPerformHitTestingForDragSessionInView:(id)arg1 ;
-(void)setOverrideDragPreviewView:(UIView *)arg1 ;
@end

