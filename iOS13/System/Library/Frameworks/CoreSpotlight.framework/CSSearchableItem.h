/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/CSIndexQueuableItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CSSearchableItemAttributeSet, NSString, NSDate;

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSSecureCoding, NSCopying> {

	CSSearchableItemAttributeSet* _attributeSet;
	T _score;

}

@property (assign) BOOL noIndex; 
@property (assign) T score;                                                  //@synthesize score=_score - In the implementation block
@property (assign) BOOL isUpdate; 
@property (copy) NSString * bundleID; 
@property (copy) NSString * protection; 
@property (copy) NSString * uniqueIdentifier; 
@property (copy) NSString * domainIdentifier; 
@property (copy) NSDate * expirationDate; 
@property (retain) CSSearchableItemAttributeSet * attributeSet;              //@synthesize attributeSet=_attributeSet - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)searchableItemFromUserActivity:(id)arg1 bundleID:(id)arg2 ;
-(id)_cnui_valueForAttribute:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)uniqueIdentifier;
-(T)score;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setScore:(T)arg1 ;
-(CSSearchableItemAttributeSet *)attributeSet;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributeSet:(id)arg3 ;
-(BOOL)isUpdate;
-(id)searchableItem;
-(void)setAttributeSet:(CSSearchableItemAttributeSet *)arg1 ;
-(BOOL)noIndex;
-(id)_propertiesDescription;
-(BOOL)_isFullyFormed;
-(BOOL)_hasAttributesOfType:(id)arg1 ;
-(NSString *)protection;
-(void)setProtection:(NSString *)arg1 ;
-(void)setIsUpdate:(BOOL)arg1 ;
-(void)setNoIndex:(BOOL)arg1 ;
-(id)initWithAttributeSet:(id)arg1 ;
-(void)_standardizeFileProvider:(id)arg1 ;
-(void)_standardizePeople:(id)arg1 ;
-(void)_standardizeDeprecatedProperties:(id)arg1 ;
-(void)_standardizeHTML:(id)arg1 ;
-(void)_standardizeMarkAs:(id)arg1 ;
-(void)_parseEmailHeadersForFeatures:(id)arg1 ;
-(void)_standardizeSiriShortcuts:(id)arg1 ;
-(void)_fixBrokenAuthorNames:(id)arg1 ;
-(void)_populateMissingPeopleWithNames:(id)arg1 emailAddresses:(id)arg2 allItemPersons:(id)arg3 primaryItemPersons:(id)arg4 additionalItemPersons:(id)arg5 hiddenAdditionalItemPersons:(id)arg6 personDictionary:(id)arg7 contactProperties:(id)arg8 nameKey:(id)arg9 emailKey:(id)arg10 contactIdentifierKey:(id)arg11 personKey:(id)arg12 attributeSet:(id)arg13 ;
-(void)breakOutPersonInformationInSet:(id)arg1 withName:(id)arg2 emails:(id)arg3 contactIdentifiers:(id)arg4 nameKey:(id)arg5 emailKey:(id)arg6 contactIdentifierKey:(id)arg7 emailAddressKey:(id)arg8 attributeSet:(id)arg9 ;
-(void)standardizeAttributes;
-(id)filteredSpotlightAttributes;
-(void)_updateWithSearchableItem:(id)arg1 ;
@end

