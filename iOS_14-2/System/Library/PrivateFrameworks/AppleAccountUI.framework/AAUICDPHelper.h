/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

