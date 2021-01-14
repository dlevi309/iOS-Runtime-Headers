/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKContactFieldConfiguration;

@interface PKAddressFormatConfiguration : NSObject <NSSecureCoding> {

	PKContactFieldConfiguration* _streetFieldConfiguration;
	PKContactFieldConfiguration* _subLocalityFieldConfiguration;
	PKContactFieldConfiguration* _cityFieldConfiguration;
	PKContactFieldConfiguration* _subAdministrativeAreaFieldConfiguration;
	PKContactFieldConfiguration* _stateFieldConfiguration;
	PKContactFieldConfiguration* _postalCodeFieldConfiguration;

}

@property (nonatomic,readonly) PKContactFieldConfiguration * streetFieldConfiguration;                             //@synthesize streetFieldConfiguration=_streetFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * subLocalityFieldConfiguration;                        //@synthesize subLocalityFieldConfiguration=_subLocalityFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * cityFieldConfiguration;                               //@synthesize cityFieldConfiguration=_cityFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * subAdministrativeAreaFieldConfiguration;              //@synthesize subAdministrativeAreaFieldConfiguration=_subAdministrativeAreaFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * stateFieldConfiguration;                              //@synthesize stateFieldConfiguration=_stateFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * postalCodeFieldConfiguration;                         //@synthesize postalCodeFieldConfiguration=_postalCodeFieldConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(PKContactFieldConfiguration *)cityFieldConfiguration;
-(PKContactFieldConfiguration *)stateFieldConfiguration;
-(PKContactFieldConfiguration *)streetFieldConfiguration;
-(PKContactFieldConfiguration *)subLocalityFieldConfiguration;
-(PKContactFieldConfiguration *)subAdministrativeAreaFieldConfiguration;
-(PKContactFieldConfiguration *)postalCodeFieldConfiguration;
@end

