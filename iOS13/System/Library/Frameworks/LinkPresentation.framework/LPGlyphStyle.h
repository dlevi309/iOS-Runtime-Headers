/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class LPImage, LPPadding, LPImageViewStyle, LPPointUnit;

@interface LPGlyphStyle : NSObject {

	LPImage* _image;
	LPPadding* _padding;
	double _opacity;
	LPImageViewStyle* _imageStyle;
	LPPointUnit* _baselineOffset;

}

@property (nonatomic,retain) LPImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * padding;                 //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double opacity;                               //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * imageStyle;              //@synthesize imageStyle=_imageStyle - In the implementation block
@property (nonatomic,retain) LPPointUnit * baselineOffset;                 //@synthesize baselineOffset=_baselineOffset - In the implementation block
-(id)init;
-(LPImage *)image;
-(void)setImage:(LPImage *)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(LPPointUnit *)baselineOffset;
-(void)setBaselineOffset:(LPPointUnit *)arg1 ;
-(LPPadding *)padding;
-(LPImageViewStyle *)imageStyle;
-(id)initSearchGlyph;
@end

