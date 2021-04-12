/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNObserver.h>

@protocol _CNObservableSkipUntilSignalObserverDelegate;
@class NSString;

@interface _CNObservableSkipUntilSignalObserver : NSObject <CNObserver> {

	id<_CNObservableSkipUntilSignalObserverDelegate> _delegate;

}

@property (__weak,readonly) id<_CNObservableSkipUntilSignalObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<_CNObservableSkipUntilSignalObserverDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)observerDidComplete;
@end

