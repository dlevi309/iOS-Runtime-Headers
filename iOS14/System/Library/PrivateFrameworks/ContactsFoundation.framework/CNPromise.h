/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(/*^block*/id)completionHandlerAdapter;
-(id)init;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(CNFuture *)future;
-(BOOL)finishWithError:(id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(/*^block*/id)boolErrorCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapterWithDefaultValue:(id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

