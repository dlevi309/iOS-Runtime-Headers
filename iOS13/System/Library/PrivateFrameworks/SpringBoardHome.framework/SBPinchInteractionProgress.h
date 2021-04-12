/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIInteractionProgress.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPinchGestureRecognizer, NSString;

@interface SBPinchInteractionProgress : UIInteractionProgress <UIGestureRecognizerDelegate> {

	SCD_Struct_SB5 _pinchInterval;
	UIPinchGestureRecognizer* _pinchGesture;

}

@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGesture;              //@synthesize pinchGesture=_pinchGesture - In the implementation block
@property (nonatomic,readonly) double minPinchScale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handlePinchGesture:(id)arg1 ;
-(UIPinchGestureRecognizer *)pinchGesture;
-(void)_updatePinchScale:(double)arg1 ;
-(double)minPinchScale;
-(id)initWithPinchGesture:(id)arg1 minPinchScale:(double)arg2 ;
@end

