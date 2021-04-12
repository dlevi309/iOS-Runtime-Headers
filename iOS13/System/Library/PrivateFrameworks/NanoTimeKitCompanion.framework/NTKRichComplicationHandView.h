/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>

@class CALayer;

@interface NTKRichComplicationHandView : UIView {

	CALayer* _dotLayer;
	CALayer* _handLayer;
	double _beginAngle;
	double _endAngle;
	double _handWidth;
	float _value;

}

@property (nonatomic,readonly) CALayer * dotLayer;               //@synthesize dotLayer=_dotLayer - In the implementation block
@property (nonatomic,readonly) CALayer * handLayer;              //@synthesize handLayer=_handLayer - In the implementation block
-(void)layoutSubviews;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(CALayer *)dotLayer;
-(void)_updateHandTransform;
-(id)initWithDotSize:(double)arg1 handWidth:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4 ;
-(CALayer *)handLayer;
@end

