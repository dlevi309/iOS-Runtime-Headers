/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NUTextAndGlyph * textAndGlyph;              //@synthesize textAndGlyph=_textAndGlyph - In the implementation block
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)nu_crossFadeViewClearVisibleState;
-(void)nu_crossFadeViewSetValue:(id)arg1 ;
-(void)setTextAndGlyph:(NUTextAndGlyph *)arg1 ;
-(NUTextAndGlyph *)textAndGlyph;
@end

