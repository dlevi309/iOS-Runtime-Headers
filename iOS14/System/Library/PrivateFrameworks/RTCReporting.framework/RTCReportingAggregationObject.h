/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
*/

#import <libobjc.A.dylib/ClientSessionReplyInterface.h>

@interface RTCReportingAggregationObject : NSObject <ClientSessionReplyInterface> {

	/*^block*/id _aggregationBlock;

}
-(id)initWithAggregationBlock:(/*^block*/id)arg1 ;
-(void)sendMessageToClient:(id)arg1 timestamp:(double)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 ;
-(void)dealloc;
@end

