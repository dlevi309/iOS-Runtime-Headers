/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

