/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXEngineDrivenAssetsTilingLayout.h>

@class PXPhotosDetailsAssetsSpec;

@interface PXPhotosDetailsAssetsTilingLayout : PXEngineDrivenAssetsTilingLayout {

	PXPhotosDetailsAssetsSpec* _spec;
	long long _placeholderMode;

}

@property (nonatomic,retain) PXPhotosDetailsAssetsSpec * spec;              //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) long long placeholderMode;                     //@synthesize placeholderMode=_placeholderMode - In the implementation block
-(CGRect)contentBounds;
-(void)setSpec:(PXPhotosDetailsAssetsSpec *)arg1 ;
-(void)prepareLayout;
-(UIEdgeInsets)contentInset;
-(PXPhotosDetailsAssetsSpec *)spec;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(void)setPlaceholderMode:(long long)arg1 ;
-(CGRect)_placeholderFrame;
-(long long)placeholderMode;
@end

