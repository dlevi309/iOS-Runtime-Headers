/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@class UIView, UILongPressGestureRecognizer, NSString;

@interface UITextTouchObservingInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {

	UIView* _view;
	UILongPressGestureRecognizer* _longPressGesture;

}

@property (assign,nonatomic,__weak) UIView * view;                                         //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGesture;              //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)willMoveToView:(id)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)_addGestureRecognizers;
-(void)_removeGestureRecognizers;
-(void)_createGestureRecognizersIfNecessary;
-(UILongPressGestureRecognizer *)longPressGesture;
-(void)longPressObserved:(id)arg1 ;
-(void)setLongPressGesture:(UILongPressGestureRecognizer *)arg1 ;
@end

