/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol ICDocCamThumbnailViewLayoutDelegate;
@class NSDictionary, NSMutableArray;

@interface ICDocCamThumbnailCollectionViewLayout : UICollectionViewLayout {

	BOOL _transitioning;
	BOOL _compactLayout;
	id<ICDocCamThumbnailViewLayoutDelegate> _delegate;
	NSDictionary* _layoutInfo;
	NSMutableArray* _deleteIndexPaths;
	NSMutableArray* _insertIndexPaths;
	CGSize _itemSize;

}

@property (nonatomic,retain) NSDictionary * layoutInfo;                                            //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (nonatomic,retain) NSMutableArray * deleteIndexPaths;                                    //@synthesize deleteIndexPaths=_deleteIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * insertIndexPaths;                                    //@synthesize insertIndexPaths=_insertIndexPaths - In the implementation block
@property (assign,nonatomic) BOOL compactLayout;                                                   //@synthesize compactLayout=_compactLayout - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                                      //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic,__weak) id<ICDocCamThumbnailViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL transitioning;                                                   //@synthesize transitioning=_transitioning - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<ICDocCamThumbnailViewLayoutDelegate>)delegate;
-(void)setDelegate:(id<ICDocCamThumbnailViewLayoutDelegate>)arg1 ;
-(BOOL)transitioning;
-(void)setTransitioning:(BOOL)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForTransitionFromLayout:(id)arg1 ;
-(void)prepareForTransitionToLayout:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)setDeleteIndexPaths:(NSMutableArray *)arg1 ;
-(void)setInsertIndexPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deleteIndexPaths;
-(NSMutableArray *)insertIndexPaths;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)finalizeAnimatedBoundsChange;
-(CGSize)itemSize;
-(NSDictionary *)layoutInfo;
-(void)setItemSize:(CGSize)arg1 ;
-(void)finalizeLayoutTransition;
-(void)setLayoutInfo:(NSDictionary *)arg1 ;
-(void)setup;
-(void)prepareLayout:(BOOL)arg1 ;
-(CGSize)frameSizeForImageSize:(CGSize)arg1 ;
-(BOOL)compactLayout;
-(void)setCompactLayout:(BOOL)arg1 ;
-(CGRect)compactFrameForThumbnailAtIndexPath:(id)arg1 withSize:(CGSize)arg2 ;
-(CGRect)frameForThumbnailAtIndexPath:(id)arg1 ;
@end

