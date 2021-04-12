/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/_HMAccessoryProfile.h>

@protocol _HMNetworkRouterProfileDelegate;
@class NSSet;

@interface _HMNetworkRouterProfile : _HMAccessoryProfile {

	BOOL _satellite;
	unsigned long long _networkStatus;
	NSSet* _identifiersForSatelliteProfiles;
	id<_HMNetworkRouterProfileDelegate> _delegate;

}

@property (readonly) unsigned long long networkStatus;                                         //@synthesize networkStatus=_networkStatus - In the implementation block
@property (getter=isSatellite,readonly) BOOL satellite;                                        //@synthesize satellite=_satellite - In the implementation block
@property (readonly) NSSet * identifiersForSatelliteProfiles;                                  //@synthesize identifiersForSatelliteProfiles=_identifiersForSatelliteProfiles - In the implementation block
@property (assign,nonatomic,__weak) id<_HMNetworkRouterProfileDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)messageTargetUUID;
-(id)messageReceiveQueue;
-(id<_HMNetworkRouterProfileDelegate>)delegate;
-(unsigned long long)networkStatus;
-(BOOL)isSatellite;
-(void)_handleNetworkStatusUpdated:(id)arg1 ;
-(void)_handleSatelliteProfilesUpdated:(id)arg1 ;
-(NSSet *)identifiersForSatelliteProfiles;
-(void)setIdentifiersForSatelliteProfiles:(NSSet *)arg1 ;
-(void)setSatellite:(BOOL)arg1 ;
-(BOOL)checkForUpdatedIdentifiersForSatellites:(id)arg1 ;
-(BOOL)checkForUpdatedNetworkStatus:(unsigned long long)arg1 ;
-(void)__handleNetworkStatusUpdated:(id)arg1 ;
-(void)setDelegate:(id<_HMNetworkRouterProfileDelegate>)arg1 ;
-(id)messageDestination;
-(void)setNetworkStatus:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(void)_registerNotificationHandlers;
@end

