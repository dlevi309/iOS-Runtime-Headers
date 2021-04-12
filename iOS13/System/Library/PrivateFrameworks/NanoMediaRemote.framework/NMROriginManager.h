/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOrderedSet, NSDictionary, NSNumber, MPAVRoutingController, NSMutableSet, BKSProcessAssertion, NSArray, NMROrigin, NSString;

@interface NMROriginManager : NSObject <MPAVRoutingControllerDelegate> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSOrderedSet* _availableOrigins;
	NSDictionary* _availableOriginsByDeviceIdentifier;
	NSDictionary* _availableOriginsByOriginIdentifier;
	NSNumber* _activeOriginIdentifier;
	NSNumber* _localOriginIdentifier;
	MPAVRoutingController* _endpointRoutingController;
	NSMutableSet* _lastAvailableEndpointRouteUIDs;
	BKSProcessAssertion* _endpointDiscoveryProcessAssertion;
	CFArrayRef _availableOriginRefs;

}

@property (nonatomic,readonly) NSArray * availableOrigins; 
@property (nonatomic,readonly) NMROrigin * activeOrigin; 
@property (nonatomic,readonly) NMROrigin * localOrigin; 
@property (nonatomic,readonly) NMROrigin * companionOrigin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(NMROrigin *)localOrigin;
-(void)_handleDeviceInfoDidChangeNotification:(id)arg1 ;
-(NMROrigin *)companionOrigin;
-(NSArray *)availableOrigins;
-(id)_originFromTestOptions:(id)arg1 ;
-(id)originWithDeviceIdentifier:(id)arg1 ;
-(void)_handleMediaRemoteActiveOriginDidChangeNotification:(id)arg1 ;
-(void)_handleMediaRemoteAvailableOriginsDidChangeNotification:(id)arg1 ;
-(void)_updateMediaRemoteLocalOrigin;
-(void)_updateMediaRemoteAvailableAndActiveOrigins;
-(void)_onQueue_updateAvailableOrigins;
-(void)_onQueue_updateActiveOriginIdentifier:(id)arg1 ;
-(NMROrigin *)activeOrigin;
-(id)originWithUniqueIdentifier:(id)arg1 ;
-(BOOL)_isEndpointDiscoveryEnabled;
-(void)_setEndpointDiscoveryEnabled:(BOOL)arg1 ;
-(void)_forgetDiscoveredEndpoints;
@end

