/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/

#import <FMF/FMFXPCInternalClientProtocol.h>

@class FMFSession, NSString;

@interface FMFSessionProxy : NSObject <FMFXPCInternalClientProtocol> {

	FMFSession* _session;

}

@property (assign,nonatomic,__weak) FMFSession * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FMFSession *)session;
-(void)setSession:(FMFSession *)arg1 ;
-(oneway void)didUpdateLocations:(id)arg1 ;
-(oneway void)setLocations:(id)arg1 ;
-(void)didReceiveFriendshipRequest:(id)arg1 ;
-(oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 ;
-(oneway void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(oneway void)didUpdateActiveDeviceList:(id)arg1 ;
-(oneway void)didUpdatePendingOffersForHandles:(id)arg1 ;
-(oneway void)didReceiveServerError:(id)arg1 ;
-(oneway void)didUpdateFences:(id)arg1 ;
-(oneway void)didUpdatePreferences:(id)arg1 ;
-(oneway void)networkReachabilityUpdated:(BOOL)arg1 ;
-(id)initWithFMFSession:(id)arg1 ;
-(oneway void)abPreferencesDidChange;
-(oneway void)abDidChange;
-(oneway void)modelDidLoad;
-(oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2 ;
-(oneway void)didAddFollowerHandle:(id)arg1 ;
-(oneway void)didRemoveFollowerHandle:(id)arg1 ;
-(oneway void)didStartFollowingHandle:(id)arg1 ;
-(oneway void)didStopFollowingHandle:(id)arg1 ;
-(oneway void)didUpdateHideFromFollowersStatus:(BOOL)arg1 ;
-(oneway void)didUpdateFavorites:(id)arg1 ;
-(oneway void)didUpdateFollowers:(id)arg1 ;
-(oneway void)didUpdateFollowing:(id)arg1 ;
@end

