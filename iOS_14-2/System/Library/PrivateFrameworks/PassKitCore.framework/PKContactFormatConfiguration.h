/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PKContactFormatConfiguration : NSObject <NSSecureCoding> {

	NSDictionary* _regionalAddressFormatConfigurations;
	BOOL _checkFormatOfPhoneNumber;
	BOOL _checkFormatOfEmailAddress;

}

@property (nonatomic,readonly) BOOL checkFormatOfPhoneNumber;               //@synthesize checkFormatOfPhoneNumber=_checkFormatOfPhoneNumber - In the implementation block
@property (nonatomic,readonly) BOOL checkFormatOfEmailAddress;              //@synthesize checkFormatOfEmailAddress=_checkFormatOfEmailAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)regionalAddressFormatConfigurations;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)contactFieldConfigurationForCountryCode:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)checkFormatOfPhoneNumber;
-(BOOL)checkFormatOfEmailAddress;
@end

