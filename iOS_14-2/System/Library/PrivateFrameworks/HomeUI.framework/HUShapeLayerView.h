/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIView.h>

@class CAShapeLayer, UIColor;

@interface HUShapeLayerView : UIView {

	BOOL _fillColorMatchesTintColor;
	/*^block*/id _pathLayoutBlock;

}

@property (nonatomic,readonly) CAShapeLayer * layer; 
@property (assign,nonatomic) BOOL fillColorMatchesTintColor;              //@synthesize fillColorMatchesTintColor=_fillColorMatchesTintColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor; 
@property (nonatomic,copy) id pathLayoutBlock;                            //@synthesize pathLayoutBlock=_pathLayoutBlock - In the implementation block
+(Class)layerClass;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)tintColorDidChange;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(UIColor *)fillColor;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(id)initWithPathLayoutBlock:(/*^block*/id)arg1 ;
-(void)setFillColorMatchesTintColor:(BOOL)arg1 ;
-(void)setPathLayoutBlock:(id)arg1 ;
-(id)pathLayoutBlock;
-(BOOL)fillColorMatchesTintColor;
@end

