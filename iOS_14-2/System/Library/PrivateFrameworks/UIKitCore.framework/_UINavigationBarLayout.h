/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UINavigationBarTransitionContextParticipant.h>

@class _UIBarInsertLayoutData, NSMutableArray, NSArray, _UINavigationBarModernPromptView, _UINavigationBarContentView, UIView, _UINavigationBarLargeTitleView, _UINavigationBarContentViewLayout, _UINavigationBarLargeTitleViewLayout, _UIBarBackground, _UIBarBackgroundLayout, _UINavigationControllerRefreshControlHost, UILabel, UISearchBar, _UINavigationBarPalette, NSString;

@interface _UINavigationBarLayout : NSObject <NSCopying, _UINavigationBarTransitionContextParticipant> {

	_UIBarInsertLayoutData* _promptLayoutData;
	_UIBarInsertLayoutData* _contentLayoutData;
	_UIBarInsertLayoutData* _canvasViewLayoutData;
	_UIBarInsertLayoutData* _largeTitleLayoutData;
	_UIBarInsertLayoutData* _refreshControlLayoutData;
	_UIBarInsertLayoutData* _searchBarLayoutData;
	_UIBarInsertLayoutData* _scopeBarLayoutData;
	_UIBarInsertLayoutData* _bottomPaletteLayoutData;
	NSMutableArray* _priorityOrderedLayout;
	NSMutableArray* _stackingOrderedLayout;
	NSArray* _restingHeights;
	BOOL _backgroundCoversContentOnly;
	BOOL _clientWantsBackgroundHidden;
	BOOL _useManualScrollEdgeAppearance;
	BOOL _clientWantsToPreserveSearchBarAcrossTransitions;
	BOOL _hidesSearchBarWhenScrolling;
	_UINavigationBarModernPromptView* _promptView;
	_UINavigationBarContentView* _contentView;
	UIView* _animationContentClippingView;
	_UINavigationBarLargeTitleView* _largeTitleView;
	_UINavigationBarContentViewLayout* _contentViewLayout;
	_UINavigationBarLargeTitleViewLayout* _largeTitleViewLayout;
	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayout* _compactBackgroundViewLayout;
	_UIBarBackgroundLayout* _standardBackgroundViewLayout;
	double _backgroundExtension;
	double _requestedBackgroundViewAlpha;
	double _manualScrollEdgeAppearanceProgress;
	_UINavigationControllerRefreshControlHost* _refreshControlHost;
	UILabel* _weeTitleLabel;
	UIView* _canvasView;
	UISearchBar* _searchBar;
	long long _representedSearchLayoutState;
	_UINavigationBarPalette* _bottomPalette;
	double _largeTitleExposure;
	double _chromelessTransitionProgress;
	double _computedBackgroundViewAlpha;
	long long _apiVersion;
	CGSize _layoutSize;
	NSDirectionalEdgeInsets _largeTitleViewInsets;

}

