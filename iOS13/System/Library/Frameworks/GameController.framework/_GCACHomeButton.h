/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GCControllerButtonInput.h>

@protocol _GCACHomeButtonDelegate;
@interface _GCACHomeButton : GCControllerButtonInput {

	id<_GCACHomeButtonDelegate> _delegate;
	BOOL needsReset;

}
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
@end

