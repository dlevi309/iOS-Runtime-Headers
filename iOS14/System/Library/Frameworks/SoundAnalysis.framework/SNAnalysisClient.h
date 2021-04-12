/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableArray;

@interface SNAnalysisClient : NSObject {

	/*^block*/id _connectionToServerGenerator;
	NSXPCConnection* _xpcConnectionToServer;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _pendingInvalidationHandlers;

}
+(id)defaultClient;
+(id)newConnectionToMachServiceWithName:(id)arg1 lostConnectionHandler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(id)init;
-(id)initToConnectToMachServiceWithName:(id)arg1 queue:(id)arg2 ;
-(id)initWithConnectionGenerator:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_handleLostConnection;
-(id)_connectionToServerWithInvalidationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)_remoteResourceCoordinatorWithInvalidationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)_createRemoteSystemAudioAnalyzerWithInvalidationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)createRemoteSystemAudioAnalyzerWithInvalidationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

