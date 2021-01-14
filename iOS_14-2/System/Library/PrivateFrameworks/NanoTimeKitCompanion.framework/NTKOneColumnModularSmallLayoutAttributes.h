/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class CLKFont;

@interface NTKOneColumnModularSmallLayoutAttributes : NSObject {

	CLKFont* _subtitleFont;
	double _subtitleBaselineOffset;
	double _marginWidth;
	double _imageOriginY;
	double _imageHeight;
	double _minimumFontSize;
	CLKFont* _titleFont;
	double _titleBaselineOffset;

}

@property (nonatomic,retain) CLKFont * subtitleFont;                     //@synthesize subtitleFont=_subtitleFont - In the implementation block
@property (assign,nonatomic) double subtitleBaselineOffset;              //@synthesize subtitleBaselineOffset=_subtitleBaselineOffset - In the implementation block
@property (assign,nonatomic) double marginWidth;                         //@synthesize marginWidth=_marginWidth - In the implementation block
@property (assign,nonatomic) double imageOriginY;                        //@synthesize imageOriginY=_imageOriginY - In the implementation block
@property (assign,nonatomic) double imageHeight;                         //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) double minimumFontSize;                     //@synthesize minimumFontSize=_minimumFontSize - In the implementation block
@property (nonatomic,retain) CLKFont * titleFont;                        //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic) double titleBaselineOffset;                 //@synthesize titleBaselineOffset=_titleBaselineOffset - In the implementation block
+(id)attributesForTemplate:(id)arg1 forDevice:(id)arg2 ;
-(void)setTitleFont:(CLKFont *)arg1 ;
-(CLKFont *)titleFont;
-(void)setImageHeight:(double)arg1 ;
-(double)minimumFontSize;
-(CLKFont *)subtitleFont;
-(void)setMarginWidth:(double)arg1 ;
-(void)setSubtitleFont:(CLKFont *)arg1 ;
-(double)titleBaselineOffset;
-(double)subtitleBaselineOffset;
-(double)imageHeight;
-(double)marginWidth;
-(void)setMinimumFontSize:(double)arg1 ;
-(double)imageOriginY;
-(void)setSubtitleBaselineOffset:(double)arg1 ;
-(void)setTitleBaselineOffset:(double)arg1 ;
-(void)setImageOriginY:(double)arg1 ;
@end

