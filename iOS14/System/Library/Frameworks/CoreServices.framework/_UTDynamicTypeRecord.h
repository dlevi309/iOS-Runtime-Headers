/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/UTTypeRecord.h>

@class NSString;

@interface _UTDynamicTypeRecord : UTTypeRecord {

	NSString* _identifier;

}
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(BOOL)isWildcard;
-(id)pedigree;
-(BOOL)isExported;
-(BOOL)isImported;
-(BOOL)isCoreType;
-(id)declaration;
-(id)referenceURL;
-(BOOL)isDeclared;
-(id)_delegatePath;
-(void)_enumerateRelatedTypesWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(/*^block*/id)arg4 ;
-(id)tagSpecification;
-(BOOL)isInPublicDomain;
-(BOOL)isChildOfTypeIdentifier:(id)arg1 ;
-(id)preferredTagOfClass:(id)arg1 ;
-(id)_initWithContext:(LSContext*)arg1 dynamicUTI:(id)arg2 ;
-(id)parentTypeIdentifiers;
-(id)_declaringBundleBookmark;
-(id)_localizedDescription;
-(id)declaringBundleRecord;
-(id)childTypeIdentifiers;
-(void)_LSRecord_resolve_pedigree;
-(BOOL)conformsToTypeIdentifier:(id)arg1 ;
-(id)pedigreeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT1*)arg4 ;
-(id)_persistentIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(BOOL)isDynamic;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)version;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

