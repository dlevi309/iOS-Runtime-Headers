/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTUIControllerPresentationDelegate;
@class UIViewController, MSMessagesAppViewController;

@interface AVTUIControllerPresentation : NSObject {

	UIViewController* _controller;
	MSMessagesAppViewController* _modalMessagesController;
	id<AVTUIControllerPresentationDelegate> _delegate;

}

@property (nonatomic,readonly) UIViewController * controller;                                           //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) MSMessagesAppViewController * modalMessagesController;              //@synthesize modalMessagesController=_modalMessagesController - In the implementation block
@property (assign,nonatomic,__weak) id<AVTUIControllerPresentationDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
+(id)presentationWithWrappingForController:(id)arg1 ;
+(void)setPendingGlobalPresentation:(id)arg1 ;
+(id)pendingGlobalPresentation;
-(id<AVTUIControllerPresentationDelegate>)delegate;
-(void)setDelegate:(id<AVTUIControllerPresentationDelegate>)arg1 ;
-(UIViewController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)viewWillBeObstructed;
-(MSMessagesAppViewController *)modalMessagesController;
-(void)setModalMessagesController:(MSMessagesAppViewController *)arg1 ;
@end

