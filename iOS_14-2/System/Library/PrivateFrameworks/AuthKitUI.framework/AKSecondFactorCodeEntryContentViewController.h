/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/AKSecondFactorCodeEntry.h>

@class AKCodeEntryView, AKBasicLoginContentViewController, AKAppleIDAuthenticationContext, NSArray, NSString;

@interface AKSecondFactorCodeEntryContentViewController : UIViewController <CAAnimationDelegate, AKSecondFactorCodeEntry> {

	AKCodeEntryView* _codeGeneratorView;
	AKBasicLoginContentViewController* _titleHeaderViewController;
	AKAppleIDAuthenticationContext* _authenticationContext;
	NSArray* _activeConstraints;

}

@property (nonatomic,retain) AKCodeEntryView * codeGeneratorView;                                        //@synthesize codeGeneratorView=_codeGeneratorView - In the implementation block
@property (nonatomic,retain) AKBasicLoginContentViewController * titleHeaderViewController;              //@synthesize titleHeaderViewController=_titleHeaderViewController - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationContext * authenticationContext;                     //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                                //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,readonly) NSString * generatedCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(void)viewWillLayoutSubviews;
-(NSString *)generatedCode;
-(void)setAuthenticationContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(NSArray *)activeConstraints;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(AKAppleIDAuthenticationContext *)authenticationContext;
-(NSString *)reason;
-(void)loadView;
-(void)setReason:(NSString *)arg1 ;
-(void)dealloc;
-(void)setPasscodeFieldDisabled:(BOOL)arg1 ;
-(void)_configureTitleHeaderView;
-(void)_configureCodeGenView;
-(void)_updateFontContstraints:(id)arg1 ;
-(void)jiggleAView;
-(void)clearSecondFactorEntry;
-(AKCodeEntryView *)codeGeneratorView;
-(void)setCodeGeneratorView:(AKCodeEntryView *)arg1 ;
-(AKBasicLoginContentViewController *)titleHeaderViewController;
-(void)setTitleHeaderViewController:(AKBasicLoginContentViewController *)arg1 ;
@end

