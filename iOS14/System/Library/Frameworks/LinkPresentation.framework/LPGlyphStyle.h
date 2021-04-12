/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setBaselineOffset:(LPPointUnit *)arg1 ;
-(void)setImage:(LPImage *)arg1 ;
-(id)init;
-(double)opacity;
-(LPImageViewStyle *)imageStyle;
-(void)setOpacity:(double)arg1 ;
-(LPImage *)image;
-(id)initSearchGlyph;
-(LPPointUnit *)baselineOffset;
-(LPPadding *)padding;
@end

