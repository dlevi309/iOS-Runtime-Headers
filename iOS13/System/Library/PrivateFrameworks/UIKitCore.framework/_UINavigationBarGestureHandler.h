/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@protocol _UINavigationBarGestureHandlerDelegate;
@class UISwipeGestureRecognizer, UINavigationBar, NSString;

@interface _UINavigationBarGestureHandler : NSObject <UIGestureRecognizerDelegatePrivate> {

	UISwipeGestureRecognizer* _popSwipeGestureRecognizer;
	UINavigationBar* _navigationBar;
	id<_UINavigationBarGestureHandlerDelegate> _delegate;
	long long _idiom;

}

@property (nonatomic,__weak,readonly) UINavigationBar * navigationBar;                                //@synthesize navigationBar=_navigationBar - In the implementation block
@property (assign,nonatomic,__weak) id<_UINavigationBarGestureHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long idiom;                                                         //@synthesize idiom=_idiom - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_UINavigationBarGestureHandlerDelegate>)delegate;
-(void)setDelegate:(id<_UINavigationBarGestureHandlerDelegate>)arg1 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(long long)idiom;
-(UINavigationBar *)navigationBar;
-(id)initWithNavigationBar:(id)arg1 ;
-(void)_handlePopSwipe:(id)arg1 ;
-(void)setIdiom:(long long)arg1 ;
@end

