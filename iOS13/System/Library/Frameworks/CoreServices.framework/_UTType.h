/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQueryResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSSet, NSURL, NSNumber, NSArray;

@interface _UTType : _LSQueryResult <NSSecureCoding, NSCopying> {

	NSString* __glyphName;
	NSString* __iconName;

}

@property (getter=_isWildcard,nonatomic,readonly) BOOL _wildcard; 
@property (getter=_isActive,nonatomic,readonly) BOOL _active; 
@property (getter=_isPublic,nonatomic,readonly) BOOL _public; 
@property (getter=_isAppleInternal,nonatomic,readonly) BOOL _appleInternal; 
@property (nonatomic,readonly) NSString * _unlocalizedDescription; 
@property (nonatomic,readonly) NSDictionary * _localizedDescriptionDictionary; 
@property (nonatomic,readonly) NSString * _kernelExtensionName; 
@property (nonatomic,readonly) NSSet * _pedigree; 
@property (nonatomic,readonly) NSURL * _iconURL; 
@property (nonatomic,readonly) NSString * _glyphName;                                       //@synthesize _glyphName=__glyphName - In the implementation block
@property (nonatomic,readonly) NSString * _iconName;                                        //@synthesize _iconName=__iconName - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSNumber * version; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSURL * declaringBundleURL; 
@property (nonatomic,readonly) NSDictionary * declaration; 
@property (getter=isDynamic,nonatomic,readonly) BOOL dynamic; 
@property (getter=isDeclared,nonatomic,readonly) BOOL declared; 
@property (nonatomic,readonly) NSDictionary * tagSpecification; 
@property (nonatomic,readonly) NSURL * referenceURL; 
@property (nonatomic,readonly) NSArray * parentIdentifiers; 
+(BOOL)_isDeclaration:(id)arg1 equalToDeclaration:(id)arg2 ;
+(CFArrayRef)_copyIdentifiersWithQuery:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(NSString *)localizedDescription;
-(NSString *)identifier;
-(NSNumber *)version;
-(id)_localizedDescriptionWithPreferredLocalizations:(id)arg1 ;
-(NSArray *)parentIdentifiers;
-(NSDictionary *)declaration;
-(NSURL *)declaringBundleURL;
-(BOOL)isDynamic;
-(BOOL)isDeclared;
-(NSDictionary *)tagSpecification;
-(NSURL *)referenceURL;
-(BOOL)conformsToType:(id)arg1 ;
-(BOOL)conformsToTypeIdentifier:(id)arg1 ;
-(BOOL)_isActive;
-(BOOL)_isPublic;
-(BOOL)_isAppleInternal;
-(NSString *)_unlocalizedDescription;
-(NSDictionary *)_localizedDescriptionDictionary;
-(NSString *)_kernelExtensionName;
-(NSURL *)_iconURL;
-(void)_enumeratePedigreeWithBlock:(/*^block*/id)arg1 ;
-(NSString *)_glyphName;
-(NSString *)_iconName;
-(BOOL)_isWildcard;
-(NSSet *)_pedigree;
@end

