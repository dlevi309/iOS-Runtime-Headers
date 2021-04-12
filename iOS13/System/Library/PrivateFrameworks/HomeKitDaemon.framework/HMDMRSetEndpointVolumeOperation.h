/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>

@protocol HMDMRSetEndpointVolumeOperationExternalObjectInterface;
@class HMFUnfairLock, NSNumber, NSArray, MPCAssistantDiscovery, NSString;

@interface HMDMRSetEndpointVolumeOperation : HMFOperation <HMFObject> {

	HMFUnfairLock* _lock;
	NSNumber* _volume;
	NSArray* _routeIDs;
	MPCAssistantDiscovery* _discovery;
	id<HMDMRSetEndpointVolumeOperationExternalObjectInterface> _externalObjectInterface;

}

@property (nonatomic,retain) MPCAssistantDiscovery * discovery;                                                               //@synthesize discovery=_discovery - In the implementation block
@property (nonatomic,retain) id<HMDMRSetEndpointVolumeOperationExternalObjectInterface> externalObjectInterface;              //@synthesize externalObjectInterface=_externalObjectInterface - In the implementation block
@property (nonatomic,readonly) NSNumber * volume;                                                                             //@synthesize volume=_volume - In the implementation block
@property (nonatomic,copy,readonly) NSArray * routeIDs;                                                                       //@synthesize routeIDs=_routeIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)shortDescription;
-(NSString *)description;
-(void)main;
-(NSString *)shortDescription;
-(NSNumber *)volume;
-(NSString *)privateDescription;
-(MPCAssistantDiscovery *)discovery;
-(void)setDiscovery:(MPCAssistantDiscovery *)arg1 ;
-(NSArray *)attributeDescriptions;
-(BOOL)cancelOnSetup;
-(id<HMDMRSetEndpointVolumeOperationExternalObjectInterface>)externalObjectInterface;
-(NSArray *)routeIDs;
-(id)initWithRouteIDs:(id)arg1 volume:(id)arg2 ;
-(void)setExternalObjectInterface:(id<HMDMRSetEndpointVolumeOperationExternalObjectInterface>)arg1 ;
@end

