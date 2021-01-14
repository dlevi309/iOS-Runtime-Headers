/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSArray * allowedPressTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_resetGestureRecognizer;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_fail;
-(void)_processPresses:(id)arg1 ;
-(void)_succeed;
-(void)setClickCount:(unsigned long long)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEventDidReceiveTerminal:(id)arg1 ;
-(BOOL)recognizesOnPressPhaseBegan;
-(void)setRecognizesOnPressPhaseBegan:(BOOL)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)clickCount;
@end

