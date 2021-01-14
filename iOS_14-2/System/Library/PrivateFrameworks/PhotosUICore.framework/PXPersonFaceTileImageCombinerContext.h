/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class UIColor;

@interface PXPersonFaceTileImageCombinerContext : NSObject {

	BOOL _isLTR;
	double _displayScale;
	double _imageSize;
	double _imageOffset;
	UIColor* _backgroundColor;
	UIColor* _borderColor;
	double _borderWidth;

}

@property (nonatomic,readonly) double displayScale;                    //@synthesize displayScale=_displayScale - In the implementation block
@property (nonatomic,readonly) BOOL isLTR;                             //@synthesize isLTR=_isLTR - In the implementation block
@property (nonatomic,readonly) double imageSize;                       //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) double imageOffset;                     //@synthesize imageOffset=_imageOffset - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * borderColor;                  //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) double borderWidth;                     //@synthesize borderWidth=_borderWidth - In the implementation block
-(double)imageSize;
-(double)displayScale;
-(BOOL)isLTR;
-(UIColor *)borderColor;
-(double)imageOffset;
-(id)initWithDisplayScale:(double)arg1 isLTR:(BOOL)arg2 imageSize:(double)arg3 imageOffset:(double)arg4 backgroundColor:(id)arg5 borderColor:(id)arg6 borderWidth:(double)arg7 ;
-(UIColor *)backgroundColor;
-(double)borderWidth;
@end

