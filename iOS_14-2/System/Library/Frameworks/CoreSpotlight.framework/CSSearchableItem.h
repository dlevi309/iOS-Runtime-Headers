/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isUpdate;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)_populateMissingPeopleWithNames:(id)arg1 emailAddresses:(id)arg2 allItemPersons:(id)arg3 primaryItemPersons:(id)arg4 additionalItemPersons:(id)arg5 hiddenAdditionalItemPersons:(id)arg6 personDictionary:(id)arg7 contactProperties:(id)arg8 nameKey:(id)arg9 emailKey:(id)arg10 contactIdentifierKey:(id)arg11 personKey:(id)arg12 attributeSet:(id)arg13 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributeSet:(id)arg3 ;
-(NSString *)domainIdentifier;
-(CSSearchableItemAttributeSet *)attributeSet;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(id)_propertiesDescription;
-(T)score;
-(void)setAttributes:(id)arg1 ;
-(void)setAttributeSet:(CSSearchableItemAttributeSet *)arg1 ;
-(NSString *)protection;
-(BOOL)_isFullyFormed;
-(BOOL)_hasAttributesOfType:(id)arg1 ;
-(void)setProtection:(NSString *)arg1 ;
-(void)setIsUpdate:(BOOL)arg1 ;
-(void)setNoIndex:(BOOL)arg1 ;
-(id)initWithAttributeSet:(id)arg1 ;
-(void)_standardizeFileProvider:(id)arg1 ;
-(void)_standardizePeople:(id)arg1 ;
-(void)_standardizeHTML:(id)arg1 ;
-(void)_standardizeDeprecatedProperties:(id)arg1 ;
-(void)_standardizeMarkAs:(id)arg1 ;
-(void)_parseEmailHeadersForFeatures:(id)arg1 ;
-(void)_standardizeSiriShortcuts:(id)arg1 ;
-(void)_fixBrokenAuthorNames:(id)arg1 ;
-(void)standardizeAttributes;
-(void)breakOutPersonInformationInSet:(id)arg1 withName:(id)arg2 emails:(id)arg3 contactIdentifiers:(id)arg4 nameKey:(id)arg5 emailKey:(id)arg6 contactIdentifierKey:(id)arg7 emailAddressKey:(id)arg8 attributeSet:(id)arg9 ;
-(id)filteredSpotlightAttributes;
-(void)_updateWithSearchableItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(id)debugDescription;
-(void)setScore:(T)arg1 ;
-(BOOL)noIndex;
-(id)attributes;
-(id)description;
-(NSDate *)expirationDate;
-(NSString *)bundleID;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(id)searchableItem;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

