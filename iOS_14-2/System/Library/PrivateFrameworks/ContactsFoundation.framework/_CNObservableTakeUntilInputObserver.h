/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<CNObserver>)observer;
-(id<_CNObservableTakeUntilInputObserverDelegate>)delegate;
-(void)observerDidFailWithError:(id)arg1 ;
-(NSString *)description;
-(void)observerDidComplete;
-(id)initWithObserver:(id)arg1 delegate:(id)arg2 ;
-(void)observerDidReceiveResult:(id)arg1 ;
@end

