/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<CNUIEditAuthorizationControllerDelegate>)delegate;
-(void)setDelegate:(id<CNUIEditAuthorizationControllerDelegate>)arg1 ;
-(id)sender;
-(void)setSender:(id)arg1 ;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)presentAuthorizationUI;
-(void)lockoutRestrictionsPINControllerDidFinish:(id)arg1 ;
-(void)didAutorize;
-(void)didNotAuthorize;
-(UIViewController *)guardedViewController;
-(void)setGuardedViewController:(UIViewController *)arg1 ;
@end

