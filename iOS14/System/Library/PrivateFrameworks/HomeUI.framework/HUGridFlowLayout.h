/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>
#import <libobjc.A.dylib/HUControllableCollectionViewLayout.h>

@class HUGridLayoutOptions, HUWallpaperView, HFWallpaperSlice, NSMutableDictionary, NSHashTable, NSString;

@interface HUGridFlowLayout : UICollectionViewFlowLayout <HUControllableCollectionViewLayout> {

	BOOL _shouldFlipForRTL;
	HUGridLayoutOptions* _layoutOptions;
	HUWallpaperView* _wallpaperView;
	HFWallpaperSlice* _blurredWallpaperSlice;
	HFWallpaperSlice* _darkModeBlurredWallpaperSlice;
	NSMutableDictionary* _indexPathsByItems;
	NSMutableDictionary* _overrideAttributesByIndexPath;
	NSHashTable* _childGridLayouts;
	HUGridFlowLayout* _parentGridLayout;

}

@property (nonatomic,readonly) NSMutableDictionary * indexPathsByItems;                          //@synthesize indexPathsByItems=_indexPathsByItems - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * overrideAttributesByIndexPath;              //@synthesize overrideAttributesByIndexPath=_overrideAttributesByIndexPath - In the implementation block
@property (nonatomic,retain) NSHashTable * childGridLayouts;                                     //@synthesize childGridLayouts=_childGridLayouts - In the implementation block
@property (assign,nonatomic,__weak) HUGridFlowLayout * parentGridLayout;                         //@synthesize parentGridLayout=_parentGridLayout - In the implementation block
@property (nonatomic,readonly) BOOL shouldFlipForRTL;                                            //@synthesize shouldFlipForRTL=_shouldFlipForRTL - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                                //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic,__weak) HUWallpaperView * wallpaperView;                             //@synthesize wallpaperView=_wallpaperView - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                           //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice;                   //@synthesize darkModeBlurredWallpaperSlice=_darkModeBlurredWallpaperSlice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layoutAttributesClass;
-(void)invalidateLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(void)setWallpaperView:(HUWallpaperView *)arg1 ;
-(HUGridLayoutOptions *)layoutOptions;
-(HUWallpaperView *)wallpaperView;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)applyOverrideAttributes:(id)arg1 toItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)clearOverrideAttributesForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)clearAllOverrideAttributesForItems:(id)arg1 ;
-(id)initForRTL:(BOOL)arg1 ;
-(BOOL)shouldFlipForRTL;
-(id)_modifiedLayoutAttributesForAttributes:(id)arg1 ;
-(NSHashTable *)childGridLayouts;
-(void)_updateContainingGridLayout;
-(NSMutableDictionary *)indexPathsByItems;
-(NSMutableDictionary *)overrideAttributesByIndexPath;
-(HUGridFlowLayout *)parentGridLayout;
-(void)unregisterChildGridLayout:(id)arg1 ;
-(void)registerChildGridLayout:(id)arg1 ;
-(void)setParentGridLayout:(HUGridFlowLayout *)arg1 ;
-(void)setChildGridLayouts:(NSHashTable *)arg1 ;
@end

