/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTilingLayout.h>

@interface PXSingleTileLayout : PXTilingLayout {

	CGRect _contentBounds;
	CGSize _preferredSize;
	PXTileIdentifier _tileIdentifier;

}

@property (nonatomic,readonly) PXTileIdentifier tileIdentifier;              //@synthesize tileIdentifier=_tileIdentifier - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                           //@synthesize preferredSize=_preferredSize - In the implementation block
-(CGRect)contentBounds;
-(void)prepareLayout;
-(void)setReferenceSize:(CGSize)arg1 ;
-(id)init;
-(CGSize)preferredSize;
-(id)initWithTileIdentifier:(PXTileIdentifier)arg1 ;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
-(void)setPreferredSize:(CGSize)arg1 ;
-(PXTileIdentifier)tileIdentifier;
@end

