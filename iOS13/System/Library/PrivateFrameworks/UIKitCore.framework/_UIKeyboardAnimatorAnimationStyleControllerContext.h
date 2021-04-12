/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKeyboardAnimatorState.h>

@protocol UIInputViewAnimationHost;
@class UIView, UIInputViewSetPlacement, NSString;

@interface _UIKeyboardAnimatorAnimationStyleControllerContext : NSObject <_UIKeyboardAnimatorState> {

	id<UIInputViewAnimationHost> _host;
	UIInputViewSetPlacement* _start;
	UIInputViewSetPlacement* _end;
	CGRect _startFrame;
	CGRect _endFrame;
	BOOL _hidden;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) UIView * animatingView; 
@property (assign,nonatomic) BOOL inputViewsHidden;                        //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) CGRect startFrame;                          //@synthesize startFrame=_startFrame - In the implementation block
@property (nonatomic,readonly) CGRect endFrame;                            //@synthesize endFrame=_endFrame - In the implementation block
-(void)complete;
-(CGRect)endFrame;
-(CGRect)startFrame;
-(void)setInputViewsHidden:(BOOL)arg1 ;
-(UIView *)animatingView;
-(id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 ;
-(BOOL)inputViewsHidden;
@end

