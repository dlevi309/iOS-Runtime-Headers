/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(id)deviceForPersistentID:(id)arg1 error:(id*)arg2 ;
-(id)deviceEntityForDevice:(id)arg1 error:(id*)arg2 ;
-(id)deviceEntityForNoDeviceWithError:(id*)arg1 ;
-(id)deviceEntitiesForDevice:(id)arg1 error:(id*)arg2 ;
-(id)deviceEntitiesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3 ;
-(id)currentDeviceEntityWithError:(id*)arg1 ;
-(NSNumber *)noneDeviceID;
-(id)_noneDevice;
-(void)setNoneDeviceID:(NSNumber *)arg1 ;
-(id)devicesWithProperty:(id)arg1 matchingValues:(id)arg2 error:(id*)arg3 ;
-(id)allDeviceEntitiesWithError:(id*)arg1 ;
-(HDDatabaseValueCache *)devicesByPersistentID;
-(void)setDevicesByPersistentID:(HDDatabaseValueCache *)arg1 ;
-(HDDatabaseValueCache *)deviceEntitiesByDevice;
-(void)setDeviceEntitiesByDevice:(HDDatabaseValueCache *)arg1 ;
@end

