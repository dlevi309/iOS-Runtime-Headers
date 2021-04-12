/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)threadId;
-(NSArray *)callStack;
-(id)initWithCallStack:(id)arg1 threadId:(unsigned long long)arg2 ;
@end

