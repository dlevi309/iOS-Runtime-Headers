/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecord.h>

@class FSNode, NSString, LSPropertyList, NSURL, NSDictionary, NSArray, _LSLocalizedStringRecord, _LSLazyPropertyList, LSBundleProxy, NSDate, NSSet;

@interface LSBundleRecord : LSRecord {

	SCD_Struct_LS15* _auditToken;
	id _cachedDataContainerURL;
	FSNode* _node;
	NSString* _bundleIdentifier;

}

@property (readonly) LSPropertyList * infoDictionary; 
@property (readonly) LSPropertyList * entitlements; 
@property (readonly) NSURL * dataContainerURL; 
@property (readonly) NSDictionary * groupContainerURLs; 
@property (readonly) NSString * localizedName; 
@property (readonly) NSString * localizedShortName; 
@property (readonly) NSString * signerOrganization; 
@property (getter=isProfileValidated,readonly) BOOL profileValidated; 
@property (getter=isUPPValidated,readonly) BOOL UPPValidated; 
@property (getter=isFreeProfileValidated,readonly) BOOL freeProfileValidated; 
@property (readonly) NSArray * managedPersonas; 
@property (readonly) NSArray * UIBackgroundModes; 
@property (readonly) NSString * accentColorName; 
@property (readonly) NSArray * WKBackgroundModes; 
@property (readonly) BOOL supportsNowPlaying; 
@property (readonly) NSDictionary * intentDefinitionURLs; 
@property (readonly) NSArray * supportedIntents; 
@property (readonly) NSArray * intentsRestrictedWhileLocked; 
@property (readonly) NSArray * intentsRestrictedWhileProtectedDataUnavailable; 
@property (readonly) NSArray * supportedIntentMediaCategories; 
@property (readonly) NSString * _fallbackLocalizedName; 
@property (readonly) _LSLocalizedStringRecord * _localizedName; 
@property (readonly) _LSLocalizedStringRecord * _localizedShortName; 
@property (readonly) _LSLocalizedStringRecord * _localizedMicrophoneUsageDescription; 
@property (readonly) _LSLazyPropertyList * _rawGroupContainerURLs; 
@property (nonatomic,readonly) FSNode * _node;                                                     //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) const SCD_Struct_LS15* _auditToken; 
@property (nonatomic,readonly) LSVersionNumber _bundleVersion; 
@property (nonatomic,readonly) LSBundleRecord * _realRecord; 
@property (readonly) BOOL _usesSystemPersona; 
@property (readonly) BOOL _containerized; 
@property (readonly) unsigned long long _containerClass; 
@property (readonly) NSURL * _dataContainerURLFromDatabase; 
@property (readonly) unsigned char _profileValidationState; 
@property (nonatomic,readonly) LSBundleProxy * compatibilityObject; 
@property (readonly) NSString * bundleIdentifier;                                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSString * applicationIdentifier; 
@property (readonly) NSURL * URL; 
@property (readonly) NSURL * executableURL; 
@property (readonly) NSString * bundleVersion; 
@property (readonly) char developerType; 
@property (readonly) NSDate * registrationDate; 
@property (readonly) NSArray * machOUUIDs; 
@property (readonly) NSString * SDKVersion; 
@property (readonly) unsigned platform; 
@property (readonly) NSSet * claimRecords; 
@property (readonly) NSSet * exportedTypeRecords; 
@property (readonly) NSSet * importedTypeRecords; 
@property (readonly) NSSet * serviceRecords; 
+(BOOL)supportsSecureCoding;
+(id)_bundleRecordForAuditToken:(SCD_Struct_LS15)arg1 checkNSBundleMainBundle:(unsigned char)arg2 error:(id*)arg3 ;
+(id)bundleRecordWithBundleIdentifier:(id)arg1 allowPlaceholder:(BOOL)arg2 error:(id*)arg3 ;
+(id)bundleRecordWithApplicationIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)coreTypesBundleRecord;
+(id)bundleRecordForAuditToken:(SCD_Struct_LS15)arg1 error:(id*)arg2 ;
+(id)bundleRecordForCurrentProcess;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(FSNode *)_node;
-(LSPropertyList *)infoDictionary;
-(LSPropertyList *)entitlements;
-(NSString *)localizedShortName;
-(NSString *)SDKVersion;
-(NSSet *)claimRecords;
-(NSURL *)dataContainerURL;
-(NSArray *)machOUUIDs;
-(LSBundleRecord *)_realRecord;
-(NSString *)localizedName;
-(id)exportedTypeRecordsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(id)intentDefinitionURLsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(LSVersionNumber)_bundleVersion;
-(id)_localizedMicrophoneUsageDescriptionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(char)developerType;
-(unsigned)platform;
-(id)importedTypeRecordsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(BOOL)isUPPValidated;
-(id)_localizedShortNameWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(id)_initWithContext:(LSContext*)arg1 persistentIdentifierData:(const LSPersistentIdentifierData*)arg2 length:(unsigned long long)arg3 ;
-(id)_initWithNode:(id)arg1 bundleIdentifier:(id)arg2 context:(LSContext*)arg3 tableID:(unsigned)arg4 unitID:(unsigned)arg5 bundleBaseData:(const LSBundleBaseData*)arg6 error:(id*)arg7 ;
-(id)_dataContainerURLFromDatabaseWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(NSArray *)intentsRestrictedWhileProtectedDataUnavailable;
-(id)claimRecordsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(NSArray *)managedPersonas;
-(id)signerOrganizationWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(id)entitlementsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(id)_rawGroupContainerURLsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(unsigned char)_profileValidationStateWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(unsigned long long)_containerClass;
-(id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2 ;
-(NSString *)accentColorName;
-(id)_localizedShort:(BOOL)arg1 nameWithContext:(LSContext*)arg2 tableID:(unsigned)arg3 unitID:(unsigned)arg4 bundleData:(const LSBundleBaseData*)arg5 ;
-(id)exported:(BOOL)arg1 typesWithContext:(LSContext*)arg2 tableID:(unsigned)arg3 unitID:(unsigned)arg4 unitBytes:(const LSBundleData*)arg5 ;
-(void)_LSRecord_resolve__profileValidationState;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(void)_LSRecord_resolve_registrationDate;
-(LSVersionNumber)_bundleVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(void)_LSRecord_resolve__localizedMicrophoneUsageDescription;
-(NSDate *)registrationDate;
-(id)_localizedNameWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(BOOL)_containerized;
-(id)infoDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(void)_LSRecord_resolve__bundleVersion;
-(NSDictionary *)intentDefinitionURLs;
-(NSURL *)_dataContainerURLFromDatabase;
-(_LSLocalizedStringRecord *)_localizedMicrophoneUsageDescription;
-(id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 ;
-(void)_LSRecord_resolve_signerOrganization;
-(id)executableURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(id)machOUUIDsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(id)SDKVersionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(void)_LSRecord_resolve__dataContainerURLFromDatabase;
-(void)_LSRecord_resolve__rawGroupContainerURLs;
-(BOOL)isFreeProfileValidated;
-(char)developerTypeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleData*)arg4 ;
-(void)_LSRecord_resolve__localizedName;
-(id)registrationDateWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(id)localizedNameWithPreferredLocalizations:(id)arg1 ;
-(NSArray *)UIBackgroundModes;
-(void)_LSRecord_resolve_infoDictionary;
-(NSDictionary *)groupContainerURLs;
-(NSSet *)serviceRecords;
-(NSArray *)WKBackgroundModes;
-(BOOL)isProfileValidated;
-(void)_LSRecord_resolve_exportedTypeRecords;
-(BOOL)_usesSystemPersona;
-(NSArray *)intentsRestrictedWhileLocked;
-(unsigned)platformWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSBundleBaseData*)arg4 ;
-(id)localizedShortNameWithPreferredLocalizations:(id)arg1 ;
-(void)_LSRecord_resolve_importedTypeRecords;
-(void)_LSRecord_resolve__localizedShortName;
-(void)_LSRecord_resolve_executableURL;
-(void)_LSRecord_resolve_developerType;
-(void)_LSRecord_resolve_platform;
-(void)_LSRecord_resolve_machOUUIDs;
-(void)_LSRecord_resolve_SDKVersion;
-(void)_LSRecord_resolve_intentDefinitionURLs;
-(BOOL)supportsNowPlaying;
-(NSSet *)exportedTypeRecords;
-(_LSLazyPropertyList *)_rawGroupContainerURLs;
-(NSString *)_fallbackLocalizedName;
-(NSArray *)supportedIntentMediaCategories;
-(NSSet *)importedTypeRecords;
-(NSString *)signerOrganization;
-(void)_LSRecord_resolve_claimRecords;
-(void)_LSRecord_resolve_entitlements;
-(unsigned char)_profileValidationState;
-(id)_cachedDataContainerURL;
-(const SCD_Struct_LS15*)_auditToken;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)debugDescription;
-(NSString *)bundleVersion;
-(NSString *)applicationIdentifier;
-(id)description;
-(_LSLocalizedStringRecord *)_localizedName;
-(NSURL *)URL;
-(unsigned long long)hash;
-(NSURL *)executableURL;
-(id)initWithCoder:(id)arg1 ;
-(_LSLocalizedStringRecord *)_localizedShortName;
-(NSArray *)supportedIntents;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

