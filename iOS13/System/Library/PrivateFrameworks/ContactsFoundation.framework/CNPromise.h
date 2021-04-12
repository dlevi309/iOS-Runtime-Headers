/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNPromise.h>

@class CNFuture, NSString;

@interface CNPromise : NSObject <CNPromise> {

	CNFuture* _future;

}

@property (readonly) CNFuture * future;                             //@synthesize future=_future - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)finishWithError:(id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(CNFuture *)future;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(id)initWithSchedulerProvider:(id)arg1 ;
@end

