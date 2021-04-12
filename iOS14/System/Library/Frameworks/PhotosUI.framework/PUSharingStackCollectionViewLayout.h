/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol PUSharingStackCollectionViewLayoutDelegate;
@class NSArray;

@interface PUSharingStackCollectionViewLayout : UICollectionViewLayout {

	id<PUSharingStackCollectionViewLayoutDelegate> _delegate;
	NSArray* _stackedItemsLayoutAttributes;

}

@property (nonatomic,copy,readonly) NSArray * stackedItemsLayoutAttributes;                               //@synthesize stackedItemsLayoutAttributes=_stackedItemsLayoutAttributes - In the implementation block
@property (assign,nonatomic,__weak) id<PUSharingStackCollectionViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id<PUSharingStackCollectionViewLayoutDelegate>)delegate;
-(void)setDelegate:(id<PUSharingStackCollectionViewLayoutDelegate>)arg1 ;
-(id)_layoutItemInputAtIndexPath:(id)arg1 ;
-(NSArray *)stackedItemsLayoutAttributes;
@end

