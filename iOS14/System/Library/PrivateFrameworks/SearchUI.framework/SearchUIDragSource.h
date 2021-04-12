/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKit/UIDragInteractionDelegate.h>
#import <UIKit/UIDragInteractionDelegate_Private.h>

@protocol SearchUIFeedbackDelegate;
@class SearchUIRowModel, UIView, NSString;

@interface SearchUIDragSource : NSObject <UIDragInteractionDelegate, UIDragInteractionDelegate_Private> {

	SearchUIRowModel* _dragObject;
	UIView* _overrideDragPreviewView;
	UIView* _dragSourceView;
	id<SearchUIFeedbackDelegate> _feedbackDelegate;

}

@property (__weak) UIView * dragSourceView;                                    //@synthesize dragSourceView=_dragSourceView - In the implementation block
@property (__weak) id<SearchUIFeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
@property (nonatomic,retain) SearchUIRowModel * dragObject;                    //@synthesize dragObject=_dragObject - In the implementation block
@property (nonatomic,retain) UIView * overrideDragPreviewView;                 //@synthesize overrideDragPreviewView=_overrideDragPreviewView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dragSourceForView:(id)arg1 dragObject:(id)arg2 feedbackDelegate:(id)arg3 ;
-(id)_requiredContextIDsForDragSessionInView:(id)arg1 ;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(id)initWithView:(id)arg1 dragObject:(id)arg2 feedbackDelegate:(id)arg3 ;
-(void)setDragSourceView:(UIView *)arg1 ;
-(UIView *)dragSourceView;
-(UIView *)overrideDragPreviewView;
-(SearchUIRowModel *)dragObject;
-(BOOL)isMailDrag;
-(id)dragParametersForPreviewView:(id)arg1 ;
-(void)sendDragFeedback;
-(BOOL)_shouldPerformHitTestingForDragSessionInView:(id)arg1 ;
-(void)setOverrideDragPreviewView:(UIView *)arg1 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)setFeedbackDelegate:(id<SearchUIFeedbackDelegate>)arg1 ;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id<SearchUIFeedbackDelegate>)feedbackDelegate;
-(void)setDragObject:(SearchUIRowModel *)arg1 ;
-(BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
@end

