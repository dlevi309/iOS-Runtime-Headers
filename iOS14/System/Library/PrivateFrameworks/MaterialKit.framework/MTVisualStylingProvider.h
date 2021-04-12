/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
*/

#import <libobjc.A.dylib/MTCoreMaterialVisualStylingProviderObserving.h>

@class MTCoreMaterialVisualStylingProvider, NSMutableDictionary, NSMapTable, NSPointerArray, NSString;

@interface MTVisualStylingProvider : NSObject <MTCoreMaterialVisualStylingProviderObserving> {

	MTCoreMaterialVisualStylingProvider* _coreMaterialVisualStylingProvider;
	NSMutableDictionary* _styleNamesToVisualStylings;
	NSMapTable* _viewsAndLayersToCoreMaterialVisualStyles;
	NSMapTable* _viewsAndLayersToObserverBlocks;
	NSPointerArray* _privateObservers;

}

@property (getter=_coreMaterialVisualStylingProvider,nonatomic,readonly) MTCoreMaterialVisualStylingProvider * coreMaterialVisualStylingProvider; 
@property (getter=_coreMaterialVisualStylingProvider,nonatomic,retain) MTCoreMaterialVisualStylingProvider * coreMaterialVisualStylingProvider;                //@synthesize coreMaterialVisualStylingProvider=_coreMaterialVisualStylingProvider - In the implementation block
@property (getter=_styleNamesToVisualStylings,nonatomic,retain) NSMutableDictionary * styleNamesToVisualStylings;                                              //@synthesize styleNamesToVisualStylings=_styleNamesToVisualStylings - In the implementation block
@property (getter=_viewsAndLayersToCoreMaterialVisualStyles,nonatomic,retain) NSMapTable * viewsAndLayersToCoreMaterialVisualStyles;                           //@synthesize viewsAndLayersToCoreMaterialVisualStyles=_viewsAndLayersToCoreMaterialVisualStyles - In the implementation block
@property (getter=_viewsAndLayersToObserverBlocks,nonatomic,retain) NSMapTable * viewsAndLayersToObserverBlocks;                                               //@synthesize viewsAndLayersToObserverBlocks=_viewsAndLayersToObserverBlocks - In the implementation block
@property (getter=_privateObservers,nonatomic,retain) NSPointerArray * privateObservers;                                                                       //@synthesize privateObservers=_privateObservers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_visualStylingProviderForRecipeNamed:(id)arg1 andCategory:(long long)arg2 ;
+(id)_visualStylingProviderForStyleSetNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)_visualStylingProviderForRecipe:(long long)arg1 andCategory:(long long)arg2 ;
+(id)_visualStylingProviderForRecipe:(long long)arg1 category:(long long)arg2 andUserInterfaceStyle:(long long)arg3 ;
+(Class)_visualStylingClass;
-(id)_controlCenterKeyLineOnLightVisualStyling;
-(id)_controlCenterScrollViewDarkeningVisualStyling;
-(void)_addObserver:(id)arg1 ;
-(void)automaticallyUpdateView:(id)arg1 withStyle:(long long)arg2 andObserverBlock:(/*^block*/id)arg3 ;
-(void)_removeObserver:(id)arg1 ;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(id)_visualStylingForStyle:(long long)arg1 ;
-(NSString *)description;
-(id)_styleNamesToVisualStylings;
-(void)automaticallyUpdateView:(id)arg1 withStyle:(long long)arg2 ;
-(void)stopAutomaticallyUpdatingView:(id)arg1 ;
-(id)initWithCoreMaterialVisualStylingProvider:(id)arg1 ;
-(void)_automaticallyUpdateViewOrLayer:(id)arg1 withStyleNamed:(id)arg2 andObserverBlock:(/*^block*/id)arg3 ;
-(void)_stopAutomaticallyUpdatingViewOrLayer:(id)arg1 ;
-(void)automaticallyUpdateLayer:(id)arg1 withStyle:(long long)arg2 andObserverBlock:(/*^block*/id)arg3 ;
-(void)_updateVisualStyleOfViewOrLayer:(id)arg1 ;
-(id)_visualStylingForStyleNamed:(id)arg1 ;
-(void)automaticallyUpdateLayer:(id)arg1 withStyle:(long long)arg2 ;
-(void)stopAutomaticallyUpdatingLayer:(id)arg1 ;
-(id)_coreMaterialVisualStylingProvider;
-(void)setCoreMaterialVisualStylingProvider:(MTCoreMaterialVisualStylingProvider *)arg1 ;
-(void)setStyleNamesToVisualStylings:(NSMutableDictionary *)arg1 ;
-(id)_viewsAndLayersToCoreMaterialVisualStyles;
-(void)setViewsAndLayersToCoreMaterialVisualStyles:(NSMapTable *)arg1 ;
-(id)_viewsAndLayersToObserverBlocks;
-(void)setViewsAndLayersToObserverBlocks:(NSMapTable *)arg1 ;
-(id)_privateObservers;
-(void)setPrivateObservers:(NSPointerArray *)arg1 ;
-(id)_visualStylingForContinuallyUpdatedView:(id)arg1 ;
-(void)_automaticallyUpdateView:(id)arg1 withStyleNamed:(id)arg2 andObserverBlock:(/*^block*/id)arg3 ;
@end

