/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIMetricsImpressionSession, UICollectionView, SKUIColorScheme, SKUIItemOfferButtonAppearance, SKUIMetricsController, SKUIStorePageSectionsViewController, UIColor, SKUIResourceLoader, SKUILayoutCache, SKUIClientContext;

@interface SKUIStorePageSectionContext : NSObject {

	SKUIMetricsImpressionSession* _activeMetricsImpressionSession;
	double _activePageWidth;
	UICollectionView* _collectionView;
	SKUIColorScheme* _colorScheme;
	long long _defaultPinningTransitionStyle;
	SKUIItemOfferButtonAppearance* _itemOfferButtonAppearance;
	double _landscapePageWidth;
	SKUIMetricsController* _metricsController;
	SKUIStorePageSectionsViewController* _parentViewController;
	UIColor* _placeholderColor;
	double _portraitPageWidth;
	SKUIResourceLoader* _resourceLoader;
	SKUILayoutCache* _textLayoutCache;
	long long _layoutStyle;

}

@property (nonatomic,readonly) SKUIMetricsImpressionSession * activeMetricsImpressionSession;                  //@synthesize activeMetricsImpressionSession=_activeMetricsImpressionSession - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext; 
@property (nonatomic,readonly) UICollectionView * collectionView;                                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) SKUIColorScheme * colorScheme;                                                  //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) UIColor * placeholderColor; 
@property (nonatomic,readonly) long long defaultPinningTransitionStyle;                                        //@synthesize defaultPinningTransitionStyle=_defaultPinningTransitionStyle - In the implementation block
@property (nonatomic,readonly) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance; 
@property (nonatomic,readonly) double activePageWidth;                                                         //@synthesize activePageWidth=_activePageWidth - In the implementation block
@property (nonatomic,readonly) double landscapePageWidth;                                                      //@synthesize landscapePageWidth=_landscapePageWidth - In the implementation block
@property (nonatomic,readonly) double portraitPageWidth;                                                       //@synthesize portraitPageWidth=_portraitPageWidth - In the implementation block
@property (nonatomic,readonly) double horizontalPadding; 
@property (nonatomic,readonly) long long layoutStyle;                                                          //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,readonly) SKUIMetricsController * metricsController;                                      //@synthesize metricsController=_metricsController - In the implementation block
@property (nonatomic,__weak,readonly) SKUIStorePageSectionsViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,readonly) SKUIResourceLoader * resourceLoader;                                            //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,readonly) SKUILayoutCache * textLayoutCache;                                              //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
-(UIColor *)placeholderColor;
-(void)_setCollectionView:(id)arg1 ;
-(id)init;
-(SKUIStorePageSectionsViewController *)parentViewController;
-(long long)layoutStyle;
-(SKUIClientContext *)clientContext;
-(UICollectionView *)collectionView;
-(double)horizontalPadding;
-(void)_setLayoutStyle:(long long)arg1 ;
-(SKUIMetricsController *)metricsController;
-(SKUIResourceLoader *)resourceLoader;
-(void)_setResourceLoader:(id)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(SKUILayoutCache *)textLayoutCache;
-(void)_setParentViewController:(id)arg1 ;
-(void)_setTextLayoutCache:(id)arg1 ;
-(void)_setColorScheme:(id)arg1 ;
-(void)_setActiveMetricsImpressionSession:(id)arg1 ;
-(void)_setDefaultPinningTransitionStyle:(long long)arg1 ;
-(void)_setMetricsController:(id)arg1 ;
-(double)activePageWidth;
-(void)_setActivePageWidth:(double)arg1 ;
-(SKUIMetricsImpressionSession *)activeMetricsImpressionSession;
-(void)_setLandscapePageWidth:(double)arg1 ;
-(void)_setPortraitPageWidth:(double)arg1 ;
-(long long)defaultPinningTransitionStyle;
-(SKUIItemOfferButtonAppearance *)itemOfferButtonAppearance;
-(double)landscapePageWidth;
-(double)portraitPageWidth;
@end

