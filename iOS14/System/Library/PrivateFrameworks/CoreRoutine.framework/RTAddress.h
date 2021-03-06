/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSArray, NSString, NSDate;

@interface RTAddress : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isIsland;
	NSUUID* _identifier;
	NSArray* _subPremises;
	NSString* _subThoroughfare;
	NSString* _thoroughfare;
	NSString* _subLocality;
	NSString* _locality;
	NSString* _subAdministrativeArea;
	NSString* _administrativeArea;
	NSString* _administrativeAreaCode;
	NSString* _postalCode;
	NSString* _country;
	NSString* _countryCode;
	NSString* _inlandWater;
	NSString* _ocean;
	NSArray* _areasOfInterest;
	NSString* _iso3166CountryCode;
	NSString* _iso3166SubdivisionCode;
	NSDate* _creationDate;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) NSString * mergedThoroughfare; 
@property (nonatomic,retain) NSDate * creationDate;                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * subPremises;                               //@synthesize subPremises=_subPremises - In the implementation block
@property (nonatomic,copy,readonly) NSString * subThoroughfare;                     //@synthesize subThoroughfare=_subThoroughfare - In the implementation block
@property (nonatomic,copy,readonly) NSString * thoroughfare;                        //@synthesize thoroughfare=_thoroughfare - In the implementation block
@property (nonatomic,copy,readonly) NSString * subLocality;                         //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,copy,readonly) NSString * locality;                            //@synthesize locality=_locality - In the implementation block
@property (nonatomic,copy,readonly) NSString * subAdministrativeArea;               //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,copy,readonly) NSString * administrativeArea;                  //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,copy,readonly) NSString * administrativeAreaCode;              //@synthesize administrativeAreaCode=_administrativeAreaCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * postalCode;                          //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * country;                             //@synthesize country=_country - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                         //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * inlandWater;                         //@synthesize inlandWater=_inlandWater - In the implementation block
@property (nonatomic,copy,readonly) NSString * ocean;                               //@synthesize ocean=_ocean - In the implementation block
@property (nonatomic,readonly) NSArray * areasOfInterest;                           //@synthesize areasOfInterest=_areasOfInterest - In the implementation block
@property (nonatomic,readonly) BOOL isIsland;                                       //@synthesize isIsland=_isIsland - In the implementation block
@property (nonatomic,copy,readonly) NSString * iso3166CountryCode;                  //@synthesize iso3166CountryCode=_iso3166CountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * iso3166SubdivisionCode;              //@synthesize iso3166SubdivisionCode=_iso3166SubdivisionCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)subLocality;
-(NSString *)postalCode;
-(id)initWithIdentifier:(id)arg1 subPremises:(id)arg2 subThoroughfare:(id)arg3 thoroughfare:(id)arg4 subLocality:(id)arg5 locality:(id)arg6 subAdministrativeArea:(id)arg7 administrativeArea:(id)arg8 administrativeAreaCode:(id)arg9 postalCode:(id)arg10 country:(id)arg11 countryCode:(id)arg12 inlandWater:(id)arg13 ocean:(id)arg14 areasOfInterest:(id)arg15 isIsland:(BOOL)arg16 creationDate:(id)arg17 expirationDate:(id)arg18 iso3166CountryCode:(id)arg19 iso3166SubdivisionCode:(id)arg20 ;
-(NSArray *)areasOfInterest;
-(NSString *)countryCode;
-(NSString *)ocean;
-(NSString *)country;
-(NSString *)subAdministrativeArea;
-(id)init;
-(NSArray *)subPremises;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)subThoroughfare;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToAddress:(id)arg1 ;
-(BOOL)isIsland;
-(NSString *)mergedThoroughfare;
-(NSString *)iso3166CountryCode;
-(NSString *)iso3166SubdivisionCode;
-(NSString *)locality;
-(id)description;
-(NSDate *)creationDate;
-(NSDate *)expirationDate;
-(NSString *)inlandWater;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)administrativeAreaCode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)administrativeArea;
-(NSString *)thoroughfare;
-(BOOL)isEqual:(id)arg1 ;
@end

