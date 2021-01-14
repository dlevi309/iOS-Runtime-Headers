/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)presentationStyle;
-(long long)presentationPriority;
-(long long)presentationTransition;
-(id)displayLayoutElementIdentifier;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SBLockScreenPlugin *)plugin;
-(void)aggregateBehavior:(id)arg1 ;
-(id)coverSheetIdentifier;
-(void)aggregateAppearance:(id)arg1 ;
-(id)view;
-(long long)presentationType;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)performCustomTransitionToVisible:(BOOL)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)succinctDescriptionBuilder;
-(void)_updateLegibility;
-(void)updateForPresentation:(id)arg1 ;
-(void)willTransitionToPresented:(BOOL)arg1 ;
-(long long)_presentationPriority;
-(void)pluginAppearanceDidChange:(id)arg1 ;
-(id)initWithLockScreenPlugin:(id)arg1 ;
@end

