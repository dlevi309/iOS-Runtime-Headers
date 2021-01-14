/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGStackLayout.h>
#import <libobjc.A.dylib/PXGSublayoutProvider.h>
#import <libobjc.A.dylib/PXGSolidColorSource.h>
#import <libobjc.A.dylib/PXGAssetBadgeDecorationSource.h>
#import <libobjc.A.dylib/PXGSelectionDecorationSource.h>

@class UIColor, NSIndexSet, NSString;

@interface PXGPPTGridStackLayout : PXGStackLayout <PXGSublayoutProvider, PXGSolidColorSource, PXGAssetBadgeDecorationSource, PXGSelectionDecorationSource> {

	long long _numberOfItemsPerSection;
	long long _numberOfColumns;
	BOOL _useAssetBadgeDecoration;
	long long _selectionDecorationStyle;
	BOOL _decorated;
	long long _estimatedNumberOfRowsPerSection;
	UIColor* _spriteColor;
	NSIndexSet* _selectedItemsPerSection;
	PXAssetBadgeInfo _assetBadgeInfos[12];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2 ;
-(unsigned long long)selectionDecorationAdditionsInLayout:(id)arg1 ;
-(BOOL)wantsAssetBadgeDecorationsInLayout:(id)arg1 ;
-(BOOL)wantsInteractiveFavoriteBadgesInLayout:(id)arg1 ;
-(CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(CGSize)arg3 ;
-(id)colorAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(PXAssetBadgeInfo)assetBadgeInfoForAsset:(id)arg1 atSpriteIndex:(unsigned)arg2 inLayout:(id)arg3 ;
-(id)initWithSetting:(id)arg1 ;
-(void)_initializeSelectedItems;
-(void)_initializeBadgeInfos;
-(long long)selectionDecorationStyleInLayout:(id)arg1 ;
-(id)selectedSpriteIndexesInLayout:(id)arg1 ;
@end

