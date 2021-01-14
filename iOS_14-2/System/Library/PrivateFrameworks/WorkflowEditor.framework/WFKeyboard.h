/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
-(double)animationDuration;
-(id)init;
-(CGRect)keyboardFrame;
-(BOOL)isVisible;
-(void)keyboardWillChangeFrame:(id)arg1 ;
-(long long)animationCurve;
-(void)dealloc;
-(CGRect)keyboardFrameInView:(id)arg1 ;
-(void)keyboardWillChangeVisible:(id)arg1 ;
@end

