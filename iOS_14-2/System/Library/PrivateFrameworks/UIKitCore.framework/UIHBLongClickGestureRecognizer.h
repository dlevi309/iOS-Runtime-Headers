/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIPressesEventTerminalRegistration.h>

@class UIPressesEvent, NSArray, NSString;

@interface UIHBLongClickGestureRecognizer : UIGestureRecognizer <UIPressesEventTerminalRegistration> {

	UIPressesEvent* _registeredEventForTerminalEvents;
	unsigned long long _lastSeenClickCount;
	unsigned long long _numberOfClicksRequired;

}

@property (assign,nonatomic) unsigned long long numberOfClicksRequired;              //@synthesize numberOfClicksRequired=_numberOfClicksRequired - In the implementation block
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
-(unsigned long long)numberOfClicksRequired;
-(void)_processPresses:(id)arg1 ;
-(void)_succeed;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setNumberOfClicksRequired:(unsigned long long)arg1 ;
-(void)pressesEventDidReceiveTerminal:(id)arg1 ;
-(unsigned long long)_effectiveNumberOfClicksRequired;
-(BOOL)_requiredClickCountMetForPress:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

