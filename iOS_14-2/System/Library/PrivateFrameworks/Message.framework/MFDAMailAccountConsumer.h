/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/DAActionConsumer.h>

@class NSConditionLock;

@interface MFDAMailAccountConsumer : NSObject <DAActionConsumer> {

	NSConditionLock* _doneCondition;
	BOOL _shouldRetryRequest;
	BOOL _alwaysReportFailures;

}
-(id)init;
-(void)setDone:(BOOL)arg1 ;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(BOOL)shouldRetryRequest;
-(id)initWithAlwaysReportFailures:(BOOL)arg1 ;
-(void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3 ;
-(BOOL)waitUntilDoneBeforeDate:(id)arg1 ;
-(void)waitUntilDone;
@end

