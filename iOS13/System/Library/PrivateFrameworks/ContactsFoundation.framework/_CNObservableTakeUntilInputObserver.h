/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNObserver.h>

@protocol CNObserver, _CNObservableTakeUntilInputObserverDelegate;
@class NSString;

@interface _CNObservableTakeUntilInputObserver : NSObject <CNObserver> {

	id<CNObserver> _observer;
	id<_CNObservableTakeUntilInputObserverDelegate> _delegate;

}

@property (readonly) id<CNObserver> observer;                                                      //@synthesize observer=_observer - In the implementation block
@property (__weak,readonly) id<_CNObservableTakeUntilInputObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<CNObserver>)observer;
-(id<_CNObservableTakeUntilInputObserverDelegate>)delegate;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
-(id)initWithObserver:(id)arg1 delegate:(id)arg2 ;
@end

