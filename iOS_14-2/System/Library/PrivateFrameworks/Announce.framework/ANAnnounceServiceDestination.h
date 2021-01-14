/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@class HMHome, NSArray;

@interface ANAnnounceServiceDestination : NSObject {

	HMHome* _home;
	NSArray* _accessories;
	NSArray* _users;
	NSArray* _devices;

}

@property (nonatomic,retain) HMHome * home;                      //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSArray * accessories;              //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,retain) NSArray * users;                    //@synthesize users=_users - In the implementation block
@property (nonatomic,retain) NSArray * devices;                  //@synthesize devices=_devices - In the implementation block
+(id)_destinationForHomePods:(id)arg1 rapportConnection:(id)arg2 ;
+(id)destinationForHome:(id)arg1 excludingRooms:(id)arg2 rapportConnection:(id)arg3 ;
+(id)relayDestinationForHome:(id)arg1 rooms:(id)arg2 rapportConnection:(id)arg3 error:(id*)arg4 ;
+(id)destinationForHome:(id)arg1 rapportConnection:(id)arg2 ;
+(id)destinationForRooms:(id)arg1 inHome:(id)arg2 rapportConnection:(id)arg3 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(id)init;
-(void)removeUser:(id)arg1 ;
-(BOOL)addAccessory:(id)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(NSArray *)accessories;
-(NSArray *)users;
-(void)setHome:(HMHome *)arg1 ;
-(void)setUsers:(NSArray *)arg1 ;
-(HMHome *)home;
-(id)idsIdentifiersForService:(id)arg1 ;
-(id)participantsWithService:(id)arg1 ;
-(BOOL)addDeviceWithID:(id)arg1 rapportConnection:(id)arg2 ;
-(BOOL)addUser:(id)arg1 inHome:(id)arg2 ;
-(void)removeDeviceWithID:(id)arg1 ;
@end

