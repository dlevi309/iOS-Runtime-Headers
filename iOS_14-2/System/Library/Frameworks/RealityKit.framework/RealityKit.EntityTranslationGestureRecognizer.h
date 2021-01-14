/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/RealityKit.framework/RealityKit
*/

#import <UIKitCore/UIGestureRecognizer.h>

@interface RealityKit.EntityTranslationGestureRecognizer : UIGestureRecognizer {

	 entity;
	 startingWorldLocation;
	 lastWorldLocation;
	 touchHeight;
	 velocity;
	 lastTranslation;
	 lastFrameTime;
	 startingScreenLocation;
	 lastScreenLocation;
	 hasBegun;

}
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

