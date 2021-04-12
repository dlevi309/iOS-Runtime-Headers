/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_textAttributesForContentSize:(id)arg1 fontStyle:(unsigned long long)arg2 ;
+(id)_fontForContentSize:(id)arg1 fontStyle:(unsigned long long)arg2 ;
+(double)_textHeightForContentSize:(id)arg1 ;
+(double)_heightForContentSize:(id)arg1 textInsets:(UIEdgeInsets)arg2 ;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_maskImage;
-(NSString *)_text;
-(NSDictionary *)_textAttributes;
-(void)setFontStyle:(unsigned long long)arg1 ;
-(unsigned long long)fontStyle;
-(CGSize)_textSize;
-(void)_setText:(id)arg1 ;
-(UIEdgeInsets)_textInsets;
-(void)_setTextAttributes:(id)arg1 ;
-(void)_setTextInsets:(UIEdgeInsets)arg1 ;
@end

