/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class NSSet;

@interface _UITouchesObservingGestureRecognizer : UIGestureRecognizer {

	NSSet* _touches;

}

@property (nonatomic,copy) NSSet * touches;              //@synthesize touches=_touches - In the implementation block
+(BOOL)_shouldDefaultToTouches;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(NSSet *)touches;
-(BOOL)_wantsPartialTouchSequences;
-(void)_updateTouchesFromEvent:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(BOOL)_allTouchesAreEndedOrCancelled:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setTouches:(NSSet *)arg1 ;
@end

