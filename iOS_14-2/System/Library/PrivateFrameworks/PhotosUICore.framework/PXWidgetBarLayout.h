/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXTilingLayout.h>

@interface PXWidgetBarLayout : PXTilingLayout {

	CGRect _contentBounds;
	double _height;

}

@property (assign,nonatomic) double height;              //@synthesize height=_height - In the implementation block
+(PXTileIdentifier)tileIdentifier;
-(CGRect)contentBounds;
-(void)setHeight:(double)arg1 ;
-(void)prepareLayout;
-(void)setReferenceSize:(CGSize)arg1 ;
-(double)height;
-(void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)getGeometry:(out PXTileGeometry*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(PXTileIdentifier)arg4 ;
@end

