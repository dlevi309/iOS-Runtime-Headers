/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
*/

#import <libobjc.A.dylib/ClientSessionReplyInterface.h>

@interface RTCReportingAggregationObject : NSObject <ClientSessionReplyInterface> {

	/*^block*/id _aggregationBlock;

}
-(void)dealloc;
-(void)sendMessageToClient:(id)arg1 timestamp:(double)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 ;
-(id)initWithAggregationBlock:(/*^block*/id)arg1 ;
@end

