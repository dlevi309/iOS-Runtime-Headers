/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	 lastScreenLocation;
	 hasBegun;

}
-(void)reset;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

