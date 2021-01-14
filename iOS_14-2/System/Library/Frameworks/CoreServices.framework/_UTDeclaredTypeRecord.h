/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/UTTypeRecord.h>

@class LSBundleRecord;

@interface _UTDeclaredTypeRecord : UTTypeRecord {

	LSBundleRecord* _weakDeclaringBundleRecord;

}

@property (readonly) unsigned _rawFlags; 
@property (readonly) LSBundleRecord * _declaringBundleRecord; 
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(unsigned)_rawFlags;
-(BOOL)isWildcard;
-(id)pedigree;
-(BOOL)isExported;
-(BOOL)isImported;
-(BOOL)isCoreType;
-(id)declaration;
-(id)referenceURL;
-(BOOL)isDeclared;
-(id)_delegatePath;
-(id)_declaringBundleRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)_delegatePathWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_enumerateRelatedTypeStructuresWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(/*^block*/id)arg4 ;
-(id)childTypeIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(unsigned)_rawFlagsWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)parentTypeIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)_localizedDescriptionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_enumerateRelatedTypesWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(/*^block*/id)arg4 ;
-(id)identifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)referenceURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_LSRecord_resolve__declaringBundleBookmark;
-(id)_declaringBundleBookmarkWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)versionWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)declarationWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)tagSpecification;
-(BOOL)isInPublicDomain;
-(void)_LSRecord_resolve_parentTypeIdentifiers;
-(void)_LSRecord_resolve_tagSpecification;
-(id)parentTypeIdentifiers;
-(id)_declaringBundleBookmark;
-(id)_localizedDescription;
-(id)declaringBundleRecord;
-(id)childTypeIdentifiers;
-(void)_LSRecord_resolve_identifier;
-(void)_LSRecord_resolve__localizedDescription;
-(void)_LSRecord_resolve__declaringBundleRecord;
-(id)tagSpecificationWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_LSRecord_resolve_pedigree;
-(void)_LSRecord_resolve_childTypeIdentifiers;
-(BOOL)conformsToTypeIdentifier:(id)arg1 ;
-(void)_LSRecord_resolve_version;
-(void)_LSRecord_resolve_declaration;
-(LSBundleRecord *)_declaringBundleRecord;
-(id)pedigreeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(void)_LSRecord_resolve__rawFlags;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(void)_LSRecord_resolve__delegatePath;
-(void)_LSRecord_resolve_referenceURL;
-(BOOL)isDynamic;
-(BOOL)isActive;
-(id)identifier;
-(id)version;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

