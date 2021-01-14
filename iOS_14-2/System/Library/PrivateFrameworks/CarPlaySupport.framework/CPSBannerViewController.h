/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/BNPresentable.h>

@protocol CPSBannerViewControllerDelegate;
@class UIViewController, NSString, CPSBannerItem, PLPlatterView, CPSGuidanceBannerView;

@interface CPSBannerViewController : UIViewController <BNPresentable> {

	NSString* _requestIdentifier;
	id<CPSBannerViewControllerDelegate> _delegate;
	CPSBannerItem* _bannerItem;
	PLPlatterView* _platterView;
	CPSGuidanceBannerView* _bannerView;

}

@property (nonatomic,retain) PLPlatterView * platterView;                                                            //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) CPSGuidanceBannerView * bannerView;                                                     //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic,__weak) id<CPSBannerViewControllerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CPSBannerItem * bannerItem;                                                           //@synthesize bannerItem=_bannerItem - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) long long presentableType; 
@property (getter=isDraggingDismissalEnabled,nonatomic,readonly) BOOL draggingDismissalEnabled; 
@property (getter=isDraggingInteractionEnabled,nonatomic,readonly) BOOL draggingInteractionEnabled; 
@property (getter=isTouchOutsideDismissalEnabled,nonatomic,readonly) BOOL touchOutsideDismissalEnabled; 
@property (nonatomic,copy,readonly) NSString * requesterIdentifier; 
@property (nonatomic,copy,readonly) NSString * requestIdentifier;                                                    //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2 ;
-(NSString *)requestIdentifier;
-(PLPlatterView *)platterView;
-(void)setPlatterView:(PLPlatterView *)arg1 ;
-(id<CPSBannerViewControllerDelegate>)delegate;
-(void)setBannerView:(CPSGuidanceBannerView *)arg1 ;
-(NSString *)requesterIdentifier;
-(void)setDelegate:(id<CPSBannerViewControllerDelegate>)arg1 ;
-(UIViewController *)viewController;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)viewDidLoad;
-(void)presentableDidAppearAsBanner:(id)arg1 ;
-(CPSGuidanceBannerView *)bannerView;
-(CGSize)preferredContentSizeWithPresentationSize:(CGSize)arg1 containerSize:(CGSize)arg2 ;
-(BOOL)isTouchOutsideDismissalEnabled;
-(void)_handleBackGesture:(id)arg1 ;
-(id)initWithBannerItem:(id)arg1 ;
-(CPSBannerItem *)bannerItem;
-(void)updateBannerWithBannerItem:(id)arg1 ;
-(void)_bannerTapped:(id)arg1 ;
@end

