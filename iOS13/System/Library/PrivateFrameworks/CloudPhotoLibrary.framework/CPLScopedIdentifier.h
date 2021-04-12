/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)descriptionWithScopeIdentifier:(id)arg1 identifier:(id)arg2 ;
+(id)scopedIdentifiersFromArrayOfUnknownIdentifiers:(id)arg1 ;
+(id)scopedIdentifiersFromSetOfUnknownIdentifiers:(id)arg1 ;
+(id)scopedIdentifiersFromDictionaryOfUnknownIdentifiers:(id)arg1 ;
+(id)unscopedIdentifiersFromArrayOfScopedIdentifiers:(id)arg1 ;
+(id)unscopedIdentifiersFromSetOfScopedIdentifiers:(id)arg1 ;
+(id)unscopedIdentifiersFromDictionaryOfScopedIdentifiers:(id)arg1 ;
+(id)scopedIdentifierWithString:(id)arg1 includeScopeIndex:(BOOL)arg2 ;
+(id)scopedIdentifierWithString:(id)arg1 includeScopeIndex:(BOOL)arg2 defaultScopeIdentifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isInMainScope;
-(id)initInMainScopeWithIdentifier:(id)arg1 ;
-(NSString *)scopeIdentifier;
-(id)descriptionWithNoScopeIndex;
-(id)initWithScopeIdentifier:(id)arg1 identifier:(id)arg2 ;
-(id)safeFilename;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(BOOL)cplSpecialIsEqual:(id)arg1 ;
-(unsigned long long)cplSpecialHash;
-(long long)scopeIndex;
-(void)setScopeIndex:(long long)arg1 ;
-(id)initRelativeToScopedIdentifier:(id)arg1 identifier:(id)arg2 ;
-(id)initWithScopeIdentifier:(id)arg1 identifier:(id)arg2 scopeIndex:(long long)arg3 ;
@end

