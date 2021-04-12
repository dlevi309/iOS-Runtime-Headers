/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
*/

#import <SAObjects/SAMPSetQueue.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@protocol AFServiceHelper;
@class MPCAssistantAvailability, ICUserIdentity, NSNumber, NSString;

@interface MPAssistantSetQueue : SAMPSetQueue <AFServiceCommand> {

	id<AFServiceHelper> _serviceHelper;
	MPCAssistantAvailability* _availability;
	ICUserIdentity* _userIdentity;
	NSNumber* _privateListeningEnabled;
	NSString* _requestAceHash;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performWithCompletion:(/*^block*/id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
-(void)_performRadioStationSetQueueAsDryRun:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performMediaItemsSetQueueAsDryRun:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performStoreItemsSetQueueAsDryRun:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performMediaItemsSetQueueFromStoreIdentifiersAsDryRun:(BOOL)arg1 onlyPlayableItems:(BOOL)arg2 onlyLocalItems:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendQueue:(id)arg1 toDestination:(id)arg2 shouldResync:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_playMediaItems:(id)arg1 contextID:(id)arg2 dryRun:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_playAlbumFromMediaItems:(id)arg1 contextID:(id)arg2 dryRun:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

