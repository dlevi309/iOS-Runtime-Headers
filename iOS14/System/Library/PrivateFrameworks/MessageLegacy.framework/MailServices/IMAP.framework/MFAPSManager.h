/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>
#import <libobjc.A.dylib/MFDiagnosticsGenerator.h>
#import <libobjc.A.dylib/MFAPSManager.h>

@protocol MFAPSManager
@required
-(void)connect;
-(id)copyDiagnosticInformation;
-(void)stopWatchingForTopic:(id)arg1;
-(void)startWatchingForTopic:(id)arg1;
-(void)swapTopic:(id)arg1 forNewTopic:(id)arg2;
-(id)copyDeviceToken;
-(void)setLaunchMachServiceName:(id)arg1;

@end


@protocol OS_dispatch_queue;
@class NSObject, APSConnection, NSCountedSet, NSMutableSet, NSConditionLock, NSData, NSString;

@interface MFAPSManager : NSObject <APSConnectionDelegate, MFDiagnosticsGenerator, MFAPSManager> {

	NSObject*<OS_dispatch_queue> _queue;
	APSConnection* _pushService;
	NSCountedSet* _watchedTopics;
	NSMutableSet* _unwatchedTopics;
	NSConditionLock* _deviceTokenLock;
	NSData* _deviceToken;
	NSString* _launchMachServiceName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)apsEnvironment;
+(id)sharedManager;
+(Class)APSConnection;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(id)init;
-(void)connect;
-(id)copyDiagnosticInformation;
-(void)stopWatchingForTopic:(id)arg1 ;
-(void)startWatchingForTopic:(id)arg1 ;
-(void)swapTopic:(id)arg1 forNewTopic:(id)arg2 ;
-(id)copyDeviceToken;
-(void)_startAPS_nts;
-(id)enabledTopicsWithTopics:(id)arg1 ;
-(void)setLaunchMachServiceName:(id)arg1 ;
-(void)_stopAPS_nts;
@end

