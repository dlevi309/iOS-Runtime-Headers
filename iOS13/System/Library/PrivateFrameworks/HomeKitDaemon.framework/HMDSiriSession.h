/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDActiveSiriSessionInfoDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, HMDSiriRemoteInputServer, HMDActiveSiriSessionInfo;

@interface HMDSiriSession : NSObject <HMDActiveSiriSessionInfoDelegate, HMFLogging> {

	NSString* _identifier;
	HMDSiriRemoteInputServer* _server;
	HMDActiveSiriSessionInfo* _activeSessionInfo;

}

@property (assign,nonatomic,__weak) HMDSiriRemoteInputServer * server;                  //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) HMDActiveSiriSessionInfo * activeSessionInfo;              //@synthesize activeSessionInfo=_activeSessionInfo - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)siriSessionForUI;
-(void)invalidate;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)publish;
-(void)setServer:(HMDSiriRemoteInputServer *)arg1 ;
-(HMDSiriRemoteInputServer *)server;
-(BOOL)activate;
-(void)deactivate;
-(void)sendMsg:(const char*)arg1 args:(id)arg2 ;
-(void)_stopStream;
-(void)handleResetStream;
-(void)handleStartStream;
-(void)handleStopStream;
-(void)activeSiriSessionDidStop:(id)arg1 ;
-(void)activeSiriSession:(id)arg1 didCreateAudioFrame:(id)arg2 sequenceNumber:(id)arg3 gain:(id)arg4 ;
-(void)setActiveBulkSendSession:(id)arg1 ;
-(HMDActiveSiriSessionInfo *)activeSessionInfo;
-(BOOL)_startStream;
-(id)_createArgsDictionaryWithError:(id)arg1 ;
-(void)setActiveSessionInfo:(HMDActiveSiriSessionInfo *)arg1 ;
-(id)activeSessionToken;
@end

