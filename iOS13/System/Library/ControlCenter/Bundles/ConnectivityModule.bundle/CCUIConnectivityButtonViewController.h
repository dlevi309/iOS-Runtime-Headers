/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)displayName;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)buttonTapped:(id)arg1 ;
-(id)subtitleText;
-(id)statusText;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 ;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)containerWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)startObservingStateChangesIfNecessary;
-(void)stopObservingStateChangesIfNecessary;
-(void)startObservingStateChanges;
-(void)stopObservingStateChanges;
-(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

