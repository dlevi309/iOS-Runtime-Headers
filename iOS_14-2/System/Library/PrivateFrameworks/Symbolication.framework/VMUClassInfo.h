/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSMutableArray;

@interface VMUClassInfo : NSObject {

	unsigned long long _remoteIsa;
	unsigned _remotePointerSize;
	unsigned _ivarCount;
	unsigned _superclassOffset;
	unsigned _instanceSize;
	unsigned _ro_flags;
	unsigned _rw_flags;
	unsigned _defaultScanType;
	unsigned _remoteType;
	id* _localIvarList;
	NSString* _remoteClassName;
	NSString* _displayName;
	NSString* _remoteBinaryPath;
	VMUClassInfo* _superclassLayout;
	VMUClassInfo* _genericLayout;
	NSMutableArray* _variantEvaluators;
	NSMutableArray* _variantActions;
	const char* _weakLayout;
	const char* _strongLayout;
	char _hasSpecificLayout;
	char _hasVariantLayout;
	BOOL _usesSwiftRefcounting;

}

@property (nonatomic,readonly) unsigned defaultScanType; 
@property (nonatomic,readonly) BOOL hasSpecificLayout; 
@property (nonatomic,readonly) BOOL hasVariantLayout; 
@property (nonatomic,readonly) unsigned pointerSize;                         //@synthesize remotePointerSize=_remotePointerSize - In the implementation block
@property (nonatomic,readonly) BOOL usesSwiftRefcounting;                    //@synthesize usesSwiftRefcounting=_usesSwiftRefcounting - In the implementation block
@property (nonatomic,readonly) unsigned ivarCount;                           //@synthesize ivarCount=_ivarCount - In the implementation block
@property (nonatomic,readonly) NSString * typeName; 
@property (nonatomic,readonly) NSString * className;                         //@synthesize remoteClassName=_remoteClassName - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * binaryName; 
@property (nonatomic,readonly) NSString * binaryPath;                        //@synthesize remoteBinaryPath=_remoteBinaryPath - In the implementation block
@property (nonatomic,readonly) NSString * fullIvarDescription; 
@property (nonatomic,readonly) NSString * shortIvarDescription; 
@property (nonatomic,readonly) VMUClassInfo * superclassInfo;                //@synthesize superclassLayout=_superclassLayout - In the implementation block
@property (nonatomic,readonly) VMUClassInfo * genericInfo; 
@property (readonly) unsigned infoType; 
@property (readonly) unsigned long long remoteIsa;                           //@synthesize remoteIsa=_remoteIsa - In the implementation block
@property (readonly) unsigned instanceSize;                                  //@synthesize instanceSize=_instanceSize - In the implementation block
@property (readonly) BOOL isARR; 
@property (readonly) BOOL isRealized; 
@property (readonly) BOOL isMetaClass; 
@property (readonly) BOOL isRootClass; 
@property (readonly) BOOL hasCppConstructorOrDestructor; 
+(void)initialize;
+(id)_genericBlockByrefInfo;
+(id)descriptionForTypeEncoding:(const char*)arg1 ivarName:(const char*)arg2 ;
+(unsigned long long)sizeofClassStructure;
+(id)classInfoWithClassName:(id)arg1 binaryPath:(id)arg2 type:(unsigned)arg3 ;
-(void)_setDisplayName:(id)arg1 ;
-(id)firstFieldWithName:(id)arg1 ;
-(BOOL)isARR;
-(VMUClassInfo *)superclassInfo;
-(id)mutableCopy;
-(id)initWithClassName:(id)arg1 binaryPath:(id)arg2 type:(unsigned)arg3 ;
-(void)_processARRLayout:(const char*)arg1 scanType:(unsigned)arg2 ;
-(void)_demangleClassName;
-(BOOL)hasVariantLayout;
-(unsigned)_objcABIFromObjectIdentifier:(id)arg1 ;
-(void)_setClassNameWithAddress:(unsigned long long)arg1 symbolicator:(CSTypeRef)arg2 ;
-(BOOL)isRootClass;
-(void)_setIsa:(unsigned long long)arg1 ;
-(void)_parseIvarsAndLayouts;
-(id)_initWithClass:(unsigned long long)arg1 type:(unsigned)arg2 realizedOnly:(BOOL)arg3 infoMap:(id)arg4 objectIdentifier:(id)arg5 reader:(/*^block*/id)arg6 ;
-(void)_determineBinaryPathUsingObjectIdentifier:(id)arg1 remoteClassNameLoc:(unsigned long long)arg2 ;
-(unsigned long long)remoteIsa;
-(void)_setBinaryPath:(id)arg1 sanitize:(BOOL)arg2 ;
-(void)_freeLocalIvarList;
-(id)_copyWithInstanceSize:(unsigned)arg1 superclassOffset:(unsigned)arg2 asVariant:(BOOL)arg3 mutable:(BOOL)arg4 ;
-(void)_identifyObjCClassStructureBlocksForIsa:(unsigned long long)arg1 isMetaclass:(BOOL)arg2 withScanner:(id)arg3 addressIdentifierBlock:(/*^block*/id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned)arg3 error:(id*)arg4 ;
-(void)_logDescriptionWithSuperclasses:(BOOL)arg1 indentation:(int)arg2 toLogger:(/*^block*/id)arg3 ;
-(void)_applyExtendedLayout:(const char*)arg1 withSize:(unsigned)arg2 ;
-(void)enumerateAllFieldsWithBlock:(/*^block*/id)arg1 ;
-(unsigned)_totalIvarCount;
-(void)enumerateClassHierarchyWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateTypeFieldsWithBlock:(/*^block*/id)arg1 ;
-(void)enumeratePointerTypeFieldsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)fullIvarDescription;
-(void)_setSuperclassInfo:(id)arg1 ;
-(void)_setDefaultScanType:(unsigned)arg1 ;
-(id)initWithClosureContext:(unsigned long long)arg1 typeInfo:(swift_typeinfo)arg2 infoMap:(id)arg3 swiftFieldMetadataContext:(libSwiftRemoteMirrorWrapper*)arg4 ;
-(id)initSwiftClassWithName:(id)arg1 classInfoType:(unsigned)arg2 size:(unsigned long long)arg3 ;
-(id)initWithClass:(unsigned long long)arg1 type:(unsigned)arg2 infoMap:(id)arg3 objectIdentifier:(id)arg4 reader:(/*^block*/id)arg5 ;
-(void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned)arg3 ;
-(id)initWithRealizedClass:(unsigned long long)arg1 type:(unsigned)arg2 infoMap:(id)arg3 objectIdentifier:(id)arg4 reader:(/*^block*/id)arg5 ;
-(id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned)arg2 memoryReader:(/*^block*/id)arg3 ;
-(void)_addFields:(id)arg1 ;
-(void)_replaceField:(id)arg1 withFields:(id)arg2 ;
-(void)_replaceFieldRecursively:(id)arg1 withField:(id)arg2 ;
-(void)_setFields:(id)arg1 ;
-(void)_addVariantAction:(/*^block*/id)arg1 withEvaluator:(/*^block*/id)arg2 ;
-(NSString *)shortIvarDescription;
-(id)scanDescriptionWithSize:(unsigned)arg1 ;
-(BOOL)isRealized;
-(BOOL)isMetaClass;
-(BOOL)hasCppConstructorOrDestructor;
-(unsigned)ivarCount;
-(NSString *)className;
-(id)debugDescription;
-(NSString *)typeName;
-(id)description;
-(unsigned)infoType;
-(id)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)identifyObjCClassStructureBlocksWithScanner:(id)arg1 addressIdentifierBlock:(/*^block*/id)arg2 ;
-(BOOL)hasSpecificLayout;
-(id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned)arg2 withScanner:(id)arg3 memoryReader:(/*^block*/id)arg4 ;
-(void)enumerateSublayoutsForSize:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateExternalValuesFromObject:(unsigned long long)arg1 withSize:(unsigned)arg2 block:(/*^block*/id)arg3 ;
-(NSString *)binaryPath;
-(void)enumerateAllPointerFieldsWithBlock:(/*^block*/id)arg1 ;
-(unsigned)instanceSize;
-(void)enumerateScanningLocationsForSize:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)defaultScanType;
-(void)enumerateStoredEntriesForObject:(unsigned long long)arg1 ofSize:(unsigned)arg2 externalValues:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)fieldAtOrBeforeOffset:(unsigned)arg1 ;
-(VMUClassInfo *)genericInfo;
-(NSString *)displayName;
-(NSString *)binaryName;
-(BOOL)usesSwiftRefcounting;
-(unsigned)pointerSize;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

