/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


@class UIViewController;

@interface AAUICDPHelper : NSObject {

	UIViewController* _presentingViewController;
	BOOL _forceInline;

}

@property (assign,nonatomic) BOOL forceInline;                                                  //@synthesize forceInline=_forceInline - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
+(id)cdpContextForPrimaryAccount;
+(id)helperWithPresenter:(id)arg1 ;
+(id)cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1 ;
+(id)cdpContextForAccount:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(id)cdpStateControllerForPrimaryAccount;
-(void)setForceInline:(BOOL)arg1 ;
-(id)cdpStateControllerWithContext:(id)arg1 ;
-(BOOL)forceInline;
@end

