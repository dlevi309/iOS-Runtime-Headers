/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableSet, UIView, NSString;

@interface AKTouchOutsideViewGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	NSMutableSet* mTargets;
	UIView* mWatchView;

}

@property (assign,nonatomic,__weak) UIView * watchView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(UIView *)watchView;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 watchView:(id)arg3 ;
-(void)setWatchView:(UIView *)arg1 ;
@end

