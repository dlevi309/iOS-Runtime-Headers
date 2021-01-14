/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, CAShapeLayer, UILabel, UIColor;

@interface HUColorSwatchView : UIView {

	BOOL _labelHidden;
	unsigned long long _selectionState;
	NSString* _text;
	CAShapeLayer* _circleLayer;
	CAShapeLayer* _selectedCircleLayer;
	CAShapeLayer* _selectedCircleInnerLayer;
	CAShapeLayer* _selectedCircleOuterLayer;
	UILabel* _label;

}

@property (nonatomic,retain) CAShapeLayer * circleLayer;                           //@synthesize circleLayer=_circleLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectedCircleLayer;                   //@synthesize selectedCircleLayer=_selectedCircleLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectedCircleInnerLayer;              //@synthesize selectedCircleInnerLayer=_selectedCircleInnerLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * selectedCircleOuterLayer;              //@synthesize selectedCircleOuterLayer=_selectedCircleOuterLayer - In the implementation block
@property (nonatomic,retain) UILabel * label;                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) unsigned long long selectionState;                    //@synthesize selectionState=_selectionState - In the implementation block
@property (assign,nonatomic) BOOL labelHidden;                                     //@synthesize labelHidden=_labelHidden - In the implementation block
@property (nonatomic,retain) NSString * text;                                      //@synthesize text=_text - In the implementation block
+(Class)layerClass;
-(void)_updateLayout;
-(void)_updateTextColor;
-(void)setLabelHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(UIColor *)color;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setSelectionState:(unsigned long long)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)selectionState;
-(UILabel *)label;
-(CAShapeLayer *)selectedCircleInnerLayer;
-(void)setSelectedCircleInnerLayer:(CAShapeLayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 text:(id)arg2 ;
-(CAShapeLayer *)circleLayer;
-(CAShapeLayer *)selectedCircleLayer;
-(CAShapeLayer *)selectedCircleOuterLayer;
-(BOOL)labelHidden;
-(void)setCircleLayer:(CAShapeLayer *)arg1 ;
-(void)setSelectedCircleLayer:(CAShapeLayer *)arg1 ;
-(void)setSelectedCircleOuterLayer:(CAShapeLayer *)arg1 ;
@end

