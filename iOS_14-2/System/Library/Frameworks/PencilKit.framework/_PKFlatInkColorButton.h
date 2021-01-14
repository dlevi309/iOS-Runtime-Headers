/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/_PKInkColorButton.h>

@class CAShapeLayer;

@interface _PKFlatInkColorButton : _PKInkColorButton {

	CAShapeLayer* _fillShapeLayer;
	CAShapeLayer* _strokeShapeLayer;

}

@property (nonatomic,retain) CAShapeLayer * fillShapeLayer;                //@synthesize fillShapeLayer=_fillShapeLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * strokeShapeLayer;              //@synthesize strokeShapeLayer=_strokeShapeLayer - In the implementation block
-(void)layoutSubviews;
-(id)initWithColor:(id)arg1 isCompact:(BOOL)arg2 ;
-(CAShapeLayer *)strokeShapeLayer;
-(void)setStrokeShapeLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)fillShapeLayer;
-(void)setFillShapeLayer:(CAShapeLayer *)arg1 ;
@end

