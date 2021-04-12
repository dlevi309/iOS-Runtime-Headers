/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreModelBackedObjectProtocol.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, HMDActionSet, NSDictionary, NSString;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * modelParentIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
-(id)init;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSUUID *)uuid;
-(NSUUID *)modelIdentifier;
-(id)logIdentifier;
-(Class)modelClass;
-(void)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)requiresDeviceUnlock;
-(void)setActionSet:(HMDActionSet *)arg1 ;
-(HMDActionSet *)actionSet;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)initWithUUID:(id)arg1 actionSet:(id)arg2 ;
-(NSString *)stateDump;
-(unsigned long long)entitlementsForNotification;
-(void)updateActionSetIfNil:(id)arg1 ;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
@end

