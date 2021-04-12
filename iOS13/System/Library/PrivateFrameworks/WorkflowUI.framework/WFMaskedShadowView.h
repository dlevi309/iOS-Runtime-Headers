/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class UIColor, CAShapeLayer, WFAction, NSString;

@interface WFMaskedShadowView : UIView <WFActionEventObserver> {

	BOOL _attributesChanged;
	BOOL _actionRunning;
	long long _mode;
	double _cornerRadius;
	UIColor* _shadowColor;
	UIColor* _runningShadowColor;
	UIColor* _borderColor;
	double _borderWidth;
	CAShapeLayer* _borderLayer;
	WFAction* _action;

}

@property (assign,nonatomic) long long mode;                                 //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double cornerRadius;                            //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                          //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,retain) UIColor * runningShadowColor;                   //@synthesize runningShadowColor=_runningShadowColor - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                          //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                             //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic,__weak) CAShapeLayer * borderLayer;              //@synthesize borderLayer=_borderLayer - In the implementation block
@property (assign,nonatomic,__weak) WFAction * action;                       //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(WFAction *)action;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)setAction:(WFAction *)arg1 ;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(CAShapeLayer *)borderLayer;
-(void)setBorderLayer:(CAShapeLayer *)arg1 ;
-(void)attributesDidChange;
-(void)actionRunningStateDidChange:(id)arg1 ;
-(void)setRunningShadowColor:(UIColor *)arg1 ;
-(void)applyAttributes;
-(void)updateShadowColorAnimated:(BOOL)arg1 ;
-(UIColor *)runningShadowColor;
@end

