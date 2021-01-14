/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dimmingViewWasTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(void)layoutSubviews;
-(void)finishReturnToKeyboard;
-(void)prepareForReturnToKeyboard;
-(CGPoint)positionForShow;
-(void)endpointButtonPressed;
-(void)setInputViewsHiddenForDictation:(BOOL)arg1 ;
-(void)setState:(int)arg1 ;
-(void)returnToKeyboard;
-(void)dealloc;
@end

