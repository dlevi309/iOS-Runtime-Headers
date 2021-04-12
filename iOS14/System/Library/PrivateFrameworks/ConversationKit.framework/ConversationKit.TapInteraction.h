/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNumberOfTapsRequired:(long long)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(UIView *)view;
-(long long)numberOfTapsRequired;
-(void)handleRecognizer:(id)arg1 ;
@end

