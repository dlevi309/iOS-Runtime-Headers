/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _MKBezierPathView : UIView {

	UIColor* _fillColor;
	UIColor* _strokeColor;

}
+(CGPathRef)_createPathForBalloonRadius:(double)arg1 tailLength:(double)arg2 ;
+(Class)layerClass;
-(void)setFillColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setStrokeColor:(id)arg1 width:(double)arg2 ;
-(id)initWithBalloonRadius:(double)arg1 tailLength:(double)arg2 ;
-(id)initWithOvalInSize:(CGSize)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setPath:(CGPathRef)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setPath:(CGPathRef)arg1 duration:(double)arg2 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
@end

