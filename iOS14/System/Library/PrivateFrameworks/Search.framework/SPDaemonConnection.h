/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/


@protocol OS_dispatch_queue;
#import <Search/Search-Structs.h>
@class SPXPCConnection, NSObject, NSString;

@interface SPDaemonConnection : NSObject {

	SPXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSString* _daemonName;
	CFDictionaryRef _runningQueries;

}

@property (nonatomic,retain) NSString * daemonName;                       //@synthesize daemonName=_daemonName - In the implementation block
@property (assign,nonatomic) CFDictionaryRef runningQueries;              //@synthesize runningQueries=_runningQueries - In the implementation block
+(id)sharedBackgroundConnection;
+(id)sharedConnection;
-(void)activate:(/*^block*/id)arg1 ;
-(void)cancelQuery:(id)arg1 ;
-(id)connectionQueue;
-(void)preheat;
-(id)init;
-(id)initWithDaemonName:(id)arg1 qos:(unsigned)arg2 ;
-(void)requestParsecParametersWithReply:(/*^block*/id)arg1 ;
-(void)_sendMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)deactivate;
-(void)sendMessageForToken:(id)arg1 ;
-(void)activate;
-(void)sendSFFeedback:(id)arg1 type:(long long)arg2 queryId:(unsigned long long)arg3 ;
-(void)clearInput:(id)arg1 ;
-(void)_sendFeedbackMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)barrierOnXPC:(/*^block*/id)arg1 ;
-(CFDictionaryRef)runningQueries;
-(void)sendApps:(id)arg1 ;
-(void)_resetConnection;
-(void)setRunningQueries:(CFDictionaryRef)arg1 ;
-(void)retrieveFirstTimeExperienceTextWithReply:(/*^block*/id)arg1 ;
-(id)_connection;
-(void)setDaemonName:(NSString *)arg1 ;
-(NSString *)daemonName;
-(id)startQuery:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)dealloc;
@end

