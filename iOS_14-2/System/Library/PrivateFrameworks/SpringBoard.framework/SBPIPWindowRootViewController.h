/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBPIPContainerViewControllerObserver.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@class NSMutableArray, NSHashTable, NSMapTable, NSArray, NSString;

@interface SBPIPWindowRootViewController : UIViewController <SBPIPContainerViewControllerObserver, SBUIActiveOrientationObserver> {

	NSMutableArray* _containerViewControllers;
	NSHashTable* _interfaceOrientationLockHashTable;
	NSMapTable* _containerViewControllerRequiredInterfaceOrientationMapTable;
	long long _activeInterfaceOrientation;

}

@property (assign,nonatomic) long long activeInterfaceOrientation;              //@synthesize activeInterfaceOrientation=_activeInterfaceOrientation - In the implementation block
@property (nonatomic,readonly) NSArray * containerViewControllers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)_overrideWindowActiveInterfaceOrientation;
-(long long)_overrideInterfaceOrientationMechanics;
-(void)setActiveInterfaceOrientation:(long long)arg1 ;
-(long long)activeInterfaceOrientation;
-(id)init;
-(BOOL)shouldAutorotate;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(long long)interfaceOrientationForContainerViewController:(id)arg1 ;
-(void)containerViewControllerAcquireInterfaceOrientationLock:(id)arg1 ;
-(void)containerViewControllerRelinquishInterfaceOrientationLock:(id)arg1 ;
-(void)containerViewControllerRequiredInterfaceOrientationDidChange:(id)arg1 ;
-(NSArray *)containerViewControllers;
-(void)addContainerViewController:(id)arg1 ;
-(void)removeContainerViewController:(id)arg1 ;
-(id)containerViewControllerForPictureInPictureViewController:(id)arg1 ;
-(void)_layoutInterfaceOrientationUnlockedContainerViewControllersAndForceLayout:(BOOL)arg1 ;
-(long long)_requiredInterfaceOrientationForContainerViewController:(id)arg1 ;
-(void)_layoutContainerViewControllers:(id)arg1 forceLayout:(BOOL)arg2 ;
-(BOOL)_hasOngoingMorphRestore;
-(long long)_interfaceOrientationForContainerViewController:(id)arg1 ;
@end

