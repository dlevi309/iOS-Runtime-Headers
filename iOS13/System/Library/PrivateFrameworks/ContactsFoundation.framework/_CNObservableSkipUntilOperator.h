/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/_CNObservableSkipUntilSignalObserverDelegate.h>
#import <libobjc.A.dylib/_CNObservableSkipUntilInputObserverDelegate.h>

@protocol CNCancelable;
@class CNObservable, NSString;

@interface _CNObservableSkipUntilOperator : CNObservable <_CNObservableSkipUntilSignalObserverDelegate, _CNObservableSkipUntilInputObserverDelegate> {

	BOOL _active;
	CNObservable* _input;
	CNObservable* _signal;
	id<CNCancelable> _inputToken;
	id<CNCancelable> _signalToken;

}

@property (readonly) CNObservable * input;                          //@synthesize input=_input - In the implementation block
@property (readonly) CNObservable * signal;                         //@synthesize signal=_signal - In the implementation block
@property (getter=isActive) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (retain) id<CNCancelable> inputToken;                     //@synthesize inputToken=_inputToken - In the implementation block
@property (retain) id<CNCancelable> signalToken;                    //@synthesize signalToken=_signalToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)isActive;
-(void)cancel;
-(CNObservable *)signal;
-(void)setActive:(BOOL)arg1 ;
-(CNObservable *)input;
-(id)subscribe:(id)arg1 ;
-(BOOL)shouldMirrorEvents;
-(void)inputDidTerminate;
-(id)initWithInput:(id)arg1 signal:(id)arg2 ;
-(void)setSignalToken:(id<CNCancelable>)arg1 ;
-(void)setInputToken:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)inputToken;
-(id<CNCancelable>)signalToken;
-(void)signalDidGenerateEvent;
@end

