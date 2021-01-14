/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CPLScopedIdentifier : NSObject <NSCopying, NSSecureCoding> {

	long long _scopeIndex;
	NSString* _scopeIdentifier;
	NSString* _identifier;

}

@property (assign,nonatomic) long long scopeIndex; 
@property (copy,readonly) NSString * scopeIdentifier;              //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
@property (copy,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)scopedIdentifiersFromArrayOfUnknownIdentifiers:(id)arg1 ;
+(id)descriptionWithScopeIdentifier:(id)arg1 identifier:(id)arg2 ;
+(id)scopedIdentifiersFromSetOfUnknownIdentifiers:(id)arg1 ;
+(id)scopedIdentifiersFromDictionaryOfUnknownIdentifiers:(id)arg1 ;
+(id)unscopedIdentifiersFromArrayOfScopedIdentifiers:(id)arg1 ;
+(id)unscopedIdentifiersFromSetOfScopedIdentifiers:(id)arg1 ;
+(id)unscopedIdentifiersFromDictionaryOfScopedIdentifiers:(id)arg1 ;
+(id)scopedIdentifierWithString:(id)arg1 includeScopeIndex:(BOOL)arg2 ;
+(id)scopedIdentifierWithString:(id)arg1 includeScopeIndex:(BOOL)arg2 defaultScopeIdentifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isInMainScope;
-(id)initInMainScopeWithIdentifier:(id)arg1 ;
-(id)description;
-(id)descriptionWithNoScopeIndex;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)scopeIdentifier;
-(id)safeFilename;
-(NSString *)identifier;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithScopeIdentifier:(id)arg1 identifier:(id)arg2 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(BOOL)cplSpecialIsEqual:(id)arg1 ;
-(unsigned long long)cplSpecialHash;
-(long long)scopeIndex;
-(void)setScopeIndex:(long long)arg1 ;
-(id)initRelativeToScopedIdentifier:(id)arg1 identifier:(id)arg2 ;
-(id)initWithScopeIdentifier:(id)arg1 identifier:(id)arg2 scopeIndex:(long long)arg3 ;
@end

