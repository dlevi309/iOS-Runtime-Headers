/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/SBLockScreenPluginDelegate.h>

@class SBLockScreenPlugin, NSString;

@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase <SBLockScreenPluginDelegate> {

	SBLockScreenPlugin* _plugin;

}

@property (nonatomic,readonly) SBLockScreenPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(id)succinctDescriptionBuilder;
-(id)view;
-(long long)presentationStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(SBLockScreenPlugin *)plugin;
-(long long)presentationType;
-(long long)presentationTransition;
-(void)updateForPresentation:(id)arg1 ;
-(void)_updateLegibility;
-(long long)presentationPriority;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(id)coverSheetIdentifier;
-(id)displayLayoutElementIdentifier;
-(void)performCustomTransitionToVisible:(BOOL)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)willTransitionToPresented:(BOOL)arg1 ;
-(long long)_presentationPriority;
-(void)pluginAppearanceDidChange:(id)arg1 ;
-(id)initWithLockScreenPlugin:(id)arg1 ;
@end

