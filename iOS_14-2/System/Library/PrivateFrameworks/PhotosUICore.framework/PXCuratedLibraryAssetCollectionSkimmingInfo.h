/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXDisplayCollection;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXIndexPathSet;

@interface PXCuratedLibraryAssetCollectionSkimmingInfo : NSObject {

	BOOL _slideshowStarted;
	BOOL _touchInteractionStarted;
	id<PXDisplayCollection> _parentAssetCollection;
	long long _childCollectionsZoomLevel;
	PXIndexPathSet* _childCollectionsIndexes;
	PXSimpleIndexPath _currentChildCollectionIndexPath;

}

@property (assign,nonatomic) BOOL slideshowStarted;                                          //@synthesize slideshowStarted=_slideshowStarted - In the implementation block
@property (assign,nonatomic) BOOL touchInteractionStarted;                                   //@synthesize touchInteractionStarted=_touchInteractionStarted - In the implementation block
@property (nonatomic,retain) id<PXDisplayCollection> parentAssetCollection;                  //@synthesize parentAssetCollection=_parentAssetCollection - In the implementation block
@property (assign,nonatomic) long long childCollectionsZoomLevel;                            //@synthesize childCollectionsZoomLevel=_childCollectionsZoomLevel - In the implementation block
@property (nonatomic,retain) PXIndexPathSet * childCollectionsIndexes;                       //@synthesize childCollectionsIndexes=_childCollectionsIndexes - In the implementation block
@property (assign,nonatomic) PXSimpleIndexPath currentChildCollectionIndexPath;              //@synthesize currentChildCollectionIndexPath=_currentChildCollectionIndexPath - In the implementation block
-(BOOL)slideshowStarted;
-(void)setSlideshowStarted:(BOOL)arg1 ;
-(BOOL)touchInteractionStarted;
-(void)setTouchInteractionStarted:(BOOL)arg1 ;
-(id<PXDisplayCollection>)parentAssetCollection;
-(void)setParentAssetCollection:(id<PXDisplayCollection>)arg1 ;
-(long long)childCollectionsZoomLevel;
-(void)setChildCollectionsZoomLevel:(long long)arg1 ;
-(PXIndexPathSet *)childCollectionsIndexes;
-(void)setChildCollectionsIndexes:(PXIndexPathSet *)arg1 ;
-(PXSimpleIndexPath)currentChildCollectionIndexPath;
-(void)setCurrentChildCollectionIndexPath:(PXSimpleIndexPath)arg1 ;
@end

