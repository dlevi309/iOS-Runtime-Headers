/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/VTPeerRemoteConnectionDelegate.h>

@protocol OS_dispatch_queue, VTPhraseSpotterControlRemoteDelegate;
@class NSObject, VTPeerRemoteConnection, NSString;

@interface VTPhraseSpotterControlRemote : NSObject <VTPeerRemoteConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	VTPeerRemoteConnection* _peerConnection;
	id<VTPhraseSpotterControlRemoteDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(void)remoteConnection:(id)arg1 handleMessageType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
@end

