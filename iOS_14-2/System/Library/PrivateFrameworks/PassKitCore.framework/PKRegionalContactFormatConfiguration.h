/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKNameComponentFormatConfiguration, PKAddressFormatConfiguration;

@interface PKRegionalContactFormatConfiguration : NSObject <NSSecureCoding> {

	PKNameComponentFormatConfiguration* _nameComponentFormatConfiguration;
	PKAddressFormatConfiguration* _addressFormatConfiguration;

}

@property (nonatomic,readonly) PKNameComponentFormatConfiguration * nameComponentFormatConfiguration;              //@synthesize nameComponentFormatConfiguration=_nameComponentFormatConfiguration - In the implementation block
@property (nonatomic,readonly) PKAddressFormatConfiguration * addressFormatConfiguration;                          //@synthesize addressFormatConfiguration=_addressFormatConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(PKNameComponentFormatConfiguration *)nameComponentFormatConfiguration;
-(PKAddressFormatConfiguration *)addressFormatConfiguration;
-(id)initWithCoder:(id)arg1 ;
@end

