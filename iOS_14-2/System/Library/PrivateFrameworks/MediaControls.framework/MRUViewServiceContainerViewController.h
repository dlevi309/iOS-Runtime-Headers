/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/MRUViewServiceRoutingViewControllerDelegate.h>
#import <libobjc.A.dylib/MRUViewServiceViewController.h>

@class MPMediaControlsConfiguration, MRUViewServiceRoutingViewController, UIView, MTMaterialView, NSString;

@interface MRUViewServiceContainerViewController : UIViewController <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate, MRUViewServiceRoutingViewControllerDelegate, MRUViewServiceViewController> {

	MPMediaControlsConfiguration* _configuration;
	/*^block*/id _dismissalBlock;
	MRUViewServiceRoutingViewController* _routingViewController;
	UIView* _sourceView;
	MTMaterialView* _materialView;

}

@property (nonatomic,retain) MRUViewServiceRoutingViewController * routingViewController;              //@synthesize routingViewController=_routingViewController - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                                      //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) MTMaterialView * materialView;                                            //@synthesize materialView=_materialView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MPMediaControlsConfiguration * configuration;                             //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) id dismissalBlock;                                                          //@synthesize dismissalBlock=_dismissalBlock - In the implementation block
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(id)init;
-(void)setSourceView:(UIView *)arg1 ;
-(void)setRoutingViewController:(MRUViewServiceRoutingViewController *)arg1 ;
-(UIView *)sourceView;
-(MTMaterialView *)materialView;
-(MPMediaControlsConfiguration *)configuration;
-(BOOL)_canShowWhileLocked;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)viewDidLoad;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)setDismissalBlock:(id)arg1 ;
-(id)dismissalBlock;
-(void)setMaterialView:(MTMaterialView *)arg1 ;
-(MRUViewServiceRoutingViewController *)routingViewController;
-(void)viewDidLayoutSubviews;
-(void)setConfiguration:(MPMediaControlsConfiguration *)arg1 ;
-(void)viewServiceRoutingViewControllerDidDismiss:(id)arg1 ;
-(void)viewServiceRoutingViewControllerDidChangeSize:(id)arg1 ;
-(BOOL)shouldPresentUsingPopover;
-(void)updateMaterialForPresenting:(BOOL)arg1 ;
-(void)transitionToVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

