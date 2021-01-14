/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@class NSUUID, NSObject, HMFUnfairLock, NSSet, NSMutableSet, HMDAccountIdentifier, HMDDevice, NSArray, NSString, HMDAccountHandle, CNContact;

@interface HMDAccount : HMFObject <HMFLogging, HMFMerging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSFastEnumeration, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	HMFUnfairLock* _lock;
	NSSet* _handles;
	NSMutableSet* _devices;
	HMDAccountIdentifier* _identifier;
	id<HMDAccountManager> _manager;

}

@property (getter=isCurrentAccount,readonly) BOOL currentAccount; 
@property (readonly) HMDDevice * currentDevice; 
@property (copy,readonly) NSArray * identities; 
@property (__weak) id<HMDAccountManager> manager;                                //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSString * destination; 
@property (copy,readonly) HMDAccountHandle * primaryHandle; 
@property (copy,readonly) NSString * senderCorrelationIdentifier; 
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
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)accountWithHandle:(id)arg1 ;
+(id)accountWithDestination:(id)arg1 ;
-(BOOL)shouldCache;
-(BOOL)isAuthenticated;
-(void)setHandles:(NSArray *)arg1 ;
-(CNContact *)contact;
-(NSArray *)handles;
-(NSArray *)devices;
-(BOOL)mergeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HM10*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)addDevice:(id)arg1 ;
-(void)setManager:(id<HMDAccountManager>)arg1 ;
-(HMDDevice *)currentDevice;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSString *)senderCorrelationIdentifier;
-(id)logIdentifier;
-(NSString *)name;
-(id)attributeDescriptions;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(id<HMDAccountManager>)manager;
-(unsigned long long)hash;
-(Class)modelClass;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)modelIdentifier;
-(void)removeHandle:(id)arg1 ;
-(NSArray *)identities;
-(HMDAccountIdentifier *)identifier;
-(void)addHandle:(id)arg1 ;
-(id)initWithObjectModel:(id)arg1 ;
-(NSString *)destination;
-(BOOL)isEqual:(id)arg1 ;
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
-(id)accountHandleWithModelIdentifier:(id)arg1 ;
-(id)deviceWithModelIdentifier:(id)arg1 ;
-(id)currentDeviceModelsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
@end

