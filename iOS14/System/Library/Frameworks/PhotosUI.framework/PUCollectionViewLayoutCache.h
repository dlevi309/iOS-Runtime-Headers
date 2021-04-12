/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol PUCollectionViewLayoutProvider;
@class NSMutableDictionary;

@interface PUCollectionViewLayoutCache : UICollectionViewLayout {

	NSMutableDictionary* _itemLayoutAttributesByIndexPath;
	NSMutableDictionary* _supplementaryViewLayoutAttributesByKind;
	NSMutableDictionary* _decorationViewLayoutAttributesByKind;
	id<PUCollectionViewLayoutProvider> _layoutProvider;
	struct {
		unsigned hasSupplementaryLayoutAttributes : 1;
		unsigned hasDecorationLayoutAttributes : 1;
	}  _layoutProviderFlags;
	BOOL _cachesResults;

}

@property (nonatomic,__weak,readonly) id<PUCollectionViewLayoutProvider> layoutProvider;              //@synthesize layoutProvider=_layoutProvider - In the implementation block
@property (assign,nonatomic) BOOL cachesResults;                                                      //@synthesize cachesResults=_cachesResults - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)invalidateLayoutCache;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
-(id)initWithProvider:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id<PUCollectionViewLayoutProvider>)layoutProvider;
-(id)init;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(BOOL)cachesResults;
-(void)setCachesResults:(BOOL)arg1 ;
@end

