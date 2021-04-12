/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIPressesEventTerminalRegistration.h>

@class NSArray, UIPressesEvent, NSString;

@interface UIHBClickGestureRecognizer : UIGestureRecognizer <UIPressesEventTerminalRegistration> {

	UIPressesEvent* _registeredEventForTerminalEvents;
	unsigned long long _lastSeenClickCount;
	BOOL _recognizesOnPressPhaseBegan;
	unsigned long long _clickCount;

}

@property (assign,nonatomic) unsigned long long clickCount;                 //@synthesize clickCount=_clickCount - In the implementation block
@property (assign,nonatomic) BOOL recognizesOnPressPhaseBegan;              //@synthesize recognizesOnPressPhaseBegan=_recognizesOnPressPhaseBegan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * allowedPressTypes; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(void)_succeed;
-(void)_fail;
-(void)_processPresses:(id)arg1 ;
-(unsigned long long)clickCount;
-(void)pressesEventDidReceiveTerminal:(id)arg1 ;
-(void)setClickCount:(unsigned long long)arg1 ;
-(BOOL)recognizesOnPressPhaseBegan;
-(void)setRecognizesOnPressPhaseBegan:(BOOL)arg1 ;
@end

