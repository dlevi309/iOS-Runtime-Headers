/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFCore.framework/FMFCore
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@interface FMFCore.FMAPSConnectionHandler : NSObject <APSConnectionDelegate> {

	 delegate;
	 topic;
	 preferenceDomain;
	 connectionQueue;
	 connection;
	 topicAPSToken;
	 publicAPSToken;

}
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

