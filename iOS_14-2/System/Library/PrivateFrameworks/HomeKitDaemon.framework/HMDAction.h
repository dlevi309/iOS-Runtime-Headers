/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreModelBackedObjectProtocol.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, HMDActionSet, NSDictionary, NSString, NSArray;

@interface HMDAction : HMFObject <NSSecureCoding, HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMFLogging> {

	NSUUID* _uuid;
	HMDActionSet* _actionSet;

}

@property (assign,nonatomic,__weak) HMDActionSet * actionSet;                        //@synthesize actionSet=_actionSet - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uuid;                                   //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long type; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * stateDump; 
@property (readonly) BOOL requiresDeviceUnlock; 
@property (readonly) unsigned long long entitlementsForNotification; 
@property (copy,readonly) NSArray * associatedAccessories; 
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * modelParentIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSUUID *)uuid;
-(void)setActionSet:(HMDActionSet *)arg1 ;
-(HMDActionSet *)actionSet;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(unsigned long long)type;
-(BOOL)requiresDeviceUnlock;
-(Class)modelClass;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)modelIdentifier;
-(NSArray *)associatedAccessories;
-(BOOL)isAssociatedWithAccessory:(id)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)initWithUUID:(id)arg1 actionSet:(id)arg2 ;
-(NSString *)stateDump;
-(unsigned long long)entitlementsForNotification;
-(void)executeWithSource:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)configureWithHome:(id)arg1 ;
-(void)updateActionSetIfNil:(id)arg1 ;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
@end

