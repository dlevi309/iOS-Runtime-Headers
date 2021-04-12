/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/TestProbe.h>

@protocol OS_tcp_connection;
@class NSObject, NSDate;

@interface TCPConnectionProbe : TestProbe {

	NSObject*<OS_tcp_connection> _connection;
	BOOL _connected;
	BOOL _shouldSendReply;
	NSDate* _startTime;
	double _elapsedTime;

}
-(void)testConection:(id)arg1 port:(unsigned long long)arg2 timeout:(double)arg3 interfaceName:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)cancelTest:(/*^block*/id)arg1 ;
@end

