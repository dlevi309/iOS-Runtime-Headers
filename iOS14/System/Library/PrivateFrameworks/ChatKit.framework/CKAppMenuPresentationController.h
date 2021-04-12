/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, UIView, NSString;

@interface CKAppMenuPresentationController : UIPresentationController <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;              //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (nonatomic,retain) UIView * sourceView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)tapOutsideMenu;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceView:(id)arg3 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

