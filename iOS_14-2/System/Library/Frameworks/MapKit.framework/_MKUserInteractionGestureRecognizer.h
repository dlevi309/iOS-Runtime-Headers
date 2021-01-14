/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <UIKitCore/UIGestureRecognizer.h>

@protocol _MKUserInteractionGestureRecognizerTouchObserver;
@class NSMutableSet;

@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer {

	NSMutableSet* _activeTouches;
	id<_MKUserInteractionGestureRecognizerTouchObserver> _touchObserver;

}

@property (assign,nonatomic,__weak) id<_MKUserInteractionGestureRecognizerTouchObserver> touchObserver;              //@synthesize touchObserver=_touchObserver - In the implementation block
-(void)setTouchObserver:(id<_MKUserInteractionGestureRecognizerTouchObserver>)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id<_MKUserInteractionGestureRecognizerTouchObserver>)touchObserver;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

