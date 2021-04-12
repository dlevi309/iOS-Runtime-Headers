/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSString, CNPostalAddress, CLPlacemark;

@interface WFStreetAddress : NSObject <WFNaming, WFSerializableContent> {

	NSString* _addressString;
	NSString* _street;
	CNPostalAddress* _postalAddress;
	CLPlacemark* _placemark;
	NSString* _subLocality;
	NSString* _city;
	NSString* _subAdministrativeArea;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;
	NSString* _isoCountryCode;
	NSString* _label;

}

@property (nonatomic,readonly) CNPostalAddress * postalAddress;               //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,readonly) NSString * addressString;                      //@synthesize addressString=_addressString - In the implementation block
@property (nonatomic,readonly) NSString * shortAddressString; 
@property (nonatomic,readonly) CLPlacemark * placemark;                       //@synthesize placemark=_placemark - In the implementation block
@property (nonatomic,readonly) NSString * street;                             //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) NSString * subLocality;                        //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,readonly) NSString * city;                               //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) NSString * subAdministrativeArea;              //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,readonly) NSString * state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,readonly) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) NSString * isoCountryCode;                     //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,readonly) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * localizedLabel; 
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)streetAddressesInString:(id)arg1 error:(id*)arg2 ;
+(BOOL)stringContainsStreetAddresses:(id)arg1 ;
+(id)streetAddressWithTextCheckingResult:(id)arg1 ;
+(id)streetAddressWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 label:(id)arg9 ;
+(id)streetAddressWithPlacemark:(id)arg1 label:(id)arg2 ;
+(id)streetAddressWithPostalAddress:(id)arg1 label:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)state;
-(NSString *)label;
-(NSString *)postalCode;
-(NSString *)city;
-(NSString *)country;
-(NSString *)isoCountryCode;
-(NSString *)street;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(CNPostalAddress *)postalAddress;
-(CLPlacemark *)placemark;
-(NSString *)addressString;
-(NSString *)localizedLabel;
-(NSString *)shortAddressString;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
-(id)initWithPostalAddress:(id)arg1 placemark:(id)arg2 formattedAddress:(id)arg3 label:(id)arg4 ;
-(id)initWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 placemark:(id)arg9 formattedAddress:(id)arg10 label:(id)arg11 ;
@end

