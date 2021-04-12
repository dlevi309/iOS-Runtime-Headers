/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXAssetsDataSource, NSDictionary;

@interface _PXCuratedLibraryLayoutAssetsSnapshot : NSObject {

	PXAssetsDataSource* _dataSource;
	NSDictionary* _spriteSnapshotIndexByAssetIdentifier;
	long long _spriteSnapshotsCount;
	long long _spriteSnapshotsCapacity;
	SCD_Struct_PX100* _spriteSnapshots;
	long long _zoomLevel;
	CGPoint _offset;
	CGRect _visibleRect;
	CGRect _fullyVisibleRect;

}

@property (assign,nonatomic) CGPoint offset;                                     //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) id<NSCopying> dominantAssetIdentifier; 
@property (nonatomic,readonly) long long zoomLevel;                              //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) CGRect visibleRect;                               //@synthesize visibleRect=_visibleRect - In the implementation block
@property (nonatomic,readonly) CGRect fullyVisibleRect;                          //@synthesize fullyVisibleRect=_fullyVisibleRect - In the implementation block
-(id)initWithLayout:(id)arg1 ;
-(long long)zoomLevel;
-(CGRect)visibleRect;
-(CGRect)fullyVisibleRect;
-(void)enumerateAssetInfoForGeometries:(const SCD_Struct_PX11*)arg1 styles:(const SCD_Struct_PX83*)arg2 infos:(const SCD_Struct_PX15*)arg3 count:(unsigned)arg4 options:(unsigned long long)arg5 usingBlock:(/*^block*/id)arg6 ;
-(void)setDominantAssetIdentifier:(id<NSCopying>)arg1 ;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(SCD_Struct_PX100)spriteSnapshotForAssetWithIdentifier:(id)arg1 ;
-(id)assetIdentifierForAssetReference:(id)arg1 ;
-(long long)_addSpriteSnapshot:(SCD_Struct_PX100)arg1 ;
-(id<NSCopying>)dominantAssetIdentifier;
-(void)enumerateAssetIdentifiersUsingBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