@property (nonatomic,retain) _UINavigationBarModernPromptView * promptView;                               //@synthesize promptView=_promptView - In the implementation block
@property (nonatomic,retain) _UINavigationBarContentView * contentView;                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * animationContentClippingView;                                       //@synthesize animationContentClippingView=_animationContentClippingView - In the implementation block
@property (nonatomic,retain) _UINavigationBarLargeTitleView * largeTitleView;                             //@synthesize largeTitleView=_largeTitleView - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets largeTitleViewInsets;                                //@synthesize largeTitleViewInsets=_largeTitleViewInsets - In the implementation block
@property (nonatomic,retain) _UINavigationBarContentViewLayout * contentViewLayout;                       //@synthesize contentViewLayout=_contentViewLayout - In the implementation block
@property (nonatomic,retain) _UINavigationBarLargeTitleViewLayout * largeTitleViewLayout;                 //@synthesize largeTitleViewLayout=_largeTitleViewLayout - In the implementation block
@property (nonatomic,retain) _UIBarBackground * backgroundView;                                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) _UIBarBackgroundLayout * compactBackgroundViewLayout;                        //@synthesize compactBackgroundViewLayout=_compactBackgroundViewLayout - In the implementation block
@property (nonatomic,retain) _UIBarBackgroundLayout * standardBackgroundViewLayout;                       //@synthesize standardBackgroundViewLayout=_standardBackgroundViewLayout - In the implementation block
@property (assign,nonatomic) double backgroundExtension;                                                  //@synthesize backgroundExtension=_backgroundExtension - In the implementation block
@property (assign,nonatomic) BOOL backgroundCoversContentOnly;                                            //@synthesize backgroundCoversContentOnly=_backgroundCoversContentOnly - In the implementation block
@property (assign,nonatomic) double requestedBackgroundViewAlpha;                                         //@synthesize requestedBackgroundViewAlpha=_requestedBackgroundViewAlpha - In the implementation block
@property (assign,nonatomic) BOOL clientWantsBackgroundHidden;                                            //@synthesize clientWantsBackgroundHidden=_clientWantsBackgroundHidden - In the implementation block
@property (assign,nonatomic) BOOL useManualScrollEdgeAppearance;                                          //@synthesize useManualScrollEdgeAppearance=_useManualScrollEdgeAppearance - In the implementation block
@property (assign,nonatomic) double manualScrollEdgeAppearanceProgress;                                   //@synthesize manualScrollEdgeAppearanceProgress=_manualScrollEdgeAppearanceProgress - In the implementation block
@property (nonatomic,retain) _UINavigationControllerRefreshControlHost * refreshControlHost;              //@synthesize refreshControlHost=_refreshControlHost - In the implementation block
@property (nonatomic,retain) UILabel * weeTitleLabel;                                                     //@synthesize weeTitleLabel=_weeTitleLabel - In the implementation block
@property (nonatomic,retain) UIView * canvasView;                                                         //@synthesize canvasView=_canvasView - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                     //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,nonatomic) BOOL clientWantsToPreserveSearchBarAcrossTransitions;                        //@synthesize clientWantsToPreserveSearchBarAcrossTransitions=_clientWantsToPreserveSearchBarAcrossTransitions - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchBarWhenScrolling;                                            //@synthesize hidesSearchBarWhenScrolling=_hidesSearchBarWhenScrolling - In the implementation block
@property (assign,nonatomic) long long representedSearchLayoutState;                                      //@synthesize representedSearchLayoutState=_representedSearchLayoutState - In the implementation block
@property (nonatomic,retain) _UINavigationBarPalette * bottomPalette;                                     //@synthesize bottomPalette=_bottomPalette - In the implementation block
@property (nonatomic,readonly) double largeTitleExposure;                                                 //@synthesize largeTitleExposure=_largeTitleExposure - In the implementation block
@property (nonatomic,readonly) double chromelessTransitionProgress;                                       //@synthesize chromelessTransitionProgress=_chromelessTransitionProgress - In the implementation block
@property (nonatomic,readonly) double computedBackgroundViewAlpha;                                        //@synthesize computedBackgroundViewAlpha=_computedBackgroundViewAlpha - In the implementation block
@property (assign,nonatomic) long long apiVersion;                                                        //@synthesize apiVersion=_apiVersion - In the implementation block
@property (assign,nonatomic) CGSize layoutSize;                                                           //@synthesize layoutSize=_layoutSize - In the implementation block
@property (nonatomic,copy,readonly) NSArray * restingHeights; 
@property (nonatomic,readonly) SCD_Struct_UI30 layoutHeights; 
@property (getter=isVariableHeight,nonatomic,readonly) BOOL variableHeight; 
@property (nonatomic,readonly) CGRect promptViewLayoutFrame; 
@property (nonatomic,readonly) CGRect contentViewLayoutFrame; 
@property (nonatomic,readonly) CGRect refreshControlLayoutFrame; 
@property (nonatomic,readonly) CGRect largeTitleViewLayoutFrame; 
@property (nonatomic,readonly) CGRect backgroundViewLayoutFrame; 
@property (nonatomic,readonly) CGRect weeTitleLabelLayoutFrame; 
@property (nonatomic,readonly) CGRect canvasViewLayoutFrame; 
@property (nonatomic,readonly) CGRect searchBarLayoutFrame; 
@property (nonatomic,readonly) CGRect bottomPaletteLayoutFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finalizeStateFromTransition:(id)arg1 ;
-(void)prepareToRecordToState:(id)arg1 ;
-(void)updateLayout;
-(double)computedBackgroundViewAlpha;
-(UISearchBar *)searchBar;
-(CGRect)_refreshControlLayoutFrameWithContentOrCanvasMaxY:(double)arg1 ;
-(id)initWithLayout:(id)arg1 ;
-(void)setAnimationContentClippingView:(UIView *)arg1 ;
-(CGRect)_backgroundViewLayoutFrameWithRelevantMaxY:(double)arg1 ;
-(CGRect)backgroundViewLayoutFrame;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(CGRect)refreshControlLayoutFrame;
-(CGRect)weeTitleLabelLayoutFrame;
-(void)setRefreshControlHost:(_UINavigationControllerRefreshControlHost *)arg1 ;
-(SCD_Struct_UI30)layoutHeights;
-(NSDirectionalEdgeInsets)largeTitleViewInsets;
-(CGRect)_searchBarLayoutFrameWithLargeTitleMaxY:(double)arg1 ;
-(id)init;
-(CGSize)layoutSize;
-(UILabel *)weeTitleLabel;
-(void)setBottomPalette:(_UINavigationBarPalette *)arg1 ;
-(_UINavigationBarContentViewLayout *)contentViewLayout;
-(void)setBackgroundView:(_UIBarBackground *)arg1 ;
-(void)_updateRefreshControlLayoutData;
-(void)_reprioritizeLayoutItem:(id)arg1 toPriority:(long long)arg2 ;
-(void)setWeeTitleLabel:(UILabel *)arg1 ;
-(void)_addLayoutItem:(id)arg1 ;
-(void)setClientWantsToPreserveSearchBarAcrossTransitions:(BOOL)arg1 ;
-(_UIBarBackground *)backgroundView;
-(void)installViewsInNavigationBar:(id)arg1 ;
-(void)setUseManualScrollEdgeAppearance:(BOOL)arg1 ;
-(double)requestedBackgroundViewAlpha;
-(void)setContentViewLayout:(_UINavigationBarContentViewLayout *)arg1 ;
-(id)layoutForMeasuringWidth:(double)arg1 ;
-(void)setStandardBackgroundViewLayout:(_UIBarBackgroundLayout *)arg1 ;
-(long long)apiVersion;
-(CGRect)promptViewLayoutFrame;
-(void)setRepresentedSearchLayoutState:(long long)arg1 ;
-(_UINavigationBarModernPromptView *)promptView;
-(double)manualScrollEdgeAppearanceProgress;
-(CGRect)backgroundViewLayoutFrameForcingExpandedHeight:(BOOL)arg1 ;
-(NSString *)description;
-(void)setBackgroundExtension:(double)arg1 ;
-(void)_updateLayoutParametersForWidth:(double)arg1 ;
-(_UINavigationControllerRefreshControlHost *)refreshControlHost;
-(void)setClientWantsBackgroundHidden:(BOOL)arg1 ;
-(CGRect)canvasViewLayoutFrame;
-(BOOL)isVariableHeight;
-(void)removeAllViews;
-(BOOL)useManualScrollEdgeAppearance;
-(CGRect)searchBarLayoutFrame;
-(void)setCompactBackgroundViewLayout:(_UIBarBackgroundLayout *)arg1 ;
-(void)removeViewsNotInLayout:(id)arg1 ;
-(_UINavigationBarPalette *)bottomPalette;
-(CGRect)_largeTitleViewLayoutFrameWithContentOrCanvasOrRefreshControlMaxY:(double)arg1 ;
-(BOOL)hidesSearchBarWhenScrolling;
-(void)_updateLayoutOutputs;
-(void)setManualScrollEdgeAppearanceProgress:(double)arg1 ;
-(void)recordFromStateForTransition:(id)arg1 ;
-(void)setContentView:(_UINavigationBarContentView *)arg1 ;
-(void)ensureBackButtonTruncationOccursWithContext:(id)arg1 ;
-(void)setApiVersion:(long long)arg1 ;
-(void)setBackgroundCoversContentOnly:(BOOL)arg1 ;
-(void)setPromptView:(_UINavigationBarModernPromptView *)arg1 ;
-(long long)representedSearchLayoutState;
-(UIView *)canvasView;
-(_UIBarBackgroundLayout *)compactBackgroundViewLayout;
-(CGRect)contentViewLayoutFrame;
-(void)setLayoutSize:(CGSize)arg1 ;
-(void)interleaveViewsWithLayout:(id)arg1 inNavigationBar:(id)arg2 ;
-(void)_removeLayoutItem:(id)arg1 ;
-(_UIBarBackgroundLayout *)standardBackgroundViewLayout;
-(CGRect)largeTitleViewLayoutFrame;
-(double)largeTitleExposure;
-(void)setRequestedBackgroundViewAlpha:(double)arg1 ;
-(UIView *)animationContentClippingView;
-(void)setCanvasView:(UIView *)arg1 ;
-(void)setLargeTitleViewInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setHidesSearchBarWhenScrolling:(BOOL)arg1 ;
-(void)_updateLargeTitleViewLayoutItem;
-(_UINavigationBarContentView *)contentView;
-(BOOL)clientWantsToPreserveSearchBarAcrossTransitions;
-(CGRect)_canvasViewLayoutFrameWithPromptMaxY:(double)arg1 ;
-(void)setLargeTitleViewLayout:(_UINavigationBarLargeTitleViewLayout *)arg1 ;
-(void)_resolveContentAndCanvasLayouts;
-(CGRect)bottomPaletteLayoutFrame;
-(NSArray *)restingHeights;
-(double)backgroundExtension;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UINavigationBarLargeTitleViewLayout *)largeTitleViewLayout;
-(void)recordToStateForTransition:(id)arg1 ;
-(CGRect)_contentViewLayoutFrameWithPromptMaxY:(double)arg1 ;
-(void)layoutViews;
-(_UINavigationBarLargeTitleView *)largeTitleView;
-(BOOL)backgroundCoversContentOnly;
-(BOOL)clientWantsBackgroundHidden;
-(void)setLargeTitleView:(_UINavigationBarLargeTitleView *)arg1 ;
-(CGRect)_bottomPaletteLayoutFrameWithSearchBarMaxY:(double)arg1 ;
-(double)chromelessTransitionProgress;
@end
