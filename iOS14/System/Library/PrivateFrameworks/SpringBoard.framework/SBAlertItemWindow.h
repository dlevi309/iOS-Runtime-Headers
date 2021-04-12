/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSecureMainScreenActiveInterfaceOrientationWindow.h>

@class SBAlertLayoutPresentationVerifier;

@interface SBAlertItemWindow : SBSecureMainScreenActiveInterfaceOrientationWindow {

	SBAlertLayoutPresentationVerifier* _alertLayoutPresentationVerifier;

}

@property (assign,nonatomic,__weak) SBAlertLayoutPresentationVerifier * alertLayoutPresentationVerifier;              //@synthesize alertLayoutPresentationVerifier=_alertLayoutPresentationVerifier - In the implementation block
-(BOOL)_canBecomeKeyWindow;
-(SBAlertLayoutPresentationVerifier *)alertLayoutPresentationVerifier;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setAlertLayoutPresentationVerifier:(SBAlertLayoutPresentationVerifier *)arg1 ;
-(id)initWithDebugName:(id)arg1 alertLayoutPresentationVerifier:(id)arg2 ;
@end

