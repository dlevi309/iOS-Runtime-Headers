/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIColor;

@interface CAMButtonLabel : UIView {

	BOOL _wantsLegibilityShadow;
	NSString* _text;
	UILabel* __label;
	CGSize _contentSize;

}

@property (nonatomic,retain,readonly) UILabel * _label;               //@synthesize _label=__label - In the implementation block
@property (nonatomic,copy) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) BOOL wantsLegibilityShadow;              //@synthesize wantsLegibilityShadow=_wantsLegibilityShadow - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                    //@synthesize contentSize=_contentSize - In the implementation block
-(UILabel *)_label;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)contentSize;
-(void)setText:(NSString *)arg1 ;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setWantsLegibilityShadow:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)updateToContentSize:(id)arg1 ;
-(void)setHighlightedTextColor:(id)arg1 ;
-(id)highlightedTextColor;
-(void)setTextAlignment:(long long)arg1 ;
-(void)_updateAttributedText;
-(BOOL)wantsLegibilityShadow;
-(void)_updateInternalContentSize;
@end

