/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecord.h>

@class NSDictionary, NSURL, _LSLocalizedStringRecord, NSData, NSString, NSNumber, LSBundleRecord, LSPropertyList, NSSet, NSOrderedSet;

@interface UTTypeRecord : LSRecord

@property (readonly) NSDictionary * iconDictionary; 
@property (readonly) NSURL * iconResourceBundleURL; 
@property (readonly) _LSLocalizedStringRecord * _localizedDescription; 
@property (readonly) NSData * _declaringBundleBookmark; 
@property (readonly) NSString * _delegatePath; 
@property (nonatomic,readonly) id compatibilityObject; 
@property (readonly) NSString * identifier; 
@property (readonly) NSNumber * version; 
@property (getter=isDynamic,readonly) BOOL dynamic; 
@property (getter=isDeclared,readonly) BOOL declared; 
@property (getter=isWildcard,readonly) BOOL wildcard; 
@property (getter=isInPublicDomain,readonly) BOOL inPublicDomain; 
@property (getter=isExported,readonly) BOOL exported; 
@property (getter=isImported,readonly) BOOL imported; 
@property (getter=isActive,readonly) BOOL active; 
@property (getter=isCoreType,readonly) BOOL coreType; 
@property (readonly) LSBundleRecord * declaringBundleRecord; 
@property (readonly) LSPropertyList * declaration; 
@property (readonly) LSPropertyList * tagSpecification; 
@property (readonly) NSURL * referenceURL; 
@property (readonly) NSSet * pedigree; 
@property (readonly) NSOrderedSet * parentTypeIdentifiers; 
@property (readonly) NSSet * childTypeIdentifiers; 
@property (readonly) NSString * localizedDescription; 
@property (readonly) NSDictionary * localizedDescriptionDictionary; 
+(id)_propertyClasses;
+(id)typeRecordForImportedTypeWithIdentifier:(id)arg1 conformingToIdentifier:(id)arg2 ;
+(id)enumerator;
+(id)typeRecordForPromiseAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)_typeIdentifier:(id)arg1 conformsToTypeIdentifier:(id)arg2 ;
+(id)_typeRecordWithContext:(LSContext*)arg1 forPromiseResourceValues:(id)arg2 error:(id*)arg3 ;
+(id)typeRecordWithIdentifier:(id)arg1 ;
+(id)typeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToTypeRecord:(id)arg3 ;
+(id)_typeRecordWithContext:(LSContext*)arg1 identifier:(id)arg2 ;
+(id)typeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 ;
+(id)typeRecordsWithIdentifiers:(id)arg1 ;
+(id)typeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToTypeRecord:(id)arg3 ;
+(id)_typeRecordWithContext:(LSContext*)arg1 forPromiseAtNode:(id)arg2 error:(id*)arg3 ;
+(id)typeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 ;
+(id)typeRecordWithTag:(id)arg1 ofClass:(id)arg2 ;
+(id)typeRecordsWithTag:(id)arg1 ofClass:(id)arg2 ;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(BOOL)isWildcard;
-(NSSet *)pedigree;
-(BOOL)isExported;
-(BOOL)isImported;
-(BOOL)isCoreType;
-(LSPropertyList *)declaration;
-(NSURL *)referenceURL;
-(BOOL)isDeclared;
-(NSString *)_delegatePath;
-(void)_enumerateRelatedTypesWithMaximumDegreeOfSeparation:(long long)arg1 block:(/*^block*/id)arg2 ;
-(id)localizedDescriptionWithPreferredLocalizations:(id)arg1 ;
-(void)_enumerateRelatedTypesWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(/*^block*/id)arg4 ;
-(LSPropertyList *)tagSpecification;
-(BOOL)isInPublicDomain;
-(BOOL)isChildOfTypeIdentifier:(id)arg1 ;
-(id)preferredTagOfClass:(id)arg1 ;
-(id)_initWithContext:(LSContext*)arg1 persistentIdentifierData:(const LSPersistentIdentifierData*)arg2 length:(unsigned long long)arg3 ;
-(NSOrderedSet *)parentTypeIdentifiers;
-(NSData *)_declaringBundleBookmark;
-(_LSLocalizedStringRecord *)_localizedDescription;
-(LSBundleRecord *)declaringBundleRecord;
-(BOOL)conformsToTypeRecord:(id)arg1 ;
-(NSSet *)childTypeIdentifiers;
-(void)enumerateChildTypesWithBlock:(/*^block*/id)arg1 ;
-(void)_LSRecord_resolve_iconDictionary;
-(BOOL)conformsToTypeIdentifier:(id)arg1 ;
-(id)iconResourceBundleURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)enumeratePedigreeWithBlock:(/*^block*/id)arg1 ;
-(id)iconDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(void)enumerateDescendantsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateParentTypesWithBlock:(/*^block*/id)arg1 ;
-(void)_LSRecord_resolve_iconResourceBundleURL;
-(NSDictionary *)iconDictionary;
-(NSDictionary *)localizedDescriptionDictionary;
-(NSURL *)iconResourceBundleURL;
-(BOOL)isDynamic;
-(BOOL)isActive;
-(id)debugDescription;
-(NSString *)localizedDescription;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSNumber *)version;
-(BOOL)isEqual:(id)arg1 ;
@end

