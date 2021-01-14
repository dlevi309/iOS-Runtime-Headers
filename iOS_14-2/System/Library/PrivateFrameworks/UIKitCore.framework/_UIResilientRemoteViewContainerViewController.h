/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol NSCopying;
@class UIViewController, NSExtension, _UIWaitingForRemoteViewContainerViewController;

@interface _UIResilientRemoteViewContainerViewController : UIViewController {

	UIViewController* _remoteViewController;
	BOOL _delayingDisplayOfRemoteView;
	NSExtension* _extension;
	id<NSCopying> _extensionRequestIdentifier;
	UIViewController* _containedViewController;
	_UIWaitingForRemoteViewContainerViewController* _waitingController;
	UIViewController* _errorViewController;

}

@property (nonatomic,retain) NSExtension * extension;                                                         //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> extensionRequestIdentifier;                                          //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,retain) UIViewController * containedViewController;                                      //@synthesize containedViewController=_containedViewController - In the implementation block
@property (nonatomic,retain) _UIWaitingForRemoteViewContainerViewController * waitingController;              //@synthesize waitingController=_waitingController - In the implementation block
@property (nonatomic,retain) UIViewController * errorViewController;                                          //@synthesize errorViewController=_errorViewController - In the implementation block
@property (assign,nonatomic) BOOL delayingDisplayOfRemoteView;                                                //@synthesize delayingDisplayOfRemoteView=_delayingDisplayOfRemoteView - In the implementation block
@property (nonatomic,readonly) id remoteViewController;                                                       //@synthesize remoteViewController=_remoteViewController - In the implementation block
+(id)instantiateWithExtension:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)remoteViewController;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
-(void)invalidate;
-(UIViewController *)containedViewController;
-(_UIWaitingForRemoteViewContainerViewController *)waitingController;
-(UIViewController *)errorViewController;
-(id)initWithExtension:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setWaitingController:(_UIWaitingForRemoteViewContainerViewController *)arg1 ;
-(void)setContainedViewController:(UIViewController *)arg1 ;
-(void)_displayRemoteViewController;
-(void)setErrorViewController:(UIViewController *)arg1 ;
-(void)delayDisplayOfRemoteController;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(void)endDelayingDisplayOfRemoteController;
-(CGRect)_defaultInitialViewFrame;
-(BOOL)delayingDisplayOfRemoteView;
-(void)setDelayingDisplayOfRemoteView:(BOOL)arg1 ;
-(id<NSCopying>)extensionRequestIdentifier;
-(void)_displayError:(id)arg1 ;
-(void)dealloc;
@end

