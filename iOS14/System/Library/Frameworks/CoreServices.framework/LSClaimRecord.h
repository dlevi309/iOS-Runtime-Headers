/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecord.h>

@class LSBundleRecord, NSDictionary, NSURL, _LSLocalizedStringRecord, NSString, NSArray;

@interface LSClaimRecord : LSRecord {

	LSBundleRecord* _weakClaimingBundleRecord;

}

@property (readonly) NSDictionary * iconDictionary; 
@property (readonly) NSURL * iconResourceBundleURL; 
@property (readonly) _LSLocalizedStringRecord * _localizedName; 
@property (readonly) LSBundleRecord * _claimingBundleRecord; 
@property (nonatomic,readonly) id compatibilityObject; 
@property (readonly) NSString * localizedName; 
@property (readonly) NSArray * typeIdentifiers; 
@property (readonly) NSArray * URLSchemes; 
@property (readonly) NSString * handlerRank; 
@property (readonly) unsigned role; 
@property (readonly) LSBundleRecord * claimingBundleRecord; 
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(NSArray *)URLSchemes;
-(NSString *)handlerRank;
-(NSString *)localizedName;
-(id)typeIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(NSArray *)typeIdentifiers;
-(unsigned)roleWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(void)_LSRecord_resolve_typeIdentifiers;
-(void)_LSRecord_resolve_iconDictionary;
-(id)_claimingBundleRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(id)iconResourceBundleURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(id)iconDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(id)handlerRankWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)URLSchemesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(id)_localizedNameWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS28*)arg4 ;
-(void)_LSRecord_resolve__claimingBundleRecord;
-(LSBundleRecord *)_claimingBundleRecord;
-(void)_LSRecord_resolve_iconResourceBundleURL;
-(NSDictionary *)iconDictionary;
-(NSURL *)iconResourceBundleURL;
-(void)_LSRecord_resolve__localizedName;
-(id)localizedNameWithPreferredLocalizations:(id)arg1 ;
-(void)_LSRecord_resolve_URLSchemes;
-(void)_LSRecord_resolve_handlerRank;
-(LSBundleRecord *)claimingBundleRecord;
-(void)_LSRecord_resolve_role;
-(_LSLocalizedStringRecord *)_localizedName;
-(unsigned)role;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

