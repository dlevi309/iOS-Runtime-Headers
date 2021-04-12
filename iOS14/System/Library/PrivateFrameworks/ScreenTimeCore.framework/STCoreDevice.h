/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/STSyncableSubObject.h>

@class NSSet, NSString, STUserDeviceState;

@interface STCoreDevice : NSManagedObject <STSyncableSubObject>

@property (nonatomic,retain) NSSet * userDeviceAddresses; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) short platform; 
@property (nonatomic,retain) STUserDeviceState * localUserDeviceState; 
@property (nonatomic,retain) NSSet * userDeviceStates; 
@property (nonatomic,retain) NSSet * usages; 
@property (readonly) id<STSerializableManagedObject> syncableRootObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchRequestForOrphanedDevices;
+(id)fetchOrCreateDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchOrCreateLocalDeviceInContext:(id)arg1 error:(id*)arg2 ;
-(id<STSerializableManagedObject>)syncableRootObject;
@end

