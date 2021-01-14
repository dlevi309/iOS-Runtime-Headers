/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)activityPayloadForAdvertisementPayload:(id)arg1 command:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3 ;
-(id)init;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)fetchSFPeerDevicesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchLoginIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<SFActivityAdvertiserDelegate>)delegate;
-(id)remoteObjectInterface;
-(id)exportedInterface;
-(void)_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(id)machServiceName;
-(void)setDelegate:(id<SFActivityAdvertiserDelegate>)arg1 ;
-(void)fetchPeerForUUID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)pairedDevicesChanged:(id)arg1 ;
-(void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2 ;
@end

