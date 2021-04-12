/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NUCrossFadeViewAnimatable.h>

@class NUTextAndGlyph, UILabel, UIImageView, NSString;

@interface NUTextAndGlyphView : UIView <NUCrossFadeViewAnimatable> {

	NUTextAndGlyph* _textAndGlyph;
	UILabel* _label;
	UIImageView* _imageView;
	unsigned long long _alignment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;               //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,retain) NUTextAndGlyph * textAndGlyph;              //@synthesize textAndGlyph=_textAndGlyph - In the implementation block
-(NUTextAndGlyph *)textAndGlyph;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(unsigned long long)alignment;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(void)nu_crossFadeViewClearVisibleState;
-(void)nu_crossFadeViewSetValue:(id)arg1 ;
-(void)setTextAndGlyph:(NUTextAndGlyph *)arg1 ;
-(UILabel *)label;
@end

