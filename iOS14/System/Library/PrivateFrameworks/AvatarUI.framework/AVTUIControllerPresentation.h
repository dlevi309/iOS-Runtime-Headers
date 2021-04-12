/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)setPendingGlobalPresentation:(id)arg1 ;
+(id)pendingGlobalPresentation;
+(id)presentationWithWrappingForController:(id)arg1 ;
-(id<AVTUIControllerPresentationDelegate>)delegate;
-(void)setDelegate:(id<AVTUIControllerPresentationDelegate>)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)viewWillBeObstructed;
-(MSMessagesAppViewController *)modalMessagesController;
-(void)setModalMessagesController:(MSMessagesAppViewController *)arg1 ;
-(UIViewController *)controller;
@end

