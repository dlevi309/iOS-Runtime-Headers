/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMIPCore.framework/FMIPCore
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@interface FMIPCore.FMAPSConnectionHandler : NSObject <APSConnectionDelegate> {

	 delegate;
	 topic;
	 preferenceDomain;
	 connectionQueue;
	 connection;
	 topicAPSToken;
	 publicAPSToken;

}
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

