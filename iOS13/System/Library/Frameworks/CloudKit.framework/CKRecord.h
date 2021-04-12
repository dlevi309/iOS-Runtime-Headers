/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKRecordKeyValueSetting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordID, NSDate, CKReference, CKContainerID, CKEncryptedData, NSData, NSArray, NSURL, CKRecordValueStore, CKEncryptedRecordValueStore, NSDictionary, NSNumber, NSUUID, NSSet;

@interface CKRecord : NSObject <CKRecordKeyValueSetting, NSSecureCoding, NSCopying> {

	BOOL _hasUpdatedShare;
	BOOL _hasUpdatedParent;
	BOOL _trackChanges;
	BOOL _knownToServer;
	BOOL _wasCached;
	BOOL _serializeProtectionData;
	BOOL _wantsPublicSharingKey;
	BOOL _wantsChainPCS;
	BOOL _useLightweightPCS;
	NSString* _recordType;
	CKRecordID* _recordID;
	CKRecordID* _creatorUserRecordID;
	NSDate* _creationDate;
	CKRecordID* _lastModifiedUserRecordID;
	NSDate* _modificationDate;
	CKReference* _share;
	CKReference* _parent;
	CKContainerID* _containerID;
	CKReference* _previousShare;
	CKReference* _previousParent;
	CKEncryptedData* _chainPrivateKey;
	CKEncryptedData* _mutableEncryptedPSK;
	NSData* _chainProtectionInfo;
	NSData* _chainParentPublicKeyID;
	NSArray* _tombstonedPublicKeyIDs;
	NSURL* _mutableURL;
	CKRecordValueStore* _valueStore;
	CKEncryptedRecordValueStore* _encryptedValueStore;
	NSString* _modifiedByDevice;
	NSString* _etag;
	NSArray* _conflictLoserEtags;
	NSData* _zoneishKeyID;
	NSData* _protectionData;
	NSString* _previousProtectionEtag;
	NSString* _protectionEtag;
	NSString* _zoneProtectionEtag;
	NSString* _shareEtag;
	NSString* _routingKey;
	NSString* _baseToken;
	NSString* _displayedHostname;
	long long _permission;
	NSDictionary* _pluginFields;
	NSString* _previousProtectionEtagFromUnitTest;
	NSData* _pcsKeyID;

}

