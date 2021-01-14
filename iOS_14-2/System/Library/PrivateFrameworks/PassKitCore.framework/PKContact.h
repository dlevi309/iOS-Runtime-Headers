/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPersonNameComponents, CNPostalAddress, CNPhoneNumber, NSString;

@interface PKContact : NSObject <NSSecureCoding> {

	NSPersonNameComponents* _name;
	CNPostalAddress* _postalAddress;
	CNPhoneNumber* _phoneNumber;
	NSString* _emailAddress;
	NSString* _supplementarySubLocality;

}

@property (nonatomic,retain) NSPersonNameComponents * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) CNPostalAddress * postalAddress;                  //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,retain) CNPhoneNumber * phoneNumber;                      //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                          //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * supplementarySubLocality;              //@synthesize supplementarySubLocality=_supplementarySubLocality - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)version;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqualToContact:(id)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setPostalAddress:(CNPostalAddress *)arg1 ;
-(CNPhoneNumber *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCNContact:(id)arg1 ;
-(NSPersonNameComponents *)name;
-(void)setPhoneNumber:(CNPhoneNumber *)arg1 ;
-(NSString *)supplementarySubLocality;
-(void)setSupplementarySubLocality:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSPersonNameComponents *)arg1 ;
-(id)cnMutableContact;
-(CNPostalAddress *)postalAddress;
-(BOOL)isEqual:(id)arg1 ;
@end

