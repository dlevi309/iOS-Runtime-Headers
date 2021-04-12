/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@interface FMNetworking.FMNPushNotificatonHandler : NSObject <APSConnectionDelegate> {

	 topic;
	 apsQueue;
	 pendingTopicTokenFutures;
	 topicAPSToken;
	 publicAPSToken;
	 _apsConnection;
	 $__lazy_storage_$_apsConnection;

}
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end

