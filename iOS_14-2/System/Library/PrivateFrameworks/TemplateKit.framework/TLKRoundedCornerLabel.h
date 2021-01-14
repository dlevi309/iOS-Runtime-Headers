/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>

@class TLKLabel, UIView;

@interface TLKRoundedCornerLabel : TLKView {

	TLKLabel* _label;
	unsigned long long _sizeConfiguration;
	UIView* _borderView;

}

@property (nonatomic,retain) UIView * borderView;                               //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) TLKLabel * label;                                  //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long sizeConfiguration;              //@synthesize sizeConfiguration=_sizeConfiguration - In the implementation block
-(unsigned long long)sizeConfiguration;
-(void)setSizeConfiguration:(unsigned long long)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)effectiveLayoutSizeFittingSize:(CGSize)arg1 ;
-(UIView *)borderView;
-(void)setBorderView:(UIView *)arg1 ;
-(void)didMoveToWindow;
-(void)updateFont;
-(void)setLabel:(TLKLabel *)arg1 ;
-(id)initWithProminence:(unsigned long long)arg1 ;
-(TLKLabel *)label;
@end

