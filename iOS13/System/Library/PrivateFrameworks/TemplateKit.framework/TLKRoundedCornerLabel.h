/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKLabel.h>

@class UIView;

@interface TLKRoundedCornerLabel : TLKLabel {

	BOOL _large;
	UIView* _borderView;

}

@property (nonatomic,retain) UIView * borderView;              //@synthesize borderView=_borderView - In the implementation block
@property (assign,nonatomic) BOOL large;                       //@synthesize large=_large - In the implementation block
-(void)setBorderView:(UIView *)arg1 ;
-(UIView *)borderView;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(id)initWithProminence:(unsigned long long)arg1 ;
-(void)setLarge:(BOOL)arg1 ;
-(BOOL)large;
@end

