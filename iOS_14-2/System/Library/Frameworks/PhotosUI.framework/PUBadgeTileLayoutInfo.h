/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileLayoutInfo.h>

@interface PUBadgeTileLayoutInfo : PUTileLayoutInfo {

	BOOL _isOverContent;
	double _contentWidth;

}

@property (nonatomic,readonly) BOOL isOverContent;               //@synthesize isOverContent=_isOverContent - In the implementation block
@property (nonatomic,readonly) double contentWidth;              //@synthesize contentWidth=_contentWidth - In the implementation block
-(id)clone;
-(double)contentWidth;
-(BOOL)isOverContent;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 hitTestOutset:(UIEdgeInsets)arg7 coordinateSystem:(id)arg8 isOverContent:(BOOL)arg9 contentWidth:(double)arg10 ;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 ;
-(BOOL)isGeometryEqualToLayoutInfo:(id)arg1 ;
@end

