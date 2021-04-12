/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDProfile, HDDatabaseValueCache, NSNumber;

@interface HDDeviceManager : NSObject {

	HDProfile* _profile;
	HDDatabaseValueCache* _devicesByPersistentID;
	HDDatabaseValueCache* _deviceEntitiesByDevice;
	NSNumber* _noneDeviceID;

}

@property (nonatomic,retain) HDDatabaseValueCache * devicesByPersistentID;               //@synthesize devicesByPersistentID=_devicesByPersistentID - In the implementation block
@property (nonatomic,retain) HDDatabaseValueCache * deviceEntitiesByDevice;              //@synthesize deviceEntitiesByDevice=_deviceEntitiesByDevice - In the implementation block
@property (copy) NSNumber * noneDeviceID;                                                //@synthesize noneDeviceID=_noneDeviceID - In the implementation block
-(id)deviceEntityForDevice:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)allDevicesWithError:(id*)arg1 ;
-(id)devicesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3 ;
-(id)initWithProfile:(id)arg1 ;
-(id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3 ;
-(void)setDeviceEntitiesByDevice:(HDDatabaseValueCache *)arg1 ;
-(id)currentDeviceEntityWithError:(id*)arg1 ;
-(NSNumber *)noneDeviceID;
-(void)setNoneDeviceID:(NSNumber *)arg1 ;
-(HDDatabaseValueCache *)devicesByPersistentID;
-(HDDatabaseValueCache *)deviceEntitiesByDevice;
-(id)deviceForPersistentID:(id)arg1 error:(id*)arg2 ;
-(id)deviceEntityForNoDeviceWithError:(id*)arg1 ;
-(id)deviceEntitiesForDevice:(id)arg1 error:(id*)arg2 ;
-(void)setDevicesByPersistentID:(HDDatabaseValueCache *)arg1 ;
-(id)_noneDevice;
@end

