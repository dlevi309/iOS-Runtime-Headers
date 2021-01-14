/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/VTPeerRemoteConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, VTPeerRemoteConnection, NSString;

@interface VTPhraseSpotterControlConnection : NSObject <VTPeerRemoteConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	VTPeerRemoteConnection* _peerConnection;
	BOOL _remotePhraseSpotterEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)remoteConnection:(id)arg1 handleMessageType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateRemotePhraseSpotterEnabled:(BOOL)arg1 ;
-(void)notifyRemoteOfEarlyDetect;
-(void)notifyRemoteOfTriggerEvent;
-(void)notifyRemoteOfDismissal;
@end

