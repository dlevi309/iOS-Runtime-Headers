/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTouch:(id)arg1 ;
-(long long)updateGestureRecognizerForDelivery:(id)arg1 ;
-(void)updateForEvent:(id)arg1 forcingHitTest:(BOOL)arg2 ;
-(void)_cancelAllGestureRecognizers;
-(NSSet *)gestureRecognizers;
-(void)removeGestureRecognizer:(id)arg1 ;
@end

