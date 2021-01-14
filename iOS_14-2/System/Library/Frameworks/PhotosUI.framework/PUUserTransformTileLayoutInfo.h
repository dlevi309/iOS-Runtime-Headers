/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileLayoutInfo.h>

@class PUDisplayTileTransform;

@interface PUUserTransformTileLayoutInfo : PUTileLayoutInfo {

	PUDisplayTileTransform* _displayTileTransform;
	CGRect _untransformedContentFrame;

}

@property (nonatomic,readonly) CGRect untransformedContentFrame;                           //@synthesize untransformedContentFrame=_untransformedContentFrame - In the implementation block
@property (nonatomic,readonly) PUDisplayTileTransform * displayTileTransform;              //@synthesize displayTileTransform=_displayTileTransform - In the implementation block
-(id)clone;
-(PUDisplayTileTransform *)displayTileTransform;
-(id)description;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 ;
-(BOOL)isGeometryEqualToLayoutInfo:(id)arg1 ;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 untransformedContentFrame:(CGRect)arg8 displayTileTransform:(id)arg9 ;
-(CGRect)untransformedContentFrame;
@end