@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSNumber * version; 
@property (nonatomic,retain) NSString * basePunctuationGroup; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSArray * entries; 
@property (nonatomic,retain) NSString * replacement; 
@property (nonatomic,retain) NSString * rule; 
@property (nonatomic,retain) NSString * punctuation; 
@property (nonatomic,retain) NSUUID * groupUUID; 
@property (nonatomic,copy) CKContainerID * containerID;                                       //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) CKReference * share;                                               //@synthesize share=_share - In the implementation block
@property (nonatomic,retain) CKReference * previousShare;                                     //@synthesize previousShare=_previousShare - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedShare;                                            //@synthesize hasUpdatedShare=_hasUpdatedShare - In the implementation block
@property (nonatomic,retain) CKReference * previousParent;                                    //@synthesize previousParent=_previousParent - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedParent;                                           //@synthesize hasUpdatedParent=_hasUpdatedParent - In the implementation block
@property (nonatomic,retain) CKEncryptedData * chainPrivateKey;                               //@synthesize chainPrivateKey=_chainPrivateKey - In the implementation block
@property (nonatomic,retain) CKEncryptedData * mutableEncryptedPSK;                           //@synthesize mutableEncryptedPSK=_mutableEncryptedPSK - In the implementation block
@property (nonatomic,retain) NSData * chainProtectionInfo;                                    //@synthesize chainProtectionInfo=_chainProtectionInfo - In the implementation block
@property (nonatomic,retain) NSData * chainParentPublicKeyID;                                 //@synthesize chainParentPublicKeyID=_chainParentPublicKeyID - In the implementation block
@property (nonatomic,retain) NSArray * tombstonedPublicKeyIDs;                                //@synthesize tombstonedPublicKeyIDs=_tombstonedPublicKeyIDs - In the implementation block
@property (nonatomic,readonly) NSString * privateToken; 
@property (nonatomic,copy) NSURL * mutableURL;                                                //@synthesize mutableURL=_mutableURL - In the implementation block
@property (nonatomic,readonly) unsigned long long assetCount; 
@property (nonatomic,readonly) unsigned long long assetDiskSize; 
@property (nonatomic,copy) NSString * recordType;                                             //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) CKRecordID * recordID;                                             //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) CKRecordValueStore * valueStore;                                 //@synthesize valueStore=_valueStore - In the implementation block
@property (nonatomic,retain) CKEncryptedRecordValueStore * encryptedValueStore;               //@synthesize encryptedValueStore=_encryptedValueStore - In the implementation block
@property (nonatomic,readonly) NSDictionary * values; 
@property (nonatomic,readonly) NSDictionary * originalValues; 
@property (nonatomic,retain) NSSet * changedKeysSet; 
@property (assign,nonatomic) BOOL trackChanges;                                               //@synthesize trackChanges=_trackChanges - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                             //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                                         //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,copy) CKRecordID * creatorUserRecordID;                                  //@synthesize creatorUserRecordID=_creatorUserRecordID - In the implementation block
@property (nonatomic,copy) CKRecordID * lastModifiedUserRecordID;                             //@synthesize lastModifiedUserRecordID=_lastModifiedUserRecordID - In the implementation block
@property (nonatomic,copy) NSString * modifiedByDevice;                                       //@synthesize modifiedByDevice=_modifiedByDevice - In the implementation block
@property (nonatomic,retain) NSString * etag;                                                 //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) NSArray * conflictLoserEtags;                                    //@synthesize conflictLoserEtags=_conflictLoserEtags - In the implementation block
@property (assign,getter=isKnownToServer,nonatomic) BOOL knownToServer;                       //@synthesize knownToServer=_knownToServer - In the implementation block
@property (nonatomic,readonly) BOOL containsAssetValues; 
@property (nonatomic,readonly) BOOL containsPackageValues; 
@property (nonatomic,readonly) BOOL hasPropertiesRequiringEncryption; 
@property (nonatomic,readonly) BOOL hasModifiedPropertiesRequiringEncryption; 
@property (nonatomic,readonly) BOOL hasPropertiesRequiringDecryption; 
@property (nonatomic,readonly) BOOL hasEncryptedData; 
@property (nonatomic,readonly) BOOL hasModifiedEncryptedData; 
@property (assign,nonatomic) BOOL wasCached;                                                  //@synthesize wasCached=_wasCached - In the implementation block
@property (assign,nonatomic) BOOL serializeProtectionData;                                    //@synthesize serializeProtectionData=_serializeProtectionData - In the implementation block
@property (nonatomic,retain) NSData * zoneishKeyID;                                           //@synthesize zoneishKeyID=_zoneishKeyID - In the implementation block
@property (nonatomic,retain) NSData * protectionData;                                         //@synthesize protectionData=_protectionData - In the implementation block
@property (nonatomic,retain) NSString * previousProtectionEtag;                               //@synthesize previousProtectionEtag=_previousProtectionEtag - In the implementation block
@property (nonatomic,retain) NSString * protectionEtag;                                       //@synthesize protectionEtag=_protectionEtag - In the implementation block
@property (nonatomic,retain) NSString * zoneProtectionEtag;                                   //@synthesize zoneProtectionEtag=_zoneProtectionEtag - In the implementation block
@property (nonatomic,retain) NSString * shareEtag;                                            //@synthesize shareEtag=_shareEtag - In the implementation block
@property (nonatomic,retain) NSString * routingKey;                                           //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSString * baseToken;                                            //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,readonly) NSString * shortToken; 
@property (nonatomic,readonly) NSString * fullToken; 
@property (nonatomic,readonly) NSData * shortSharingTokenData; 
@property (nonatomic,readonly) NSData * shortSharingTokenHashData; 
@property (nonatomic,readonly) NSData * encryptedFullTokenData; 
@property (nonatomic,readonly) id<CKRecordKeyValueSetting> encryptedValuesByKey; 
@property (nonatomic,readonly) id<CKRecordKeyValueSetting> valuesByKey; 
@property (assign,nonatomic) BOOL wantsPublicSharingKey;                                      //@synthesize wantsPublicSharingKey=_wantsPublicSharingKey - In the implementation block
@property (nonatomic,readonly) NSData * encryptedPublicSharingKey; 
@property (nonatomic,retain) CKEncryptedData * mutableEncryptedPublicSharingKey; 
@property (nonatomic,retain) NSData * mutableEncryptedPublicSharingKeyData; 
@property (assign,nonatomic) BOOL wantsChainPCS;                                              //@synthesize wantsChainPCS=_wantsChainPCS - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSURL * uncachedURL; 
@property (nonatomic,copy) NSString * displayedHostname;                                      //@synthesize displayedHostname=_displayedHostname - In the implementation block
@property (assign,nonatomic) BOOL useLightweightPCS;                                          //@synthesize useLightweightPCS=_useLightweightPCS - In the implementation block
@property (nonatomic,readonly) unsigned long long size; 
@property (assign) long long permission;                                                      //@synthesize permission=_permission - In the implementation block
@property (nonatomic,readonly) BOOL hasChainPCS; 
@property (nonatomic,copy) NSDictionary * pluginFields;                                       //@synthesize pluginFields=_pluginFields - In the implementation block
@property (nonatomic,retain) NSString * previousProtectionEtagFromUnitTest;                   //@synthesize previousProtectionEtagFromUnitTest=_previousProtectionEtagFromUnitTest - In the implementation block
@property (nonatomic,retain) NSData * pcsKeyID;                                               //@synthesize pcsKeyID=_pcsKeyID - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordChangeTag; 
@property (nonatomic,copy) CKReference * parent;                                              //@synthesize parent=_parent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)accessInstanceVariablesDirectly;
+(id)fullTokenFromBaseToken:(id)arg1 privateToken:(id)arg2 ;
+(id)encryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2 ;
+(id)decryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2 ;
+(id)shareURLWithShortToken:(id)arg1 shareTitle:(id)arg2 shareType:(id)arg3 containerID:(id)arg4 displayedHostname:(id)arg5 ;
+(id)recordWithDuplicatedPackagesOfRecord:(id)arg1 error:(id*)arg2 ;
+(id)keyForListField:(id)arg1 withIndexRange:(NSRange)arg2 ;
+(id)keyForInsertingIntoListField:(id)arg1 atIndex:(long long)arg2 ;
+(id)keyForAppendingToListField:(id)arg1 ;
+(id)keyForFetchingItems:(unsigned long long)arg1 atEndOfListField:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setGroupUUID:(NSUUID *)arg1 ;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)setEntries:(NSArray *)arg1 ;
-(NSArray *)entries;
-(NSString *)replacement;
-(void)setReplacement:(NSString *)arg1 ;
-(NSUUID *)groupUUID;
-(NSString *)rule;
-(void)setRule:(NSString *)arg1 ;
-(NSString *)punctuation;
-(void)setPunctuation:(NSString *)arg1 ;
-(void)setBasePunctuationGroup:(NSString *)arg1 ;
-(NSString *)basePunctuationGroup;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKReference *)parent;
-(id)allKeys;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setParent:(CKReference *)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)values;
-(id)allValues;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)size;
-(id)valueForKey:(id)arg1 ;
-(void)setNilValueForKey:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)etag;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(NSString *)recordType;
-(CKRecordID *)recordID;
-(id<CKRecordKeyValueSetting>)encryptedValuesByKey;
-(id<CKRecordKeyValueSetting>)valuesByKey;
-(void)setCreationDate:(NSDate *)arg1 ;
-(id)initWithRecordType:(id)arg1 recordID:(id)arg2 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(CKReference *)share;
-(CKContainerID *)containerID;
-(void)setShare:(CKReference *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(void)setEtag:(NSString *)arg1 ;
-(NSString *)baseToken;
-(void)setBaseToken:(NSString *)arg1 ;
-(CKEncryptedRecordValueStore *)encryptedValueStore;
-(void)encodeSystemFieldsWithCoder:(id)arg1 ;
-(id)initWithRecordType:(id)arg1 zoneID:(id)arg2 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)pcsKeyID;
-(void)setPcsKeyID:(NSData *)arg1 ;
-(NSData *)zoneishKeyID;
-(void)setZoneishKeyID:(NSData *)arg1 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)setRecordType:(NSString *)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(void)claimPackagesWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setObjectNoValidate:(id)arg1 forKey:(id)arg2 ;
-(BOOL)trackChanges;
-(NSSet *)changedKeysSet;
-(id)changedKeys;
-(CKRecordValueStore *)valueStore;
-(NSDictionary *)originalValues;
-(void)setChangedKeysSet:(NSSet *)arg1 ;
-(void)setTrackChanges:(BOOL)arg1 ;
-(void)resetChangedKeys;
-(void)_validateRecordName:(id)arg1 ;
-(void)_validateRecordType:(id)arg1 ;
-(id)_initSkippingValidationWithRecordType:(id)arg1 recordID:(id)arg2 ;
-(void)setValueStore:(CKRecordValueStore *)arg1 ;
-(void)setEncryptedValueStore:(CKEncryptedRecordValueStore *)arg1 ;
-(CKRecordID *)creatorUserRecordID;
-(void)setCreatorUserRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)lastModifiedUserRecordID;
-(void)setLastModifiedUserRecordID:(CKRecordID *)arg1 ;
-(NSString *)modifiedByDevice;
-(void)setModifiedByDevice:(NSString *)arg1 ;
-(NSArray *)conflictLoserEtags;
-(void)setConflictLoserEtags:(NSArray *)arg1 ;
-(BOOL)isKnownToServer;
-(void)setKnownToServer:(BOOL)arg1 ;
-(BOOL)wasCached;
-(void)setWasCached:(BOOL)arg1 ;
-(BOOL)serializeProtectionData;
-(void)setSerializeProtectionData:(BOOL)arg1 ;
-(NSData *)protectionData;
-(void)setProtectionData:(NSData *)arg1 ;
-(NSString *)previousProtectionEtag;
-(void)setPreviousProtectionEtag:(NSString *)arg1 ;
-(NSString *)protectionEtag;
-(void)setProtectionEtag:(NSString *)arg1 ;
-(NSString *)zoneProtectionEtag;
-(void)setZoneProtectionEtag:(NSString *)arg1 ;
-(NSString *)shareEtag;
-(void)setShareEtag:(NSString *)arg1 ;
-(BOOL)useLightweightPCS;
-(void)setUseLightweightPCS:(BOOL)arg1 ;
-(BOOL)wantsPublicSharingKey;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(CKEncryptedData *)mutableEncryptedPSK;
-(void)setMutableEncryptedPSK:(CKEncryptedData *)arg1 ;
-(NSString *)displayedHostname;
-(void)setDisplayedHostname:(NSString *)arg1 ;
-(NSURL *)mutableURL;
-(void)setMutableURL:(NSURL *)arg1 ;
-(CKReference *)previousShare;
-(BOOL)hasUpdatedShare;
-(CKReference *)previousParent;
-(BOOL)hasUpdatedParent;
-(CKEncryptedData *)chainPrivateKey;
-(void)setChainPrivateKey:(CKEncryptedData *)arg1 ;
-(NSData *)chainProtectionInfo;
-(void)setChainProtectionInfo:(NSData *)arg1 ;
-(NSData *)chainParentPublicKeyID;
-(void)setChainParentPublicKeyID:(NSData *)arg1 ;
-(BOOL)wantsChainPCS;
-(void)setWantsChainPCS:(BOOL)arg1 ;
-(NSArray *)tombstonedPublicKeyIDs;
-(void)setTombstonedPublicKeyIDs:(NSArray *)arg1 ;
-(NSDictionary *)pluginFields;
-(void)setPluginFields:(NSDictionary *)arg1 ;
-(NSString *)privateToken;
-(NSString *)fullToken;
-(NSData *)shortSharingTokenData;
-(id)shortSharingToken;
-(NSString *)shortToken;
-(NSURL *)uncachedURL;
-(long long)permission;
-(NSString *)recordChangeTag;
-(unsigned long long)_sizeOfRecordID:(id)arg1 ;
-(unsigned long long)_sizeOfRecordValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasPropertiesRequiringEncryption;
-(id)_allStrings;
-(BOOL)_valueIsUsingCKEncryptedData:(id)arg1 ;
-(id)initWithRecordType:(id)arg1 ;
-(id)copyWithOriginalValues;
-(void)setMutableEncryptedPublicSharingKey:(CKEncryptedData *)arg1 ;
-(CKEncryptedData *)mutableEncryptedPublicSharingKey;
-(void)setMutableEncryptedPublicSharingKeyData:(NSData *)arg1 ;
-(NSData *)mutableEncryptedPublicSharingKeyData;
-(NSData *)encryptedPublicSharingKey;
-(NSData *)shortSharingTokenHashData;
-(NSData *)encryptedFullTokenData;
-(id)decryptFullToken:(id)arg1 ;
-(BOOL)canHostServerURLInfo;
-(BOOL)hasChainPCS;
-(id)allTokens;
-(BOOL)_checkProperties:(BOOL)arg1 encryptedStore:(BOOL)arg2 withValueCheckBlock:(/*^block*/id)arg3 ;
-(BOOL)containsAssetValues;
-(BOOL)containsPackageValues;
-(BOOL)hasModifiedPropertiesRequiringEncryption;
-(BOOL)hasPropertiesRequiringDecryption;
-(BOOL)hasEncryptedData;
-(BOOL)hasModifiedEncryptedData;
-(void)setParentReferenceFromRecord:(id)arg1 ;
-(void)setParentReferenceFromRecordID:(id)arg1 ;
-(unsigned long long)assetCount;
-(unsigned long long)assetDiskSize;
-(void)setStreamingAssetRequestOptions:(id)arg1 ;
-(void)releasePackages;
-(void)removePackages;
-(void)setPreviousShare:(CKReference *)arg1 ;
-(void)setHasUpdatedShare:(BOOL)arg1 ;
-(void)setPreviousParent:(CKReference *)arg1 ;
-(void)setHasUpdatedParent:(BOOL)arg1 ;
-(void)setWantsPublicSharingKey:(BOOL)arg1 ;
-(void)setPermission:(long long)arg1 ;
-(NSString *)previousProtectionEtagFromUnitTest;
-(void)setPreviousProtectionEtagFromUnitTest:(NSString *)arg1 ;
@end

