/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(WFContentCoercionNode *)node;
-(void)setNode:(WFContentCoercionNode *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setOutlineLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)outlineLayer;
-(void)updateColors;
@end

