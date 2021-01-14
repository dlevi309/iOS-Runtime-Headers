/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class FMFSession;

@interface IMDLocationSharingController : NSObject {

	FMFSession* _session;

}
+(id)sharedInstance;
+(void)addLocationShareItemToMatchingChats:(id)arg1 ;
+(void)_addLocationShareItemToMatchingChats:(id)arg1 handleID:(id)arg2 hasStoredItem:(BOOL)arg3 broadcastChanges:(BOOL)arg4 ;
-(id)init;
-(void)didStopAbilityToGetLocationForHandle:(id)arg1 ;
-(void)_forwardMappingPacket:(id)arg1 toID:(id)arg2 account:(id)arg3 ;
-(void)didStopSharingMyLocationWithHandle:(id)arg1 ;
-(void)didStartAbilityToGetLocationForHandle:(id)arg1 ;
-(void)didFailToHandleMappingPacket:(id)arg1 error:(id)arg2 ;
-(void)receivedIncomingLocationSharePacket:(id)arg1 ;
-(void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 account:(id)arg3 ;
-(void)didStartSharingMyLocationWithHandle:(id)arg1 ;
-(void)dealloc;
-(void)_generateLocationSharingItemWithHandleID:(id)arg1 direction:(long long)arg2 action:(long long)arg3 ;
@end

