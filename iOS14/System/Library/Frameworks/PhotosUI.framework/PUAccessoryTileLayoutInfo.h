/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTileLayoutInfo.h>

@interface PUAccessoryTileLayoutInfo : PUTileLayoutInfo {

	double _minimumVisibleHeight;
	CGRect _untransformedContentFrame;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) CGRect untransformedContentFrame;              //@synthesize untransformedContentFrame=_untransformedContentFrame - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                    //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) double minimumVisibleHeight;                   //@synthesize minimumVisibleHeight=_minimumVisibleHeight - In the implementation block
-(id)clone;
-(UIEdgeInsets)contentInsets;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 untransformedContentFrame:(CGRect)arg8 contentInsets:(UIEdgeInsets)arg9 minimumVisibleHeight:(double)arg10 ;
-(double)minimumVisibleHeight;
-(id)initWithTileIdentifier:(id)arg1 center:(CGPoint)arg2 size:(CGSize)arg3 alpha:(double)arg4 transform:(CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 ;
-(BOOL)isGeometryEqualToLayoutInfo:(id)arg1 ;
-(CGRect)untransformedContentFrame;
@end

