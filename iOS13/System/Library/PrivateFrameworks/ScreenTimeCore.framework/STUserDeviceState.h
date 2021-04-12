/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STUniquedManagedObject.h>
#import <libobjc.A.dylib/STUniquelySerializableManagedObject.h>

@class NSString, NSData, STCoreUser, STCoreDevice, NSSet;

@interface STUserDeviceState : STUniquedManagedObject <STUniquelySerializableManagedObject>

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchLocalUserDeviceStateInContext:(id)arg1 error:(id*)arg2 ;
+(id)fetchRequestMatchingLocalUserDeviceState;
+(id)fetchOrCreateLocalUserDeviceStateInContext:(id)arg1 error:(id*)arg2 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)computeUniqueIdentifier;
@end

