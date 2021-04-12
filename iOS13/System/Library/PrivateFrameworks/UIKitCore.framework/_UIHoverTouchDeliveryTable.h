/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableSet, UITouch, NSSet;

@interface _UIHoverTouchDeliveryTable : NSObject {

	NSMutableSet* _beginningGestureRecognizers;
	NSMutableSet* _updatingGestureRecognizers;
	NSMutableSet* _exitingGestureRecognizers;
	UITouch* _touch;

}

@property (nonatomic,readonly) UITouch * touch;                         //@synthesize touch=_touch - In the implementation block
@property (nonatomic,readonly) NSSet * gestureRecognizers; 
-(UITouch *)touch;
-(NSSet *)gestureRecognizers;
-(void)removeGestureRecognizer:(id)arg1 ;
-(void)_cancelAllGestureRecognizers;
-(id)initWithTouch:(id)arg1 ;
-(long long)updateGestureRecognizerForDelivery:(id)arg1 ;
-(void)updateForEvent:(id)arg1 forcingHitTest:(BOOL)arg2 ;
@end

