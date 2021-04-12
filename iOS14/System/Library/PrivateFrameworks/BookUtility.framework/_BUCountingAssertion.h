/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)dealloc;
@end

