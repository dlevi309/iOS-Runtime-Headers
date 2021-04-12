/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNUIEditAuthorizationControllerDelegate;
@class UIViewController;

@interface CNUIEditAuthorizationController : NSObject {

	BOOL _animated;
	id<CNUIEditAuthorizationControllerDelegate> _delegate;
	id _sender;
	UIViewController* _guardedViewController;

}

@property (assign,nonatomic,__weak) id<CNUIEditAuthorizationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id sender;                                                         //@synthesize sender=_sender - In the implementation block
@property (assign,nonatomic) BOOL animated;                                                            //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * guardedViewController;                          //@synthesize guardedViewController=_guardedViewController - In the implementation block
-(BOOL)animated;
-(id)sender;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setSender:(id)arg1 ;
-(id<CNUIEditAuthorizationControllerDelegate>)delegate;
-(void)didAutorize;
-(void)presentAuthorizationUI;
-(void)lockoutRestrictionsPINControllerDidFinish:(id)arg1 ;
-(void)didNotAuthorize;
-(void)userDidEnterPasswordCorrectly:(BOOL)arg1 ;
-(UIViewController *)guardedViewController;
-(void)setGuardedViewController:(UIViewController *)arg1 ;
-(void)setDelegate:(id<CNUIEditAuthorizationControllerDelegate>)arg1 ;
-(void)dealloc;
@end

