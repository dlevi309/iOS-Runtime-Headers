/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <UIKitCore/UIGestureRecognizer.h>

@interface AVExternalGestureRecognizerPreventer : UIGestureRecognizer
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
@end

