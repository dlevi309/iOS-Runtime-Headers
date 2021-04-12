/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@class HMDResidentMesh, HMDDevice, NSMutableSet, NSSet, NSMutableDictionary, NSDictionary, HMFTimer, NSString;

@interface HMDResidentMeshResidentStorage : HMFObject <HMFTimerDelegate> {

	HMDResidentMesh* _owner;
	HMDDevice* _resident;
	NSMutableSet* _accessoryUUIDs;
	NSSet* _lastSentAccessoryUUIDs;
	NSMutableDictionary* _metrics;
	NSDictionary* _lastSentMetrics;
	HMFTimer* _transmitTimer;
	NSMutableDictionary* _accessoryListWithLinkQuality;

}

@property (assign,nonatomic,__weak) HMDResidentMesh * owner;                                  //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic,__weak) HMDDevice * resident;                                     //@synthesize resident=_resident - In the implementation block
@property (nonatomic,retain) NSMutableSet * accessoryUUIDs;                                   //@synthesize accessoryUUIDs=_accessoryUUIDs - In the implementation block
@property (nonatomic,retain) NSSet * lastSentAccessoryUUIDs;                                  //@synthesize lastSentAccessoryUUIDs=_lastSentAccessoryUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metrics;                                   //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSDictionary * lastSentMetrics;                                  //@synthesize lastSentMetrics=_lastSentMetrics - In the implementation block
@property (nonatomic,retain) HMFTimer * transmitTimer;                                        //@synthesize transmitTimer=_transmitTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryListWithLinkQuality;              //@synthesize accessoryListWithLinkQuality=_accessoryListWithLinkQuality - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMetrics:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metrics;
-(void)timerDidFire:(id)arg1 ;
-(HMDResidentMesh *)owner;
-(void)setOwner:(HMDResidentMesh *)arg1 ;
-(NSMutableSet *)accessoryUUIDs;
-(void)setAccessoryUUIDs:(NSMutableSet *)arg1 ;
-(HMDDevice *)resident;
-(void)setResident:(HMDDevice *)arg1 ;
-(void)setAccessoryListWithLinkQuality:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)accessoryListWithLinkQuality;
-(void)_transmitStatus:(BOOL)arg1 ;
-(void)setTransmitTimer:(HMFTimer *)arg1 ;
-(BOOL)_addAccessoryWithLinkQuality:(id)arg1 toList:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_transmitAfter:(double)arg1 ;
-(NSSet *)lastSentAccessoryUUIDs;
-(NSDictionary *)lastSentMetrics;
-(HMFTimer *)transmitTimer;
-(BOOL)_residentDidChange;
-(void)setLastSentMetrics:(NSDictionary *)arg1 ;
-(void)setLastSentAccessoryUUIDs:(NSSet *)arg1 ;
-(id)_buildPayload;
-(id)initWithResident:(id)arg1 owner:(id)arg2 ;
-(void)_addAccessory:(id)arg1 activateTimer:(BOOL)arg2 ;
-(void)_removeAccessory:(id)arg1 activateTimer:(BOOL)arg2 ;
@end

