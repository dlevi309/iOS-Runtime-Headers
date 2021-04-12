/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/WLEasyToHitCustomView.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKForegroundActiveArbiterObserver.h>

@class PKPass, PKPassColorProfile, NSMutableSet, UIView, UIImageView, UIImage, CAFilter, NSMutableArray, PKLiveRenderedCardFaceView, PKTransactionDataOverlayCardFaceView, PKPaymentService, NSArray, PKPassFaceTemplate, PKPassFaceViewRendererState, NSString;

@interface PKPassFaceView : WLEasyToHitCustomView <PKPaymentServiceDelegate, PKForegroundActiveArbiterObserver> {

	PKPass* _pass;
	PKPassColorProfile* _colorProfile;
	NSMutableSet* _headerInvariantViews;
	NSMutableSet* _bodyInvariantViews;
	NSMutableSet* _headerContentViews;
	NSMutableSet* _bodyContentViews;
	BOOL _showingHeader;
	BOOL _showingBody;
	BOOL _resizablePartialImage;
	UIView* _contentView;
	UIImageView* _backgroundView;
	UIImageView* _shadowBackgroundView;
	UIImage* _faceImage;
	UIImage* _faceShadowImage;
	UIImage* _partialFaceImage;
	CAFilter* _dimmingFilter;
	double _dimmer;
	NSMutableArray* _headerBucketViews;
	NSMutableArray* _bodyBucketViews;
	NSMutableArray* _delayedAnimations;
	PKLiveRenderedCardFaceView* _liveBackgroundView;
	PKTransactionDataOverlayCardFaceView* _transactionDataOverlayView;
	unsigned long long _contentViewCreatedRegions;
	unsigned long long _invariantViewCreatedRegions;
	BOOL _showsLiveRendering;
	BOOL _foregroundActive;
	PKPaymentService* _paymentService;
	BOOL _invalidated;
	BOOL _clipsContent;
	BOOL _allowBackgroundPlaceHolders;
	BOOL _liveMotionEnabled;
	long long _backgroundMode;
	unsigned long long _visibleRegions;
	double _clippedContentHeight;
	NSArray* _buckets;
	long long _style;
	PKPassFaceTemplate* _faceTemplate;

}

@property (nonatomic,retain,readonly) NSArray * buckets;                                 //@synthesize buckets=_buckets - In the implementation block
@property (assign,nonatomic) long long style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSMutableArray * headerBucketViews;                         //@synthesize headerBucketViews=_headerBucketViews - In the implementation block
@property (nonatomic,readonly) PKPassFaceTemplate * faceTemplate;                        //@synthesize faceTemplate=_faceTemplate - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) CGRect contentBounds; 
@property (nonatomic,readonly) PKPass * pass; 
@property (nonatomic,readonly) PKPassColorProfile * colorProfile; 
@property (assign,nonatomic) long long backgroundMode;                                   //@synthesize backgroundMode=_backgroundMode - In the implementation block
@property (assign,nonatomic) unsigned long long visibleRegions;                          //@synthesize visibleRegions=_visibleRegions - In the implementation block
@property (assign,nonatomic) BOOL clipsContent;                                          //@synthesize clipsContent=_clipsContent - In the implementation block
@property (assign,nonatomic) BOOL allowBackgroundPlaceHolders;                           //@synthesize allowBackgroundPlaceHolders=_allowBackgroundPlaceHolders - In the implementation block
@property (assign,nonatomic) double clippedContentHeight;                                //@synthesize clippedContentHeight=_clippedContentHeight - In the implementation block
@property (nonatomic,readonly) BOOL bodyContentCreated; 
@property (nonatomic,readonly) UIEdgeInsets shadowInsets; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (assign,nonatomic) BOOL showsLiveRendering;                                    //@synthesize showsLiveRendering=_showsLiveRendering - In the implementation block
@property (assign,nonatomic) BOOL liveMotionEnabled;                                     //@synthesize liveMotionEnabled=_liveMotionEnabled - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (nonatomic,readonly) PKPassFaceViewRendererState * rendererState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_faceClassForStyle:(long long)arg1 ;
+(id)newFrontFaceViewForStyle:(long long)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isPaused;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(CGSize)contentSize;
-(void)setPaused:(BOOL)arg1 ;
-(NSArray *)buckets;
-(UIView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(CGRect)contentBounds;
-(void)didAuthenticate;
-(long long)backgroundMode;
-(PKPass *)pass;
-(void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(SCD_Struct_PK1)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(PKPassFaceViewRendererState *)rendererState;
-(void)createBodyContentViews;
-(PKPassColorProfile *)colorProfile;
-(void)insertContentView:(id)arg1 ofType:(long long)arg2 ;
-(void)removeContentView:(id)arg1 ofType:(long long)arg2 ;
-(void)_handleTimeOrLocaleChange:(id)arg1 ;
-(UIEdgeInsets)shadowInsets;
-(id)_viewSetForContentViewType:(long long)arg1 ;
-(void)_createInvariantViewsForRegions:(unsigned long long)arg1 ;
-(void)_createContentViewsForRegions:(unsigned long long)arg1 ;
-(void)_setShowsHeaderViews:(BOOL)arg1 ;
-(void)_setShowsBodyViews:(BOOL)arg1 ;
-(void)_setShowsBackgroundView:(BOOL)arg1 ;
-(void)_createDimmingFilterIfNecessary;
-(void)_setContentViewsAlpha:(double)arg1 ;
-(BOOL)showsLiveRendering;
-(UIEdgeInsets)shadowBackgroundInsets;
-(void)_presentDiffRecursivelyDiff:(id)arg1 forBucketAtIndex:(unsigned long long)arg2 withBuckets:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_createBucketsIfNecessary;
-(void)createHeaderInvariantViews;
-(void)createBodyInvariantViews;
-(void)createHeaderContentViews;
-(id)passFaceTemplate;
-(id)_relevantBuckets;
-(void)_updateForeignBalances;
-(void)_setBalances:(id)arg1 ;
-(void)_recreateFieldDerivedContent;
-(void)_flushContentViewsForRegions:(unsigned long long)arg1 ;
-(void)setPass:(id)arg1 colorProfile:(id)arg2 ;
-(void)setVisibleRegions:(unsigned long long)arg1 ;
-(void)setClipsContent:(BOOL)arg1 ;
-(void)setBackgroundMode:(long long)arg1 ;
-(void)setLiveMotionEnabled:(BOOL)arg1 ;
-(BOOL)bodyContentCreated;
-(void)setDimmer:(double)arg1 animated:(BOOL)arg2 ;
-(void)createContentViewsWithFade:(BOOL)arg1 ;
-(void)presentDiff:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateShadow:(double)arg1 animated:(BOOL)arg2 withDelay:(double)arg3 ;
-(void)setShowsLiveRendering:(BOOL)arg1 rendererState:(id)arg2 ;
-(unsigned long long)visibleRegions;
-(BOOL)clipsContent;
-(BOOL)allowBackgroundPlaceHolders;
-(void)setAllowBackgroundPlaceHolders:(BOOL)arg1 ;
-(double)clippedContentHeight;
-(void)setClippedContentHeight:(double)arg1 ;
-(void)setShowsLiveRendering:(BOOL)arg1 ;
-(BOOL)liveMotionEnabled;
-(NSMutableArray *)headerBucketViews;
-(void)setHeaderBucketViews:(NSMutableArray *)arg1 ;
-(PKPassFaceTemplate *)faceTemplate;
@end

