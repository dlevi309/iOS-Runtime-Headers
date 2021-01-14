/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)checked;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(CAShapeLayer *)borderLayer;
-(DOCTagDotView *)tagDotView;
-(void)setTagColor:(long long)arg1 ;
-(long long)tagColor;
-(void)updateLayoutOfLayers;
@end

