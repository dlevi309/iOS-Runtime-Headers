/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKContactFieldConfiguration;

@interface PKNameComponentFormatConfiguration : NSObject <NSSecureCoding> {

	PKContactFieldConfiguration* _givenNameFieldConfiguration;
	PKContactFieldConfiguration* _familyNameFieldConfiguration;
	PKContactFieldConfiguration* _phoneticGivenNameFieldConfiguration;
	PKContactFieldConfiguration* _phoneticFamilyNameFieldConfiguration;

}

@property (nonatomic,readonly) PKContactFieldConfiguration * givenNameFieldConfiguration;                       //@synthesize givenNameFieldConfiguration=_givenNameFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * familyNameFieldConfiguration;                      //@synthesize familyNameFieldConfiguration=_familyNameFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * phoneticGivenNameFieldConfiguration;               //@synthesize phoneticGivenNameFieldConfiguration=_phoneticGivenNameFieldConfiguration - In the implementation block
@property (nonatomic,readonly) PKContactFieldConfiguration * phoneticFamilyNameFieldConfiguration;              //@synthesize phoneticFamilyNameFieldConfiguration=_phoneticFamilyNameFieldConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(PKContactFieldConfiguration *)givenNameFieldConfiguration;
-(PKContactFieldConfiguration *)familyNameFieldConfiguration;
-(PKContactFieldConfiguration *)phoneticGivenNameFieldConfiguration;
-(PKContactFieldConfiguration *)phoneticFamilyNameFieldConfiguration;
-(id)initWithCoder:(id)arg1 ;
@end

