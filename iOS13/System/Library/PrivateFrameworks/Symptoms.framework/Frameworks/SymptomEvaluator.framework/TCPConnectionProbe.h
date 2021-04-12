/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

