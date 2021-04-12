/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)contentSize;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UILabel *)_label;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)textColor;
-(long long)textAlignment;
-(void)setHighlightedTextColor:(id)arg1 ;
-(id)highlightedTextColor;
-(void)updateToContentSize:(id)arg1 ;
-(BOOL)wantsLegibilityShadow;
-(void)_updateAttributedText;
-(void)_updateInternalContentSize;
-(void)setWantsLegibilityShadow:(BOOL)arg1 ;
@end

