/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NSArray, NSDate;

@interface RTAddress : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isIsland;
	NSUUID* _identifier;
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
	NSDate* _creationDate;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) NSString * mergedThoroughfare; 
@property (nonatomic,retain) NSDate * creationDate;                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                             //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
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
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(NSUUID *)identifier;
-(NSDate *)expirationDate;
-(NSDate *)creationDate;
-(NSString *)subThoroughfare;
-(NSString *)thoroughfare;
-(NSString *)postalCode;
-(NSString *)country;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(NSArray *)areasOfInterest;
-(NSString *)locality;
-(NSString *)administrativeArea;
-(NSString *)inlandWater;
-(NSString *)ocean;
-(NSString *)administrativeAreaCode;
-(BOOL)isEqualToAddress:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 subThoroughfare:(id)arg2 thoroughfare:(id)arg3 subLocality:(id)arg4 locality:(id)arg5 subAdministrativeArea:(id)arg6 administrativeArea:(id)arg7 administrativeAreaCode:(id)arg8 postalCode:(id)arg9 country:(id)arg10 countryCode:(id)arg11 inlandWater:(id)arg12 ocean:(id)arg13 areasOfInterest:(id)arg14 isIsland:(BOOL)arg15 creationDate:(id)arg16 expirationDate:(id)arg17 ;
-(NSString *)mergedThoroughfare;
-(BOOL)isIsland;
@end

