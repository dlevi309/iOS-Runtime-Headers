/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDActiveSiriSessionInfoDelegate, HMDDataStreamBulkSendSession;
@class NSString;

@interface HMDActiveSiriSessionInfo : NSObject <HMFLogging> {

	BOOL _didBulkSendSessionFail;
	BOOL _didBulkSendSessionComplete;
	BOOL _didSiriSessionStart;
	BOOL _didSiriSessionStop;
	NSString* _identifier;
	id<HMDActiveSiriSessionInfoDelegate> _delegate;
	id<HMDDataStreamBulkSendSession> _bulkSendSession;

}

@property (assign,nonatomic,__weak) id<HMDActiveSiriSessionInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<HMDDataStreamBulkSendSession> bulkSendSession;                  //@synthesize bulkSendSession=_bulkSendSession - In the implementation block
@property (assign,nonatomic) BOOL didBulkSendSessionFail;                                       //@synthesize didBulkSendSessionFail=_didBulkSendSessionFail - In the implementation block
@property (assign,nonatomic) BOOL didBulkSendSessionComplete;                                   //@synthesize didBulkSendSessionComplete=_didBulkSendSessionComplete - In the implementation block
@property (assign,nonatomic) BOOL didSiriSessionStart;                                          //@synthesize didSiriSessionStart=_didSiriSessionStart - In the implementation block
@property (assign,nonatomic) BOOL didSiriSessionStop;                                           //@synthesize didSiriSessionStop=_didSiriSessionStop - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)description;
-(void)invalidate;
-(id<HMDActiveSiriSessionInfoDelegate>)delegate;
-(void)setDelegate:(id<HMDActiveSiriSessionInfoDelegate>)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(BOOL)didBulkSendSessionFail;
-(BOOL)didBulkSendSessionComplete;
-(BOOL)didSiriSessionStart;
-(BOOL)didSiriSessionStop;
-(id<HMDDataStreamBulkSendSession>)bulkSendSession;
-(void)setDidSiriSessionStart:(BOOL)arg1 ;
-(BOOL)isBulkSendActive;
-(void)_doReadAudioFrames;
-(void)setBulkSendSession:(id<HMDDataStreamBulkSendSession>)arg1 ;
-(BOOL)isSiriSessionActive;
-(void)_bulkSendDidFail;
-(BOOL)_handleFrame:(id)arg1 ;
-(void)_bulkSendDidComplete;
-(void)setDidBulkSendSessionFail:(BOOL)arg1 ;
-(void)setDidBulkSendSessionComplete:(BOOL)arg1 ;
-(void)markSiriPluginReady;
-(void)markSiriPluginStopped;
-(void)setActiveBulkSendSession:(id)arg1 ;
-(void)setDidSiriSessionStop:(BOOL)arg1 ;
@end

