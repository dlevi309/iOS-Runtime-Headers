/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMerging.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDBackingStoreModelBackedObjectProtocol.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, HMDAccountManager;
@class NSUUID, NSObject, HMFUnfairLock, NSSet, NSMutableSet, HMDAccountIdentifier, NSArray, NSString, HMDAccountHandle, CNContact;

@interface HMDAccount : HMFObject <HMFLogging, HMFMerging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSFastEnumeration, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	HMFUnfairLock* _lock;
	NSSet* _handles;
	NSMutableSet* _devices;
	HMDAccountIdentifier* _identifier;
	id<HMDAccountManager> _manager;

}

@property (getter=isCurrentAccount,readonly) BOOL currentAccount; 
@property (copy,readonly) NSArray * identities; 
@property (__weak) id<HMDAccountManager> manager;                                //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSString * destination; 
@property (copy,readonly) HMDAccountHandle * primaryHandle; 
@property (getter=isAuthenticated,readonly) BOOL authenticated; 
@property (readonly) BOOL shouldCache; 
@property (copy,readonly) HMDAccountIdentifier * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name; 
@property (copy,readonly) CNContact * contact; 
@property (copy,readonly) NSArray * handles; 
@property (copy,readonly) NSArray * devices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * modelParentIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)accountWithHandle:(id)arg1 ;
+(id)accountWithDestination:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HM9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDAccountIdentifier *)identifier;
-(id<HMDAccountManager>)manager;
-(id)currentDevice;
-(NSArray *)identities;
-(NSString *)destination;
-(CNContact *)contact;
-(NSUUID *)modelIdentifier;
-(NSArray *)handles;
-(NSArray *)devices;
-(id)shortDescription;
-(void)setManager:(id<HMDAccountManager>)arg1 ;
-(BOOL)isAuthenticated;
-(BOOL)shouldCache;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(BOOL)mergeObject:(id)arg1 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(void)addHandle:(id)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(void)addDevice:(id)arg1 ;
-(Class)modelClass;
-(id)initWithObjectModel:(id)arg1 ;
-(void)removeDevice:(id)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)isCurrentAccount;
-(id)deviceForHandle:(id)arg1 ;
-(HMDAccountHandle *)primaryHandle;
-(id)initWithIdentifier:(id)arg1 handles:(id)arg2 devices:(id)arg3 ;
-(id)deviceForIdentifier:(id)arg1 ;
-(BOOL)isRelatedToAccount:(id)arg1 ;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)removeHandle:(id)arg1 ;
-(id)accountHandleWithModelIdentifier:(id)arg1 ;
-(id)deviceWithModelIdentifier:(id)arg1 ;
-(id)currentDeviceModelsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
@end

