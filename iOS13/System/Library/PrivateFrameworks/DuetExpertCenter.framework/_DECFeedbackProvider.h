/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _DECFeedbackProvider : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
+(void)setCategory:(unsigned long long)arg1 ;
+(void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3 ;
+(void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3 ;
-(id)init;
@end

