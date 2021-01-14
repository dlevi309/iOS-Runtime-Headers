/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileLayoutInfo.h>

@interface PUParallaxedTileLayoutInfo : PUTileLayoutInfo {

	CGPoint _parallaxOffset;

}

@property (nonatomic,readonly) CGPoint parallaxOffset;              //@synthesize parallaxOffset=_parallaxOffset - In the implementation block
-(id)clone;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 ;
-(BOOL)isGeometryEqualToLayoutInfo:(id)arg1 ;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 parallaxOffset:(CGPoint)arg7 coordinateSystem:(id)arg8 ;
-(CGPoint)parallaxOffset;
@end

