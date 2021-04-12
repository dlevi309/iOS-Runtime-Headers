/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CPSPanViewDelegate;
@class CPSPanButton, NSString;

@interface CPSPanView : UIView <UIGestureRecognizerDelegate> {

	CPSPanButton* _panLeftButton;
	CPSPanButton* _panRightButton;
	CPSPanButton* _panUpButton;
	CPSPanButton* _panDownButton;
	id<CPSPanViewDelegate> _delegate;

}

@property (nonatomic,readonly) CPSPanButton * panLeftButton;                      //@synthesize panLeftButton=_panLeftButton - In the implementation block
@property (nonatomic,readonly) CPSPanButton * panRightButton;                     //@synthesize panRightButton=_panRightButton - In the implementation block
@property (nonatomic,readonly) CPSPanButton * panUpButton;                        //@synthesize panUpButton=_panUpButton - In the implementation block
@property (nonatomic,readonly) CPSPanButton * panDownButton;                      //@synthesize panDownButton=_panDownButton - In the implementation block
@property (assign,nonatomic,__weak) id<CPSPanViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double sideButtonTopInset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CPSPanViewDelegate>)delegate;
-(void)setDelegate:(id<CPSPanViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_handleLongPressGesture:(id)arg1 ;
-(void)_handleButtonTapped:(id)arg1 ;
-(CPSPanButton *)panRightButton;
-(double)sideButtonTopInset;
-(CPSPanButton *)panLeftButton;
-(CPSPanButton *)panUpButton;
-(CPSPanButton *)panDownButton;
@end

