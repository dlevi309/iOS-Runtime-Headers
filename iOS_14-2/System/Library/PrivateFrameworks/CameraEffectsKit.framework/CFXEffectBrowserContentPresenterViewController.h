/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CFXEffectBrowserContentPresenterDelegate.h>

@protocol CFXEffectBrowserContentPresenterViewControllerDelegate;
@class JFXOrientationMonitor, NSString;

@interface CFXEffectBrowserContentPresenterViewController : UIViewController <CFXEffectBrowserContentPresenterDelegate> {

	id<CFXEffectBrowserContentPresenterViewControllerDelegate> _delegate;
	JFXOrientationMonitor* _orientationMonitor;

}

@property (nonatomic,retain) JFXOrientationMonitor * orientationMonitor;                                              //@synthesize orientationMonitor=_orientationMonitor - In the implementation block
@property (assign,nonatomic,__weak) id<CFXEffectBrowserContentPresenterViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CFXEffectBrowserContentPresenterViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CFXEffectBrowserContentPresenterViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(CGSize)expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg1 ;
-(JFXOrientationMonitor *)orientationMonitor;
-(void)setOrientationMonitor:(JFXOrientationMonitor *)arg1 ;
-(double)CFX_alwaysExpandedAppHeight;
-(id)CFX_constraintsForAlwaysExpandedAppView:(id)arg1 containerView:(id)arg2 ;
-(void)configureEffectBrowserContentPresentationForOrientation:(long long)arg1 ;
@end

