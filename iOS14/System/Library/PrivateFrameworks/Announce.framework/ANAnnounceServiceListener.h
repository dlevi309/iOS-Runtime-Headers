/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/ANAnnounceServiceInterface.h>
#import <libobjc.A.dylib/ANAnnounceServiceDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, ANAnnounceService, NSString;

@interface ANAnnounceServiceListener : NSObject <ANAnnounceServiceInterface, ANAnnounceServiceDelegate, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	ANAnnounceService* _announceService;

}

@property (nonatomic,readonly) NSXPCListener * listener;                         //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) ANAnnounceService * announceService;              //@synthesize announceService=_announceService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)prewarm:(/*^block*/id)arg1 ;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)sendRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)localParticipant:(/*^block*/id)arg1 ;
-(void)sendRequestLegacy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mockAnnouncement:(id)arg1 forHomeWithName:(id)arg2 playbackDeadline:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)receivedAnnouncementIDs:(/*^block*/id)arg1 ;
-(void)announcementForID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getReceivedAnnouncementsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getUnplayedAnnouncementsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)lastPlayedAnnouncementInfo:(/*^block*/id)arg1 ;
-(void)getScanningDeviceCandidates:(/*^block*/id)arg1 ;
-(void)contextFromAnnouncement:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)homeNamesForContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)isLocalDeviceInRoom:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)isAnnounceEnabledForAnyAccessoryInHome:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)isAnnounceEnabledForAnyAccessoryOrUserInHome:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_translateSentHandlerResponseAnnouncement:(id)arg1 error:(id)arg2 toRequestSentHandler:(/*^block*/id)arg3 ;
-(void)_sendRequestWithNames:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendRequestWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sendReplyRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleError:(long long)arg1 requestSentCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleError:(long long)arg1 sentCompletionHandler:(/*^block*/id)arg2 ;
-(ANAnnounceService *)announceService;
-(void)receivedAnnouncement:(id)arg1 ;
-(void)failedToDeliverAnnouncement:(id)arg1 error:(id)arg2 ;
@end

