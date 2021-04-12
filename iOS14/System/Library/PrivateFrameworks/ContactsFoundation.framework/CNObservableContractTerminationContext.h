/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@class NSArray;

@interface CNObservableContractTerminationContext : NSObject {

	NSArray* _callStack;
	unsigned long long _threadId;

}

@property (copy,readonly) NSArray * callStack;                 //@synthesize callStack=_callStack - In the implementation block
@property (readonly) unsigned long long threadId;              //@synthesize threadId=_threadId - In the implementation block
+(id)currentContext;
+(unsigned long long)currentThreadId;
-(NSArray *)callStack;
-(id)initWithCallStack:(id)arg1 threadId:(unsigned long long)arg2 ;
-(unsigned long long)threadId;
@end

