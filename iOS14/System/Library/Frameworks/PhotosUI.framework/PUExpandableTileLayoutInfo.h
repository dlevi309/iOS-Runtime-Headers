/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileLayoutInfo.h>

@interface PUExpandableTileLayoutInfo : PUTileLayoutInfo {

	BOOL _isExpanded;
	CGSize _expandedSize;
	CGSize _unexpandedSize;

}

@property (nonatomic,readonly) BOOL isExpanded;                    //@synthesize isExpanded=_isExpanded - In the implementation block
@property (nonatomic,readonly) CGSize expandedSize;                //@synthesize expandedSize=_expandedSize - In the implementation block
@property (nonatomic,readonly) CGSize unexpandedSize;              //@synthesize unexpandedSize=_unexpandedSize - In the implementation block
-(id)clone;
-(CGSize)unexpandedSize;
-(CGSize)expandedSize;
-(BOOL)isExpanded;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 isExpanded:(BOOL)arg8 expandedSize:(CGSize)arg9 unexpandedSize:(CGSize)arg10 ;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 ;
-(BOOL)isGeometryEqualToLayoutInfo:(id)arg1 ;
@end

