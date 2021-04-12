/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/SFXPCClient.h>
#import <libobjc.A.dylib/SFActivityAdvertiserClient.h>

@protocol SFActivityAdvertiserDelegate;
@class NSString;

@interface SFActivityAdvertiser : SFXPCClient <SFActivityAdvertiserClient> {

	id<SFActivityAdvertiserDelegate> _delegate;

}

@property (assign) id<SFActivityAdvertiserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAdvertiser;
-(id)init;
-(id<SFActivityAdvertiserDelegate>)delegate;
-(void)setDelegate:(id<SFActivityAdvertiserDelegate>)arg1 ;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)pairedDevicesChanged:(id)arg1 ;
-(void)activityPayloadForAdvertisementPayload:(id)arg1 command:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3 ;
-(void)fetchLoginIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchSFPeerDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchPeerForUUID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2 ;
@end

