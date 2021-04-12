/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class DOCTagDotView, CAShapeLayer;

@interface DOCTagCheckableDotView : UIView {

	BOOL _checked;
	DOCTagDotView* _tagDotView;
	CAShapeLayer* _borderLayer;

}

@property (nonatomic,readonly) DOCTagDotView * tagDotView;              //@synthesize tagDotView=_tagDotView - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * borderLayer;              //@synthesize borderLayer=_borderLayer - In the implementation block
@property (assign,nonatomic) long long tagColor; 
@property (assign,nonatomic) BOOL checked;                              //@synthesize checked=_checked - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)checked;
-(CAShapeLayer *)borderLayer;
-(void)setTagColor:(long long)arg1 ;
-(DOCTagDotView *)tagDotView;
-(void)updateLayoutOfLayers;
-(long long)tagColor;
@end

