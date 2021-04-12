/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSMapTable, HMFVersion, HMDHomeManager, HMDBackingStoreLocal, NSOperationQueue, NSString;

@interface HMDBackingStoreSingleton : HMFObject <HMFLogging> {

	NSMapTable* _objectLookup;
	NSMapTable* _classToNameTransform;
	NSMapTable* _nameToClassTransform;
	NSMapTable* _objectPropertyHashLookup;
	HMFVersion* _dataVersion;
	HMDHomeManager* _homeManager;
	HMDBackingStoreLocal* _local;
	NSOperationQueue* _queue;

}

@property (nonatomic,retain) HMFVersion * dataVersion;                             //@synthesize dataVersion=_dataVersion - In the implementation block
@property (nonatomic,retain) HMDBackingStoreLocal * local;                         //@synthesize local=_local - In the implementation block
@property (nonatomic,readonly) NSMapTable * objectLookup;                          //@synthesize objectLookup=_objectLookup - In the implementation block
@property (nonatomic,readonly) NSMapTable * classToNameTransform;                  //@synthesize classToNameTransform=_classToNameTransform - In the implementation block
@property (nonatomic,readonly) NSMapTable * nameToClassTransform;                  //@synthesize nameToClassTransform=_nameToClassTransform - In the implementation block
@property (nonatomic,readonly) NSMapTable * objectPropertyHashLookup;              //@synthesize objectPropertyHashLookup=_objectPropertyHashLookup - In the implementation block
@property (nonatomic,__weak,readonly) HMDHomeManager * homeManager;                //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;                           //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)start;
+(void)setClass:(Class)arg1 forClassName:(id)arg2 ;
+(id)logCategory;
+(void)resetClassMappings;
+(void)resetSchemaHash;
-(id)init;
-(NSOperationQueue *)queue;
-(HMDBackingStoreLocal *)local;
-(void)setLocal:(HMDBackingStoreLocal *)arg1 ;
-(HMFVersion *)dataVersion;
-(void)setDataVersion:(HMFVersion *)arg1 ;
-(id)logIdentifier;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(NSMapTable *)classToNameTransform;
-(NSMapTable *)nameToClassTransform;
-(NSMapTable *)objectPropertyHashLookup;
-(id)schemaHashForObject:(id)arg1 ;
-(id)flushBackingStore;
-(NSMapTable *)objectLookup;
-(id)resetBackingStore;
@end

