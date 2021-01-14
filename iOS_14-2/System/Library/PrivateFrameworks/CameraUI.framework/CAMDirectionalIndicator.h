/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class CAShapeLayer;

@interface CAMDirectionalIndicator : UIControl {

	long long _style;
	long long _direction;
	CAShapeLayer* __arrowLayer;
	CAShapeLayer* __compactBackgroundLayer;

}

@property (nonatomic,readonly) CAShapeLayer * _backingShapeLayer; 
@property (nonatomic,readonly) CAShapeLayer * _arrowLayer;                          //@synthesize _arrowLayer=__arrowLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * _compactBackgroundLayer;              //@synthesize _compactBackgroundLayer=__compactBackgroundLayer - In the implementation block
@property (nonatomic,readonly) long long style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long direction;                                   //@synthesize direction=_direction - In the implementation block
+(Class)layerClass;
+(CGSize)_compactBackgroundSize;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)direction;
-(CGSize)intrinsicContentSize;
-(void)setDirection:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)layoutSubviews;
-(long long)style;
-(void)setDirection:(long long)arg1 animated:(BOOL)arg2 ;
-(CAShapeLayer *)_backingShapeLayer;
-(void)_updateArrowColorAnimated:(BOOL)arg1 ;
-(void)_updateArrowShapeAnimated:(BOOL)arg1 ;
-(void)_updateCompactCirclePath;
-(CAShapeLayer *)_arrowLayer;
-(CAShapeLayer *)_compactBackgroundLayer;
@end

