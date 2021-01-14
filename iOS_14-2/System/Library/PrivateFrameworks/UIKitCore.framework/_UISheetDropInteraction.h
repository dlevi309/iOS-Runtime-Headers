/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIDropInteractionDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol _UISheetDropInteractionDelegate;
@class UIView, UIDropInteraction, NSMapTable, UIPresentationController, NSString;

@interface _UISheetDropInteraction : NSObject <UIDropInteractionDelegate, UIInteraction> {

	UIView* _view;
	id<_UISheetDropInteractionDelegate> _delegate;
	UIDropInteraction* _dropInteraction;
	NSMapTable* _activityTypesOrActivities;
	UIPresentationController* _presentationController;

}

@property (nonatomic,readonly) UIDropInteraction * dropInteraction;                              //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (nonatomic,readonly) NSMapTable * activityTypesOrActivities;                           //@synthesize activityTypesOrActivities=_activityTypesOrActivities - In the implementation block
@property (nonatomic,retain) UIPresentationController * presentationController;                  //@synthesize presentationController=_presentationController - In the implementation block
@property (nonatomic,__weak,readonly) id<_UISheetDropInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                             //@synthesize view=_view - In the implementation block
-(UIDropInteraction *)dropInteraction;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(id<_UISheetDropInteractionDelegate>)delegate;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)didMoveToView:(id)arg1 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(id)_activityTypeForSession:(id)arg1 ;
-(NSMapTable *)activityTypesOrActivities;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)_activityForSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeActivityTypeOrActivityForSession:(id)arg1 ;
-(void)setPresentationController:(UIPresentationController *)arg1 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)willMoveToView:(id)arg1 ;
-(UIView *)view;
-(id)initWithDelegate:(id)arg1 ;
-(UIPresentationController *)presentationController;
@end

