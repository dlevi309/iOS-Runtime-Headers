/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDictationView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIDimmingView, NSString;

@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate> {

	UIDimmingView* _dimmingView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)show;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(void)returnToKeyboard;
-(void)finishReturnToKeyboard;
-(void)prepareForReturnToKeyboard;
-(CGPoint)positionForShow;
-(void)endpointButtonPressed;
-(void)setInputViewsHiddenForDictation:(BOOL)arg1 ;
@end

