/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ASCLockupPresenterObserver.h>
#import <libobjc.A.dylib/ASCOfferPresenterObserver.h>

@protocol ASCLockupViewDelegate;
@class ASCLockupContentView, ASCOfferPresenter, ASCAppearMetricsPresenter, ASCLockupPresenter, NSString, UIViewController, ASCMetricsActivity, ASCOfferTheme, ASCLockup, ASCLockupViewGroup, ASCLockupRequest;

@interface ASCLockupView : UIView <ASCLockupPresenterObserver, ASCOfferPresenterObserver> {

	SCD_Struct_AS3 _delegateRespondsTo;
	BOOL _automaticallyPresentsProductDetails;
	id<ASCLockupViewDelegate> _delegate;
	ASCLockupContentView* _contentView;
	ASCOfferPresenter* _offerPresenter;
	ASCAppearMetricsPresenter* _metricsPresenter;
	ASCLockupPresenter* _lockupPresenter;
	NSString* _storeSheetHostBundleID;
	NSString* _storeSheetUsageContext;

}

@property (nonatomic,retain) NSString * storeSheetHostBundleID; 
@property (nonatomic,retain) NSString * storeSheetUsageContext; 
@property (nonatomic,readonly) ASCLockupContentView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) ASCOfferPresenter * offerPresenter;                        //@synthesize offerPresenter=_offerPresenter - In the implementation block
@property (nonatomic,readonly) ASCAppearMetricsPresenter * metricsPresenter;              //@synthesize metricsPresenter=_metricsPresenter - In the implementation block
@property (nonatomic,readonly) ASCLockupPresenter * lockupPresenter;                      //@synthesize lockupPresenter=_lockupPresenter - In the implementation block
@property (nonatomic,retain) NSString * storeSheetHostBundleID;                           //@synthesize storeSheetHostBundleID=_storeSheetHostBundleID - In the implementation block
@property (nonatomic,retain) NSString * storeSheetUsageContext;                           //@synthesize storeSheetUsageContext=_storeSheetUsageContext - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (assign,nonatomic) BOOL automaticallyGeneratesAppearMetrics; 
@property (nonatomic,copy) ASCMetricsActivity * appearMetricsActivity; 
@property (nonatomic,copy) ASCOfferTheme * offerTheme; 
@property (nonatomic,retain) NSString * size; 
@property (nonatomic,copy) ASCLockup * lockup; 
@property (nonatomic,retain) ASCLockupViewGroup * group; 
@property (nonatomic,copy) ASCLockupRequest * request; 
@property (assign,nonatomic,__weak) id<ASCLockupViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL automaticallyPresentsProductDetails;                    //@synthesize automaticallyPresentsProductDetails=_automaticallyPresentsProductDetails - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)setGroup:(ASCLockupViewGroup *)arg1 ;
-(ASCLockupViewGroup *)group;
-(id)accessibilityLabel;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)setRequest:(ASCLockupRequest *)arg1 ;
-(id<ASCLockupViewDelegate>)delegate;
-(ASCLockup *)lockup;
-(void)setHidden:(BOOL)arg1 ;
-(NSString *)size;
-(void)setLockup:(ASCLockup *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAutomaticallyPresentsProductDetails:(BOOL)arg1 ;
-(void)setOfferTheme:(ASCOfferTheme *)arg1 ;
-(void)setSize:(NSString *)arg1 ;
-(id)_accessibilitySupplementaryFooterViews;
-(ASCLockupRequest *)request;
-(UIViewController *)presentingViewController;
-(unsigned long long)accessibilityTraits;
-(void)layoutContentView;
-(void)setDelegate:(id<ASCLockupViewDelegate>)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)presentProductDetailsViewController;
-(NSString *)description;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)accessibilityActivate;
-(ASCLockupContentView *)contentView;
-(void)setHighlighted:(BOOL)arg1 ;
-(ASCOfferPresenter *)offerPresenter;
-(ASCAppearMetricsPresenter *)metricsPresenter;
-(void)lockupPresenterDidBeginRequest;
-(void)lockupPresenterDidFinishRequest;
-(void)lockupPresenterDidFailRequestWithError:(id)arg1 ;
-(void)setViewRenderSpanProvider:(/*^block*/id)arg1 ;
-(BOOL)automaticallyPresentsProductDetails;
-(void)offerPresenterWillPerformActionOfOffer:(id)arg1 withActivity:(inout id*)arg2 ;
-(void)offerPresenterDidObserveChangeToState:(id)arg1 ;
-(NSString *)storeSheetHostBundleID;
-(NSString *)storeSheetUsageContext;
-(ASCLockupPresenter *)lockupPresenter;
-(void)performLockupAction;
-(ASCOfferTheme *)offerTheme;
-(BOOL)automaticallyGeneratesAppearMetrics;
-(void)setAutomaticallyGeneratesAppearMetrics:(BOOL)arg1 ;
-(ASCMetricsActivity *)appearMetricsActivity;
-(void)setAppearMetricsActivity:(ASCMetricsActivity *)arg1 ;
-(void)setStoreSheetHostBundleID:(NSString *)arg1 ;
-(void)setStoreSheetUsageContext:(NSString *)arg1 ;
@end

