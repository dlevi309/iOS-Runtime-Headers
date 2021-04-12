/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)postalAddressWithDictionaryRepresentation:(id)arg1 ;
+(id)localizedStringForKey:(id)arg1 ;
+(id)postalAddressWithAddressBookDictionaryRepresentation:(id)arg1 ;
-(id)formattedAddressString;
-(id)formattedAddressStrings;
-(id)CalLocation;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSString *)postalCode;
-(NSString *)city;
-(NSString *)country;
-(NSString *)street;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(NSString *)ISOCountryCode;
-(BOOL)isValid:(id*)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setSubAdministrativeArea:(NSString *)arg1 ;
-(void)setSubLocality:(NSString *)arg1 ;
-(id)initWithPostalAddress:(id)arg1 ;
-(void)setStreet:(NSString *)arg1 ;
-(void)setFormattedAddress:(NSString *)arg1 ;
-(void)setISOCountryCode:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)formattedAddress;
-(id)addressBookDictionaryRepresentation;
@end

