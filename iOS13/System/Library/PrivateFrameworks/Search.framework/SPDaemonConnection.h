/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedConnection;
+(id)sharedBackgroundConnection;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(id)connectionQueue;
-(void)activate;
-(void)deactivate;
-(void)preheat;
-(void)activate:(/*^block*/id)arg1 ;
-(void)cancelQuery:(id)arg1 ;
-(void)_resetConnection;
-(void)_sendMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)sendMessageForToken:(id)arg1 ;
-(void)_sendFeedbackMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithDaemonName:(id)arg1 qos:(unsigned)arg2 ;
-(id)startQuery:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)sendApps:(id)arg1 ;
-(void)clearInput:(id)arg1 ;
-(void)retrieveFirstTimeExperienceTextWithReply:(/*^block*/id)arg1 ;
-(void)requestParsecParametersWithReply:(/*^block*/id)arg1 ;
-(void)sendSFFeedback:(id)arg1 type:(long long)arg2 queryId:(unsigned long long)arg3 ;
-(void)barrierOnXPC:(/*^block*/id)arg1 ;
-(NSString *)daemonName;
-(void)setDaemonName:(NSString *)arg1 ;
-(CFDictionaryRef)runningQueries;
-(void)setRunningQueries:(CFDictionaryRef)arg1 ;
@end

