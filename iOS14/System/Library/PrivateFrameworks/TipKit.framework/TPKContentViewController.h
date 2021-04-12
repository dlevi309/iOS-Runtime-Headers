/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipKit.framework/TipKit
*/

#import <TipKit/TipKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class UIViewController, UIBarItem, TPKContentController, UIView, NSString;

@interface TPKContentViewController : UIViewController <UIPopoverPresentationControllerDelegate> {

	UIViewController* _sourceViewController;
	UIBarItem* _barItem;
	TPKContentController* __contentController;
	CGSize __clientProvidedPreferredContentSize;
	CGRect __clientProvidedSourceRect;

}

@property (assign,nonatomic) CGSize _clientProvidedPreferredContentSize;                    //@synthesize _clientProvidedPreferredContentSize=__clientProvidedPreferredContentSize - In the implementation block
@property (assign,nonatomic) CGRect _clientProvidedSourceRect;                              //@synthesize _clientProvidedSourceRect=__clientProvidedSourceRect - In the implementation block
@property (assign,nonatomic,__weak) TPKContentController * _contentController;              //@synthesize _contentController=__contentController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * sourceViewController;                //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,retain) UIBarItem * barItem;                                           //@synthesize barItem=_barItem - In the implementation block
@property (nonatomic,retain) UIView * sourceView; 
@property (assign,nonatomic) CGRect sourceRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(BOOL)presentationControllerShouldDismiss:(id)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(void)setSourceView:(UIView *)arg1 ;
-(TPKContentController *)_contentController;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIView *)sourceView;
-(void)setSourceRect:(CGRect)arg1 ;
-(id)popoverPresentationController;
-(BOOL)isModalInPresentation;
-(CGRect)sourceRect;
-(void)setSourceViewController:(UIViewController *)arg1 ;
-(UIViewController *)sourceViewController;
-(void)dismissPopoverAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIBarItem *)barItem;
-(id)_passthroughViewsForViewController:(id)arg1 ;
-(void)_updatePopoverSize;
-(CGSize)_clientProvidedPreferredContentSize;
-(void)_tpkSetPreferredContentSize:(CGSize)arg1 ;
-(void)set_clientProvidedPreferredContentSize:(CGSize)arg1 ;
-(id)_passthroughViewsForView:(id)arg1 ;
-(id)initPopoverWithContentView:(id)arg1 sourceViewController:(id)arg2 ;
-(void)setBarItem:(UIBarItem *)arg1 ;
-(CGRect)_clientProvidedSourceRect;
-(void)set_clientProvidedSourceRect:(CGRect)arg1 ;
-(void)set_contentController:(TPKContentController *)arg1 ;
@end

