/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setServer:(HMDSiriRemoteInputServer *)arg1 ;
-(void)deactivate;
-(void)publish;
-(HMDSiriRemoteInputServer *)server;
-(void)sendMsg:(const char*)arg1 args:(id)arg2 ;
-(void)invalidate;
-(NSString *)identifier;
-(void)_stopStream;
-(id)initWithIdentifier:(id)arg1 ;
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
-(BOOL)activateWithAccessory:(id)arg1 ;
-(id)activeSessionToken;
@end

