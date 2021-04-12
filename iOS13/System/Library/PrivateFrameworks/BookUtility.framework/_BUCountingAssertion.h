/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/

#import <libobjc.A.dylib/BUAssertion.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _BUCountingAssertion : NSObject <BUAssertion> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end

