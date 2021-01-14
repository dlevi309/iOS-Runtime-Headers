/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _DECFeedbackProvider : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)setCategory:(unsigned long long)arg1 ;
+(id)sharedInstance;
+(void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3 ;
+(void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3 ;
-(id)init;
@end

