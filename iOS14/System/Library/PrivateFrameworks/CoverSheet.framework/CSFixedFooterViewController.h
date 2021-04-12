/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setAuthenticationStatusProvider:(id<SBFAuthenticationStatusProvider>)arg1 ;
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(id)init;
-(void)_addStatusTextViewControllerIfNecessary;
-(void)_updateCallToActionTextAnimated:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateCallToActionForMesaMatchFailure;
-(void)updateCallToActionForReversingInteractiveTransition;
-(void)viewDidLoad;
-(CSFixedFooterView *)fixedFooterView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)coverSheetStatusTextViewControllerContentDidChange:(id)arg1 ;
@end

