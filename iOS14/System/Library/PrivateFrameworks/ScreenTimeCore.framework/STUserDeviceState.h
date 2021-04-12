/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUniquedManagedObject.h>
#import <libobjc.A.dylib/STSerializableMappedObject.h>
#import <libobjc.A.dylib/STUniquelySerializableManagedObject.h>

@class NSString, NSData, STCoreUser, STCoreDevice, NSSet, NSDate;

@interface STUserDeviceState : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (assign,nonatomic) BOOL screenTimeEnabled; 
@property (assign,nonatomic) BOOL cloudSyncEnabled; 
@property (assign,nonatomic) BOOL managementEnabled; 
@property (nonatomic,copy) NSString * passcodeOwner; 
@property (nonatomic,copy) NSString * coreDuetIdentifier; 
@property (nonatomic,copy) NSData * capabilitiesPlist; 
@property (nonatomic,copy) NSData * deviceInfoPlist; 
@property (nonatomic,retain) STCoreUser * localUser; 
@property (nonatomic,retain) STCoreDevice * localDevice; 
@property (nonatomic,retain) STCoreUser * user; 
@property (nonatomic,retain) STCoreDevice * device; 
@property (nonatomic,retain) NSSet * installedApps; 
@property (nonatomic,copy) NSDate * lastFamilyCheckinDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializableClassName;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOrCreateLocalUserDeviceStateInContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchRequestMatchingLocalUserDeviceState;
+(id)fetchLocalUserDeviceStateInContext:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentation;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)computeUniqueIdentifier;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
@end

