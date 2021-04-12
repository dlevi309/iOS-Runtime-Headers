/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@class _LSDatabase, NSError;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct LSContext {
	_LSDatabase* db;
} LSContext;

typedef struct LSVersionNumber {
	unsigned char _opaque[32];
} LSVersionNumber;

typedef struct LSBundleData {
	unsigned _clas;
	unsigned long long _bundleFlags;
	unsigned _plistContentFlags;
	unsigned _itemFlags;
	unsigned char _iconFlags;
	unsigned short _archFlags;
	unsigned platform;
	unsigned _hfsType;
	int _mtime;
	int _rtime;
	LSVersionNumber _version;
	LSVersionNumber _minSystemVersion;
	LSVersionNumber _maxSystemVersion;
	LSVersionNumber _execSDKVersion;
	unsigned appStoreToolsBuildVersion;
	unsigned machOUUIDs;
	unsigned long long sequenceNumber;
	unsigned long long compatibilityState;
	unsigned long long itemID;
	unsigned deviceFamilies;
	unsigned teamID;
	unsigned identifier;
	unsigned exactIdentifier;
	unsigned name;
	unsigned displayName;
	unsigned counterpartIdentifiers;
	unsigned filename;
	unsigned bundleVersion;
	unsigned shortVersionString;
	unsigned installType;
	unsigned long long installFailureReason;
	unsigned signerIdentity;
	unsigned codeInfoIdentifier;
	unsigned signerOrganization;
	unsigned appType;
	unsigned long long staticDiskUsage;
	unsigned long long purchaserDSID;
	unsigned long long downloaderDSID;
	unsigned long long familyID;
	unsigned vendorName;
	unsigned itemName;
	unsigned long long storefront;
	unsigned long long versionIdentifier;
	unsigned sourceAppIdentifier;
	unsigned appVariant;
	unsigned long long ratingRank;
	unsigned ratingLabel;
	unsigned long long genreID;
	unsigned genre;
	unsigned primaryIconName;
	unsigned iconsDict;
	unsigned iconFileNames;
	unsigned execPath;
	unsigned libraryPath;
	unsigned libraryItems;
	unsigned claims;
	unsigned types;
	unsigned plugins;
	unsigned extensionPoints;
	unsigned activityTypes;
	unsigned schemesWhitelist;
	unsigned bgPermittedIDs;
	unsigned alias;
	unsigned appContainerAlias;
	unsigned dataContainerAlias;
	unsigned container;
	unsigned char revision;
	unsigned char retries;
	unsigned char containingDirectoryClass;
	unsigned char _reserved4;
	unsigned plistRarities;
	unsigned commonPlistEntries;
	unsigned entitlements;
	unsigned groupContainers;
	unsigned sandboxEnvironmentVariables;
	unsigned siriActionDefinitionURLs;
	unsigned localizedDisplayName;
	unsigned localizedShortDisplayName;
	unsigned localizedNameWithContext[1];
	unsigned managedPersonas;
	unsigned _reserved5;
} LSBundleData;

typedef struct _NSZone* NSZoneRef;

typedef struct _cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > {
	AB __a_value;
} cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> >;

typedef struct atomic_flag {
	cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > __a_;
} atomic_flag;

typedef struct Context {
	LSContext _contextPointer;
	LSContext _contextStorage;
	unsigned char _created;
	NSError* _error;
} Context;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_LS8;

typedef struct _compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > {
	unsigned __value_;
} compressed_pair<unsigned int *, std::__1::allocator<unsigned int> >;

typedef struct vector<unsigned int, std::__1::allocator<unsigned int> > {
	unsigned __begin_;
	unsigned __end_;
	compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > __end_cap_;
} vector<unsigned int, std::__1::allocator<unsigned int> >;

typedef struct {
	unsigned val[8];
} SCD_Struct_LS11;

typedef struct LSBinding {
	unsigned bundle;
	LSBundleData bundleData;
	unsigned claim;
	/*function pointer*/void* claimData;
	id userInfo;
	id reason;
	 NSString;
} LSBinding;

typedef struct __CSStore* CSStoreRef;

typedef struct CSMapCallbacks {
	/*function pointer*/void* retainKey;
	/*function pointer*/void* releaseKey;
	/*function pointer*/void* getKeyHash;
	/*function pointer*/void* keyMatchesData;
	/*function pointer*/void* retainValue;
	/*function pointer*/void* releaseValue;
} CSMapCallbacks;

typedef struct CSMap {
	unsigned table;
	CSMapCallbacks cb;
	CSMapContext context;
	os_unfair_lock_s _lock;
	unsigned _generation;
	_CSMapHeader _header;
	unsigned _keys;
	unsigned _values;
} CSMap;

typedef struct {
	CSMap map;
} SCD_Struct_LS16;

typedef struct {
	CSMap map;
	unsigned bindingClass;
	unsigned char isCaseInsensitive;
} SCD_Struct_LS17;

typedef struct LSSchema {
	unsigned headerTable;
	unsigned bundleTable;
	unsigned claimTable;
	unsigned serviceTable;
	unsigned utypeTable;
	SCD_Struct_LS16 bindableKeyMap;
	SCD_Struct_LS17 bindingMaps[12];
	unsigned handlerPrefTable;
	unsigned containerTable;
	unsigned aliasTable;
	unsigned pluginTable;
	unsigned extensionPointTable;
	unsigned bindingListTable;
	unsigned propertyListTable;
	unsigned localizedStringTable;
	unsigned canonicalStringTable;
	_LSSchemaCache _cache;
} LSSchema;

typedef struct __CFBundle* CFBundleRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	int field5;
	unsigned field6;
	unsigned field7;
	unsigned field8[8];
	unsigned field9;
	unsigned field10;
	unsigned field11;
	unsigned field12;
	unsigned field13;
	unsigned field14;
	unsigned field15;
} SCD_Struct_UT22;

typedef struct _compressed_pair<const LSExtensionPointData **, std::__1::allocator<const LSExtensionPointData *> > {
	LSExtensionPointData __value_;
} compressed_pair<const LSExtensionPointData **, std::__1::allocator<const LSExtensionPointData *> >;

typedef struct vector<const LSExtensionPointData *, std::__1::allocator<const LSExtensionPointData *> > {
	LSExtensionPointData __begin_;
	LSExtensionPointData __end_;
	compressed_pair<const LSExtensionPointData **, std::__1::allocator<const LSExtensionPointData *> > __end_cap_;
} vector<const LSExtensionPointData *, std::__1::allocator<const LSExtensionPointData *> >;

