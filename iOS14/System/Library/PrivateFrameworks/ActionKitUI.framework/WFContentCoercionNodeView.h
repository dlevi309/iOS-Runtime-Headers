/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class WFContentCoercionNode, CAShapeLayer, UILabel;

@interface WFContentCoercionNodeView : UIView {

	WFContentCoercionNode* _node;
	CAShapeLayer* _outlineLayer;
	UILabel* _nameLabel;

}

@property (assign,nonatomic,__weak) CAShapeLayer * outlineLayer;              //@synthesize outlineLayer=_outlineLayer - In the implementation block
@property (assign,nonatomic,__weak) UILabel * nameLabel;                      //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) WFContentCoercionNode * node;                    //@synthesize node=_node - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(WFContentCoercionNode *)node;
-(void)setNode:(WFContentCoercionNode *)arg1 ;
-(void)updateColors;
-(void)layoutSubviews;
-(UILabel *)nameLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(CAShapeLayer *)outlineLayer;
-(void)setOutlineLayer:(CAShapeLayer *)arg1 ;
@end

