/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


@protocol OS_dispatch_queue, BUCountingAssertionProviderDelegate;
@class NSObject;

@interface BUCountingAssertionProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _count;
	id<BUCountingAssertionProviderDelegate> _delegate;

}
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_beginAssertion;
-(BOOL)_endAssertion;
-(id)newAssertion;
@end

