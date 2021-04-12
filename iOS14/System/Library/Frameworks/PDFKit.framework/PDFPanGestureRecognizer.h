/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>

@interface PDFPanGestureRecognizer : UIPanGestureRecognizer {

	BOOL _didForcePress;
	BOOL _touchesDidHavePressure;
	CGPoint _locationOfFirstTouch;

}

@property (assign,nonatomic) CGPoint locationOfFirstTouch;              //@synthesize locationOfFirstTouch=_locationOfFirstTouch - In the implementation block
@property (assign,nonatomic) BOOL didForcePress;                        //@synthesize didForcePress=_didForcePress - In the implementation block
@property (assign,nonatomic) BOOL touchesDidHavePressure;               //@synthesize touchesDidHavePressure=_touchesDidHavePressure - In the implementation block
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationOfFirstTouchInView:(id)arg1 ;
-(void)setLocationOfFirstTouch:(CGPoint)arg1 ;
-(void)setDidForcePress:(BOOL)arg1 ;
-(void)setTouchesDidHavePressure:(BOOL)arg1 ;
-(CGPoint)locationOfFirstTouch;
-(BOOL)didForcePress;
-(BOOL)touchesDidHavePressure;
@end

