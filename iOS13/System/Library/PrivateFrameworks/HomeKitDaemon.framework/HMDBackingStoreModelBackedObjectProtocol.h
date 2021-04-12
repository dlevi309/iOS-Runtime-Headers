/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class NSUUID;


@protocol HMDBackingStoreModelBackedObjectProtocol <NSObject>
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * modelParentIdentifier; 
@optional
-(BOOL)isBackingStorageEqual:(id)arg1;
-(id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3;

@required
-(NSUUID *)modelIdentifier;
-(Class)modelClass;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;

@end

