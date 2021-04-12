/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@class NSString, NSDictionary, UIColor;

@interface VideosExtrasGridSectionHeaderStyle : NSObject {

	NSString* _textStyle;
	NSDictionary* _defaultFontAttributes;
	UIColor* _textColor;
	double _textBaselineHeight;
	double _textBaselineDescender;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) NSString * textStyle;                              //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultFontAttributes;              //@synthesize defaultFontAttributes=_defaultFontAttributes - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                               //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                               //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) double textBaselineHeight;                         //@synthesize textBaselineHeight=_textBaselineHeight - In the implementation block
@property (assign,nonatomic) double textBaselineDescender;                      //@synthesize textBaselineDescender=_textBaselineDescender - In the implementation block
-(UIColor *)textColor;
-(void)setTextStyle:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)textStyle;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(NSDictionary *)defaultFontAttributes;
-(void)setDefaultFontAttributes:(NSDictionary *)arg1 ;
-(double)textBaselineHeight;
-(void)setTextBaselineHeight:(double)arg1 ;
-(double)textBaselineDescender;
-(void)setTextBaselineDescender:(double)arg1 ;
@end

