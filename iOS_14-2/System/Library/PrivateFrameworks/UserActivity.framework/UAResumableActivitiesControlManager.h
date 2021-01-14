/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/


@class NSXPCConnection;

@interface UAResumableActivitiesControlManager : NSObject {

	int _pid;
	int _recordingPath;
	NSXPCConnection* connection;
	id _delegate;

}

@property (retain) NSXPCConnection * connection; 
@property (readonly) int serverPID; 
@property (assign) id delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign) int recordingPath;                         //@synthesize recordingPath=_recordingPath - In the implementation block
+(id)resumableActivitiesControlManager;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)synchronize;
-(NSXPCConnection *)connection;
-(id)debuggingInfo;
-(id)enabledUUIDs;
-(void)terminateServer;
-(id)matchingUUIDForString:(id)arg1 ;
-(id)advertisedItemUUID;
-(id)recentActions:(BOOL)arg1 ;
-(id)allUUIDsOfType:(unsigned long long)arg1 ;
-(id)currentAdvertisedItemUUID;
-(id)dynamicUserActivities;
-(id)simulatorStatus;
-(id)status:(id)arg1 options:(id)arg2 ;
-(void)fetchMoreAppSuggestions;
-(void)setDefault:(id)arg1 value:(id)arg2 ;
-(void)restartServer;
-(void)setDebugOption:(id)arg1 value:(id)arg2 ;
-(void)callWillSaveDelegate:(id)arg1 ;
-(void)injectBTLEItem:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 webPageURL:(id)arg6 remoteModel:(id)arg7 duration:(double)arg8 payloadDelay:(double)arg9 ;
-(void)callWillSaveDelegate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)callDidSaveDelegate:(id)arg1 ;
-(void)connectToRemote:(id)arg1 port:(long long)arg2 ;
-(void)setLocalReflect:(BOOL)arg1 ;
-(void)rendevous:(id)arg1 domain:(id)arg2 active:(BOOL)arg3 ;
-(void)peerDevices:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)getSysdiagnoseStringsIncludingPrivateData:(BOOL)arg1 ;
-(void)replayCommands:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)getAdvertisedBytes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)recordingPath;
-(void)setRecordingPath:(int)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(int)serverPID;
-(id)defaults:(BOOL)arg1 ;
-(id)status;
@end

