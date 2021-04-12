/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/SFRemoteHotspotClient.h>
#import <libobjc.A.dylib/SFCompanionXPCManagerObserver.h>

@protocol SFRemoteHotspotSessionDelegate, SFRemoteHotspotProtocol;
@class NSString;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver> {

	BOOL _browsing;
	id<SFRemoteHotspotSessionDelegate> _delegate;
	id<SFRemoteHotspotProtocol> _connectionProxy;

}

@property (assign) BOOL browsing;                                            //@synthesize browsing=_browsing - In the implementation block
@property (retain) id<SFRemoteHotspotProtocol> connectionProxy;              //@synthesize connectionProxy=_connectionProxy - In the implementation block
@property (__weak) id<SFRemoteHotspotSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SFRemoteHotspotSessionDelegate>)delegate;
-(void)setDelegate:(id<SFRemoteHotspotSessionDelegate>)arg1 ;
-(void)setBrowsing:(BOOL)arg1 ;
-(void)stopBrowsing;
-(BOOL)browsing;
-(void)setConnectionProxy:(id<SFRemoteHotspotProtocol>)arg1 ;
-(id<SFRemoteHotspotProtocol>)connectionProxy;
-(void)startBrowsing;
-(void)enableHotspotForDevice:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updatedFoundDeviceList:(id)arg1 ;
-(void)xpcManagerConnectionInterrupted;
-(void)enableRemoteHotspotForDevice:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

