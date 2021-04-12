/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/CSStatusTextViewControllerDelegate.h>

@protocol SBFAuthenticationStatusProvider;
@class CSStatusTextViewController, NSString, CSFixedFooterView;

@interface CSFixedFooterViewController : CSCoverSheetViewControllerBase <CSStatusTextViewControllerDelegate> {

	CSStatusTextViewController* _statusTextViewController;
	NSString* _cachedMesaFailureText;
	BOOL _temporaryMesaFailureTextActive;
	BOOL _authenticatedSinceFingerOn;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;

}

@property (nonatomic,retain) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;              //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (nonatomic,readonly) CSFixedFooterView * fixedFooterView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(void)setAuthenticationStatusProvider:(id<SBFAuthenticationStatusProvider>)arg1 ;
-(void)updateCallToActionForReversingInteractiveTransition;
-(CSFixedFooterView *)fixedFooterView;
-(void)updateCallToActionForMesaMatchFailure;
-(void)coverSheetStatusTextViewControllerContentDidChange:(id)arg1 ;
-(void)_updateCallToActionTextAnimated:(BOOL)arg1 ;
-(void)_addStatusTextViewControllerIfNecessary;
@end

