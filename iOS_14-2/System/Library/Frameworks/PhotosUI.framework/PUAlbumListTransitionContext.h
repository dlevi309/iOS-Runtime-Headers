/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PLAssetContainer;
@class PHCollection, NSIndexPath, PUPhotoDecoration, UICollectionViewTransitionLayout;

@interface PUAlbumListTransitionContext : NSObject {

	BOOL _usesContentOffsetAutoAdjust;
	id<PLAssetContainer> _collection;
	PHCollection* _phCollection;
	NSIndexPath* _keyItemIndexPath;
	PUPhotoDecoration* _photoDecoration;
	UICollectionViewTransitionLayout* _transitionLayout;

}

@property (nonatomic,retain) id<PLAssetContainer> collection;                                  //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) PHCollection * phCollection;                                      //@synthesize phCollection=_phCollection - In the implementation block
@property (nonatomic,retain) NSIndexPath * keyItemIndexPath;                                   //@synthesize keyItemIndexPath=_keyItemIndexPath - In the implementation block
@property (nonatomic,retain) PUPhotoDecoration * photoDecoration;                              //@synthesize photoDecoration=_photoDecoration - In the implementation block
@property (assign,nonatomic) BOOL usesContentOffsetAutoAdjust;                                 //@synthesize usesContentOffsetAutoAdjust=_usesContentOffsetAutoAdjust - In the implementation block
@property (nonatomic,retain) UICollectionViewTransitionLayout * transitionLayout;              //@synthesize transitionLayout=_transitionLayout - In the implementation block
-(PUPhotoDecoration *)photoDecoration;
-(void)setPhotoDecoration:(PUPhotoDecoration *)arg1 ;
-(id<PLAssetContainer>)collection;
-(void)setCollection:(id<PLAssetContainer>)arg1 ;
-(PHCollection *)phCollection;
-(void)setPhCollection:(PHCollection *)arg1 ;
-(NSIndexPath *)keyItemIndexPath;
-(void)setKeyItemIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)usesContentOffsetAutoAdjust;
-(void)setUsesContentOffsetAutoAdjust:(BOOL)arg1 ;
-(UICollectionViewTransitionLayout *)transitionLayout;
-(void)setTransitionLayout:(UICollectionViewTransitionLayout *)arg1 ;
@end

