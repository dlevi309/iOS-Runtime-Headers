/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
*/

#import <StoreBookkeeperClient/SBCXPCService.h>
#import <libobjc.A.dylib/SBCPlaybackPositionServiceProtocol.h>

@class SBCPlaybackPositionDomain, NSString;

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol> {

	BOOL _usingPlaybackPositions;
	SBCPlaybackPositionDomain* _playbackPositionDomain;

}

@property (readonly) BOOL usingPlaybackPositions;                                               //@synthesize usingPlaybackPositions=_usingPlaybackPositions - In the implementation block
@property (nonatomic,readonly) SBCPlaybackPositionDomain * playbackPositionDomain;              //@synthesize playbackPositionDomain=_playbackPositionDomain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceForSyncDomain:(id)arg1 ;
+(id)serviceForValueDomain:(id)arg1 ;
+(id)_serviceForPlaybackPositionDomain:(id)arg1 ;
+(Class)XPCServiceInterfaceClass;
-(oneway void)beginAccessingPlaybackPositionEntities;
-(oneway void)endAccessingPlaybackPositionEntities;
-(SBCPlaybackPositionDomain *)playbackPositionDomain;
-(oneway void)persistPlaybackPositionEntity:(id)arg1 isCheckpoint:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)deletePlaybackPositionEntity:(id)arg1 ;
-(oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1 ;
-(oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)synchronizeImmediatelyWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithPlaybackPositionDomain:(id)arg1 ;
-(void)didConnectToService;
-(void)validateConnectionConfiguration;
-(oneway void)deletePlaybackPositionEntities;
-(BOOL)usingPlaybackPositions;
@end

