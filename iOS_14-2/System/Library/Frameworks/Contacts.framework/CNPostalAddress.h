/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNPostalAddress : NSObject <CNObjectValidation, NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _street;
	NSString* _subLocality;
	NSString* _city;
	NSString* _subAdministrativeArea;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;
	NSString* _ISOCountryCode;
	NSString* _formattedAddress;

}

@property (nonatomic,copy) NSString * street;                             //@synthesize street=_street - In the implementation block
@property (nonatomic,copy) NSString * subLocality;                        //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,copy) NSString * city;                               //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * subAdministrativeArea;              //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,copy) NSString * state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSString * ISOCountryCode;                     //@synthesize ISOCountryCode=_ISOCountryCode - In the implementation block
@property (nonatomic,copy) NSString * formattedAddress;                   //@synthesize formattedAddress=_formattedAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedAddressFormatDictionaryForCountryCode:(id)arg1 ;
+(id)localizedStringForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)postalAddressWithAddressBookDictionaryRepresentation:(id)arg1 ;
+(id)postalAddressWithDictionaryRepresentation:(id)arg1 ;
-(id)formattedAddressString;
-(id)CalLocation;
-(id)formattedAddressStrings;
-(id)dictionaryRepresentation;
-(NSString *)subLocality;
-(NSString *)postalCode;
-(NSString *)city;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)street;
-(NSString *)country;
-(void)setStreet:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(id)addressBookDictionaryRepresentation;
-(NSString *)subAdministrativeArea;
-(void)setPostalCode:(NSString *)arg1 ;
-(void)setFormattedAddress:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)setState:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid:(id*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(void)setSubLocality:(NSString *)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
-(NSString *)ISOCountryCode;
-(void)setISOCountryCode:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)formattedAddress;
@end

