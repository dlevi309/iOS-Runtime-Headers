/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <ControlCenterUIKit/CCUILabeledRoundButtonViewController.h>

@class CCUIContentModuleContext;

@interface CCUIConnectivityButtonViewController : CCUILabeledRoundButtonViewController {

	BOOL _observingStateChanges;
	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;              //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
+(BOOL)isSupported;
-(id)statusText;
-(void)buttonTapped:(id)arg1 ;
-(void)containerWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 ;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)startObservingStateChangesIfNecessary;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)startObservingStateChanges;
-(void)stopObservingStateChangesIfNecessary;
-(id)subtitleText;
-(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopObservingStateChanges;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 ;
-(id)displayName;
@end

