/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <CameraEditKit/CEKBadgeView.h>

@class NSString, NSDictionary;

@interface CEKBadgeTextView : CEKBadgeView {

	NSString* _contentSizeCategory;
	unsigned long long _fontStyle;
	NSDictionary* __textAttributes;
	NSString* __text;
	UIEdgeInsets __textInsets;

}

@property (setter=_setTextAttributes:,nonatomic,retain) NSDictionary * _textAttributes;              //@synthesize _textAttributes=__textAttributes - In the implementation block
@property (setter=_setText:,nonatomic,copy) NSString * _text;                                        //@synthesize _text=__text - In the implementation block
@property (assign,setter=_setTextInsets:,nonatomic) UIEdgeInsets _textInsets;                        //@synthesize _textInsets=__textInsets - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;                                           //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) unsigned long long fontStyle;                                           //@synthesize fontStyle=_fontStyle - In the implementation block
+(UIEdgeInsets)_defaultTextInsets;
+(double)_textHeightForContentSize:(id)arg1 ;
+(double)_heightForContentSize:(id)arg1 textInsets:(UIEdgeInsets)arg2 ;
+(id)_textAttributesForContentSize:(id)arg1 fontStyle:(unsigned long long)arg2 ;
+(id)_fontForContentSize:(id)arg1 fontStyle:(unsigned long long)arg2 ;
-(NSString *)_text;
-(void)setFontStyle:(unsigned long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)_maskImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setText:(id)arg1 ;
-(UIEdgeInsets)_textInsets;
-(void)_setTextInsets:(UIEdgeInsets)arg1 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(CGSize)_textSize;
-(NSString *)contentSizeCategory;
-(unsigned long long)fontStyle;
-(NSDictionary *)_textAttributes;
-(void)_setTextAttributes:(id)arg1 ;
@end

