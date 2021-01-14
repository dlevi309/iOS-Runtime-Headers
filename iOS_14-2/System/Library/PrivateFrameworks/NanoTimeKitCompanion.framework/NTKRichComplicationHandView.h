/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateHandTransform;
-(id)initWithDotSize:(double)arg1 handWidth:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4 ;
-(CALayer *)dotLayer;
-(CALayer *)handLayer;
@end

