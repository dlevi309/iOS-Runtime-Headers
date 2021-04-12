/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileLayoutInfo.h>

@interface PUCroppedTileLayoutInfo : PUTileLayoutInfo {

	UIEdgeInsets _cropInsets;

}

@property (assign,setter=_setCropInsets:,nonatomic) UIEdgeInsets cropInsets;              //@synthesize cropInsets=_cropInsets - In the implementation block
-(id)clone;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 cropInsets:(UIEdgeInsets)arg4 alpha:(double)arg5 transform:(CGAffineTransform)arg6 zPosition:(double)arg7 contentsRect:(CGRect)arg8 coordinateSystem:(id)arg9 ;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(CGRect)arg7 coordinateSystem:(id)arg8 ;
-(id)description;
-(id)layoutInfoByInterpolatingWithLayoutInfo:(id)arg1 mixFactor:(double)arg2 coordinateSystem:(id)arg3 ;
-(BOOL)isGeometryEqualToLayoutInfo:(id)arg1 ;
-(UIEdgeInsets)cropInsets;
-(void)_setCropInsets:(UIEdgeInsets)arg1 ;
@end

