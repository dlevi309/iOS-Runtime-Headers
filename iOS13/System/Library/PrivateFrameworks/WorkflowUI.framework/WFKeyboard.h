/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@interface WFKeyboard : NSObject {

	BOOL _visible;
	long long _animationCurve;
	double _animationDuration;
	CGRect _keyboardFrame;

}

@property (nonatomic,readonly) CGRect keyboardFrame;                       //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible;              //@synthesize visible=_visible - In the implementation block
@property (nonatomic,readonly) long long animationCurve;                   //@synthesize animationCurve=_animationCurve - In the implementation block
@property (nonatomic,readonly) double animationDuration;                   //@synthesize animationDuration=_animationDuration - In the implementation block
+(id)sharedKeyboard;
+(void)beginObservingKeyboardNotifications;
-(id)init;
-(void)dealloc;
-(BOOL)isVisible;
-(long long)animationCurve;
-(double)animationDuration;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(CGRect)keyboardFrame;
-(void)keyboardWillChangeVisible:(id)arg1 ;
-(CGRect)keyboardFrameInView:(id)arg1 ;
@end

