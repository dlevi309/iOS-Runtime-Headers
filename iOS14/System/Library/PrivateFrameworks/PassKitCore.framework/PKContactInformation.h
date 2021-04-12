/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKContactInformation : NSObject <NSSecureCoding> {

	NSArray* _postalAddresses;
	NSArray* _emailAddresses;
	NSArray* _phoneNumbers;

}

@property (nonatomic,readonly) NSArray * postalAddresses;              //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * emailAddresses;               //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * phoneNumbers;                 //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_keychainWrapper;
+(void)saveContactInformationToKeychain:(id)arg1 ;
+(id)contactInformationFromKeychain;
+(void)deleteContactInformationFromKeychain;
-(id)init;
-(id)initWithKeychainData:(id)arg1 ;
-(id)initWithPostalAddresses:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)emailAddresses;
-(NSArray *)postalAddresses;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)phoneNumbers;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)keychainData;
@end

