/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol HMBMirrorProtocol;
@class HMFVersion, HMFUnfairLock, NSMapTable, HMBLocalZone;

@interface HMBModelContainer : HMFObject <NSMutableCopying, NSCopying> {

	HMFVersion* _legacyDataVersion;
	HMFVersion* _dataVersion;
	HMFUnfairLock* _propertyLock;
	NSMapTable* _queryFieldsCache;
	HMBLocalZone* _localZone;
	id<HMBMirrorProtocol> _mirror;
	NSMapTable* _classToNameTransform;
	NSMapTable* _nameToClassTransform;
	NSMapTable* _objectPropertyHashLookup;
	NSMapTable* _classReadOnlyVersionCache;
	NSMapTable* _classUnavailableVersionCache;

}

@property (nonatomic,readonly) HMFUnfairLock * propertyLock;                         //@synthesize propertyLock=_propertyLock - In the implementation block
@property (nonatomic,readonly) NSMapTable * queryFieldsCache;                        //@synthesize queryFieldsCache=_queryFieldsCache - In the implementation block
@property (nonatomic,__weak,readonly) HMBLocalZone * localZone;                      //@synthesize localZone=_localZone - In the implementation block
@property (nonatomic,__weak,readonly) id<HMBMirrorProtocol> mirror;                  //@synthesize mirror=_mirror - In the implementation block
@property (nonatomic,copy) NSMapTable * classToNameTransform;                        //@synthesize classToNameTransform=_classToNameTransform - In the implementation block
@property (nonatomic,copy) NSMapTable * nameToClassTransform;                        //@synthesize nameToClassTransform=_nameToClassTransform - In the implementation block
@property (nonatomic,retain) NSMapTable * objectPropertyHashLookup;                  //@synthesize objectPropertyHashLookup=_objectPropertyHashLookup - In the implementation block
@property (nonatomic,retain) NSMapTable * classReadOnlyVersionCache;                 //@synthesize classReadOnlyVersionCache=_classReadOnlyVersionCache - In the implementation block
@property (nonatomic,retain) NSMapTable * classUnavailableVersionCache;              //@synthesize classUnavailableVersionCache=_classUnavailableVersionCache - In the implementation block
@property (nonatomic,copy,readonly) HMFVersion * legacyDataVersion;                  //@synthesize legacyDataVersion=_legacyDataVersion - In the implementation block
@property (nonatomic,copy,readonly) HMFVersion * dataVersion;                        //@synthesize dataVersion=_dataVersion - In the implementation block
+(id)internalAllowedTypes;
+(id)allowedTypes;
+(id)encodeAsNSDictionary:(id)arg1 error:(id*)arg2 ;
+(id)encodeAsOPACK:(id)arg1 error:(id*)arg2 ;
+(id)decodeAsNSDictionary:(id)arg1 error:(id*)arg2 ;
+(id)decodeAsOPACK:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(HMFVersion *)dataVersion;
-(HMFUnfairLock *)propertyLock;
-(HMBLocalZone *)localZone;
-(unsigned long long)bestModelEncodingForStorageLocation:(unsigned long long)arg1 ;
-(id)dataFromModel:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 updatedModelIDs:(id)arg4 error:(id*)arg5 ;
-(id)schemaHashForModel:(id)arg1 ;
-(id<HMBMirrorProtocol>)mirror;
-(void)updateMirror:(id)arg1 ;
-(void)updateLocalZone:(id)arg1 ;
-(id)typeNameForModelClass:(Class)arg1 ;
-(id)modelFromData:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)readOnlyVersionsForModelClass:(Class)arg1 ;
-(id)unavailableVersionsForModelClass:(Class)arg1 ;
-(id)initWithDataVersion:(id)arg1 legacyDataVersion:(id)arg2 ;
-(NSMapTable *)classReadOnlyVersionCache;
-(NSMapTable *)classUnavailableVersionCache;
-(NSMapTable *)classToNameTransform;
-(NSMapTable *)nameToClassTransform;
-(Class)modelClassForTypeName:(id)arg1 ;
-(HMFVersion *)legacyDataVersion;
-(id)modelFromDictionary:(id)arg1 storageLocation:(unsigned long long)arg2 typeName:(id)arg3 error:(id*)arg4 ;
-(id)modelFromData:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 type:(id)arg4 error:(id*)arg5 ;
-(void)setClassToNameTransform:(NSMapTable *)arg1 ;
-(void)setNameToClassTransform:(NSMapTable *)arg1 ;
-(NSMapTable *)queryFieldsCache;
-(NSMapTable *)objectPropertyHashLookup;
-(void)setObjectPropertyHashLookup:(NSMapTable *)arg1 ;
-(void)setClassReadOnlyVersionCache:(NSMapTable *)arg1 ;
-(void)setClassUnavailableVersionCache:(NSMapTable *)arg1 ;
@end

