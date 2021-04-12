/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <ContactsAutocomplete/ContactsAutocomplete-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDate;

@interface CNAutocompleteFetchContext : NSObject <NSCopying, NSSecureCoding> {

	BOOL _predictsBasedOnOutgoingInteraction;
	NSString* _sendingAddress;
	NSString* _sendingAddressAccountIdentifier;
	NSString* _domainIdentifier;
	NSArray* _relatedContacts;
	NSArray* _otherAddressesAlreadyChosen;
	NSDate* _date;
	NSString* _locationUUID;
	NSString* _title;
	NSArray* _bundleIdentifiers;

}

@property (copy) NSString * sendingAddress;                               //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (copy) NSString * sendingAddressAccountIdentifier;              //@synthesize sendingAddressAccountIdentifier=_sendingAddressAccountIdentifier - In the implementation block
@property (copy) NSString * domainIdentifier;                             //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (copy) NSArray * relatedContacts;                               //@synthesize relatedContacts=_relatedContacts - In the implementation block
@property (copy) NSArray * otherAddressesAlreadyChosen;                   //@synthesize otherAddressesAlreadyChosen=_otherAddressesAlreadyChosen - In the implementation block
@property (copy) NSDate * date;                                           //@synthesize date=_date - In the implementation block
@property (copy) NSString * locationUUID;                                 //@synthesize locationUUID=_locationUUID - In the implementation block
@property (copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (copy) NSArray * bundleIdentifiers;                             //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (assign) BOOL predictsBasedOnOutgoingInteraction;               //@synthesize predictsBasedOnOutgoingInteraction=_predictsBasedOnOutgoingInteraction - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)locationUUID;
-(void)setLocationUUID:(NSString *)arg1 ;
-(NSArray *)bundleIdentifiers;
-(BOOL)isValid:(id*)arg1 ;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(void)setSendingAddressAccountIdentifier:(NSString *)arg1 ;
-(void)setSendingAddress:(NSString *)arg1 ;
-(void)setOtherAddressesAlreadyChosen:(NSArray *)arg1 ;
-(NSString *)sendingAddress;
-(void)setPredictsBasedOnOutgoingInteraction:(BOOL)arg1 ;
-(NSArray *)otherAddressesAlreadyChosen;
-(NSString *)sendingAddressAccountIdentifier;
-(BOOL)predictsBasedOnOutgoingInteraction;
-(NSArray *)relatedContacts;
-(void)setRelatedContacts:(NSArray *)arg1 ;
@end

