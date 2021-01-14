/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@protocol _UITrackingGestureRecognizerDelegate;
@interface _UITrackingGestureRecognizer : UIGestureRecognizer {

	SCD_Struct_UI36 _flags;
	id<_UITrackingGestureRecognizerDelegate> _trackingDelegate;

}

@property (assign,nonatomic,__weak) id<_UITrackingGestureRecognizerDelegate> trackingDelegate;              //@synthesize trackingDelegate=_trackingDelegate - In the implementation block
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id<_UITrackingGestureRecognizerDelegate>)trackingDelegate;
-(void)sendControlEvent:(unsigned long long)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setTrackingDelegate:(id<_UITrackingGestureRecognizerDelegate>)arg1 ;
@end

