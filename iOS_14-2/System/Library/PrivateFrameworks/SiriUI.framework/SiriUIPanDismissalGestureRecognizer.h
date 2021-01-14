/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIPanGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SiriUIPanDismissalGestureRecognizerDelegate;
@class NSString;

@interface SiriUIPanDismissalGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate> {

	id<SiriUIPanDismissalGestureRecognizerDelegate> _dismissalDelegate;
	long long _dismissalStyle;
	long long _initialDirection;
	/*^block*/id _rtlProvider;
	CGPoint _initialPosition;

}

@property (assign,nonatomic,__weak) id<SiriUIPanDismissalGestureRecognizerDelegate> dismissalDelegate;              //@synthesize dismissalDelegate=_dismissalDelegate - In the implementation block
@property (assign,nonatomic) long long dismissalStyle;                                                              //@synthesize dismissalStyle=_dismissalStyle - In the implementation block
@property (assign,nonatomic) CGPoint initialPosition;                                                               //@synthesize initialPosition=_initialPosition - In the implementation block
@property (assign,nonatomic) long long initialDirection;                                                            //@synthesize initialDirection=_initialDirection - In the implementation block
@property (nonatomic,copy) id rtlProvider;                                                                          //@synthesize rtlProvider=_rtlProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)dismissalStyle;
-(void)setInitialDirection:(long long)arg1 ;
-(long long)initialDirection;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setDismissalStyle:(long long)arg1 ;
-(void)panGestureRecognizerDidPan:(id)arg1 ;
-(void)setDismissalDelegate:(id<SiriUIPanDismissalGestureRecognizerDelegate>)arg1 ;
-(id)initWithDismissalDelegate:(id)arg1 dismissalStyle:(long long)arg2 ;
-(void)_handlePanWithRubberBandDownDismissUp:(id)arg1 requiredDirection:(long long)arg2 ;
-(void)_handlePanWithRubberBandUpDownDismissTrailing:(id)arg1 requiredDirection:(long long)arg2 ;
-(CGPoint)initialPosition;
-(id<SiriUIPanDismissalGestureRecognizerDelegate>)dismissalDelegate;
-(void)_updatePanGestureRecognizer:(id)arg1 changedAnimations:(/*^block*/id)arg2 endAnimations:(/*^block*/id)arg3 ;
-(id)rtlProvider;
-(id)initWithDismissalDelegate:(id)arg1 dismissalStyle:(long long)arg2 rtlProvider:(/*^block*/id)arg3 ;
-(void)setInitialPosition:(CGPoint)arg1 ;
-(void)setRtlProvider:(id)arg1 ;
@end

