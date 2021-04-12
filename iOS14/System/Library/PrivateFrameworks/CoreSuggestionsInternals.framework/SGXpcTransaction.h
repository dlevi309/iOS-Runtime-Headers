/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol OS_os_transaction, OS_dispatch_source;
#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSObject;

@interface SGXpcTransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	atomic_flag _done;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}
+(id)transactionWithName:(const void*)arg1 ;
-(id)init;
-(void)setTimeout:(double)arg1 ;
-(void)done;
-(BOOL)doneReturningWasDone;
-(id)initWithName:(const void*)arg1 ;
-(void)dealloc;
@end

