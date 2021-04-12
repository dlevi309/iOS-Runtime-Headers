/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKDiscoveryCardViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>
#import <libobjc.A.dylib/PKPGSVSectionSubheaderView.h>

@protocol PKPGSVSectionSubheaderDelegate;
@class NSMutableArray, NSArray, PKDiscoveryCardView, UIScrollView, UIPageControl, UIImage, NSString, PKDiscoveryDataSource;

@interface PKDiscoveryGalleryView : UIView <PKDiscoveryCardViewDelegate, UIScrollViewDelegate, PKForegroundActiveArbiterObserver, PKPGSVSectionSubheaderView> {

	NSMutableArray* _cardViews;
	NSArray* _displayedCardViews;
	NSMutableArray* _discoveryCardViews;
	id<PKPGSVSectionSubheaderDelegate> _subheaderDelegate;
	PKDiscoveryCardView* _passWelcomeView;
	PKDiscoveryCardView* _paymentWelcomeView;
	UIScrollView* _horizontalScrollView;
	UIPageControl* _pageControl;
	UIImage* _dismissImage;
	BOOL _needsUpdateAsHeaderSubview;
	unsigned long long _pendingDeletes;
	SCD_Struct_PK19 _layoutState;
	BOOL _welcomeCardStateIsDirty;
	NSString* _lastReportedDiscoveryItemIdentifier;
	SCD_Struct_PK5 _foregroundState;
	double _lastTimeForegroundActive;
	BOOL _articleLayoutsUpdatedAfterEnteringForegroundActive;
	BOOL _animatingCard;
	PKDiscoveryCardView* _pressedDiscoveryCardView;
	PKDiscoveryDataSource* _dataSource;

}

@property (nonatomic,__weak,readonly) PKDiscoveryCardView * pressedDiscoveryCardView;              //@synthesize pressedDiscoveryCardView=_pressedDiscoveryCardView - In the implementation block
@property (assign,getter=isAnimatingCard,nonatomic) BOOL animatingCard;                            //@synthesize animatingCard=_animatingCard - In the implementation block
@property (nonatomic,retain) PKDiscoveryDataSource * dataSource;                                   //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isVisibileForPKPGSVLayoutState:(SCD_Struct_PK19)arg1 dataSource:(id)arg2 ;
+(BOOL)paymentWelcomeCardIsAvailable;
+(id)passWelcomeCardMessageAttributedString;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(BOOL)needsUpdate;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK5)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(PKDiscoveryDataSource *)dataSource;
-(unsigned long long)displayIndex;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setDataSource:(PKDiscoveryDataSource *)arg1 ;
-(void)layoutSubviews;
-(CGSize)_contentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKDiscoveryCardView *)pressedDiscoveryCardView;
-(id)cardViewForCardWithItemIdentifier:(id)arg1 ;
-(void)setAnimatingCard:(BOOL)arg1 ;
-(BOOL)isAnimatingCard;
-(void)discoveryCardViewTapped:(id)arg1 ;
-(void)discoveryCardViewRemoveTapped:(id)arg1 ;
-(void)discoveryCardViewCTATapped:(id)arg1 callToAction:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(double)_defaultHeight;
-(void)setSubheaderDelegate:(id)arg1 ;
-(void)updateArticleLayouts:(id)arg1 ;
-(void)updatePageControlFrame;
-(BOOL)_requestDismissalIfNecessaryAfterLayoutStateUpdate;
-(void)_updateDiscoveryCardViewsForUpdatedArticleLayouts:(id)arg1 overrideFrontmostCardToIdentifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateCardViewsAnimated:(BOOL)arg1 ;
-(unsigned long long)_indexForCardViewWithIdentifier:(id)arg1 ;
-(void)_updateCardViewsAnimated:(BOOL)arg1 overrideFrontmostCardToIdentifier:(id)arg2 ;
-(void)_updateScrollViewToCardIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateCardViews;
-(void)_reportCurrentDiscoveryCardToDiscoveryService;
-(id)_createPaymentWelcomeCardView;
-(id)_createPassWelcomeCardView;
-(void)_removeCardView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_appStorePressed;
-(void)_scanCodePressed;
-(void)_updatePageControlVisibilityWithDelay:(double)arg1 ;
-(void)_pageControlChanged:(id)arg1 ;
-(void)updateForPKPGSVLayoutState:(SCD_Struct_PK19)arg1 ;
-(void)_updatePageControlWithDisplayIndex;
-(void)dealloc;
@end

