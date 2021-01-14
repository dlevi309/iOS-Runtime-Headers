/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILongPressGestureRecognizer *)longPressGesture;
-(void)longPressObserved:(id)arg1 ;
-(void)setLongPressGesture:(UILongPressGestureRecognizer *)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(void)_removeGestureRecognizers;
-(void)willMoveToView:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(UIView *)view;
-(void)_addGestureRecognizers;
-(void)_createGestureRecognizersIfNecessary;
@end

