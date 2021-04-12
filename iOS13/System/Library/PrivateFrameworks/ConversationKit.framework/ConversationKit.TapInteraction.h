/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@class UIView;

@interface ConversationKit.TapInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {

	 view;
	 tapGestureRecognizer;

}

@property (assign,__weak,nonatomic) UIView * view; 
@property (assign,nonatomic) long long numberOfTapsRequired; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id)init;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(long long)numberOfTapsRequired;
-(void)setNumberOfTapsRequired:(long long)arg1 ;
-(void)handleRecognizer:(id)arg1 ;
@end

