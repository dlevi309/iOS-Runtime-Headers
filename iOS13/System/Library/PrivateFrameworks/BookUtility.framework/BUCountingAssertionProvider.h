/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

