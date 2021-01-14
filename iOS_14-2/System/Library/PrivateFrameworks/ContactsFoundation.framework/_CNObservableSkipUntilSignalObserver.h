/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<_CNObservableSkipUntilSignalObserverDelegate>)delegate;
-(void)observerDidFailWithError:(id)arg1 ;
-(NSString *)description;
-(id)initWithDelegate:(id)arg1 ;
-(void)observerDidComplete;
-(void)observerDidReceiveResult:(id)arg1 ;
@end

