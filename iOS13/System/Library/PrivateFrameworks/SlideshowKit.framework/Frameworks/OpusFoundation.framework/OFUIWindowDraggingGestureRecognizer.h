/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface OFUIWindowDraggingGestureRecognizer : UIGestureRecognizer {

	BOOL _allowDragging;
	CGPoint _initialPoint;

}

@property (nonatomic,readonly) CGPoint translation; 
@property (nonatomic,readonly) CGPoint initialPoint;              //@synthesize initialPoint=_initialPoint - In the implementation block
-(void)reset;
-(CGPoint)translation;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)initialPoint;
-(void)beginDragging;
-(void)cancelDragging;
-(void)_beginDraggingIfNecessary;
-(void)_stopDraggingIfNecessary:(BOOL)arg1 ;
@end

