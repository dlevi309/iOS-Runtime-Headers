/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

