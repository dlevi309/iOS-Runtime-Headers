/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>
#import <libobjc.A.dylib/HUControllableCollectionViewLayout.h>

@class HUGridLayoutOptions, HUWallpaperView, HFWallpaperSlice, NSMutableDictionary, NSHashTable, NSString;

@interface HUGridFlowLayout : UICollectionViewFlowLayout <HUControllableCollectionViewLayout> {

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
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                                //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic,__weak) HUWallpaperView * wallpaperView;                             //@synthesize wallpaperView=_wallpaperView - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                           //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice;                   //@synthesize darkModeBlurredWallpaperSlice=_darkModeBlurredWallpaperSlice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layoutAttributesClass;
-(id)init;
-(void)invalidateLayout;
-(HUGridLayoutOptions *)layoutOptions;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(void)setWallpaperView:(HUWallpaperView *)arg1 ;
-(HUWallpaperView *)wallpaperView;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)applyOverrideAttributes:(id)arg1 toItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)clearOverrideAttributesForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)clearAllOverrideAttributesForItems:(id)arg1 ;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
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

