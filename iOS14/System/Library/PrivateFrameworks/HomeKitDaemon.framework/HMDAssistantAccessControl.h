/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSMutableSet, HMDUser, NSObject, NSUUID, HMDAssistantAccessControlModel, NSArray, NSString;

@interface HMDAssistantAccessControl : HMFObject <HMFLogging, HMFObject, NSSecureCoding, HMDBackingStoreObjectProtocol> {

	id<HMFLocking> _lock;
	NSMutableSet* _accessories;
	BOOL _enabled;
	HMDUser* _user;
	unsigned long long _cachedHash;
	unsigned long long _options;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) unsigned long long cachedHash;                                   //@synthesize cachedHash=_cachedHash - In the implementation block
@property (copy,readonly) NSUUID * modelID; 
@property (copy,readonly) HMDAssistantAccessControlModel * model; 
@property (assign) unsigned long long options;                                        //@synthesize options=_options - In the implementation block
@property (__weak) HMDUser * user;                                                    //@synthesize user=_user - In the implementation block
@property (getter=isEnabled,readonly) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (copy,readonly) NSArray * accessories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(BOOL)isAccessorySupported:(id)arg1 ;
+(id)modelIDNamespace;
+(id)accessControlWithMessage:(id)arg1 user:(id)arg2 error:(id*)arg3 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)initWithUser:(id)arg1 ;
-(HMDAssistantAccessControlModel *)model;
-(NSUUID *)modelID;
-(void)configure;
-(id)init;
-(void)setUser:(HMDUser *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(id)logIdentifier;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)addAccessory:(id)arg1 ;
-(void)removeAccessory:(id)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(HMDUser *)user;
-(NSArray *)accessories;
-(NSString *)propertyDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(unsigned long long)cachedHash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(void)handleRemovedAccessory:(id)arg1 ;
-(id)initWithUser:(id)arg1 model:(id)arg2 ;
-(id)assistantAccessControlModelWithRemovedAccessories:(id)arg1 ;
-(id)initWithUser:(id)arg1 accessories:(id)arg2 enabled:(BOOL)arg3 ;
-(void)removeAccessoriesAddedByOldController:(id)arg1 ;
-(void)notifyClientOfUpdateWithMessage:(id)arg1 ;
@end

