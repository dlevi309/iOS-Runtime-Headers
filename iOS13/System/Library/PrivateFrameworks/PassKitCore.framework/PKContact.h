/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSPersonNameComponents *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSPersonNameComponents *)arg1 ;
-(id)dictionaryRepresentation;
-(CNPhoneNumber *)phoneNumber;
-(void)setPhoneNumber:(CNPhoneNumber *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(CNPostalAddress *)postalAddress;
-(void)setPostalAddress:(CNPostalAddress *)arg1 ;
-(id)cnMutableContact;
-(id)initWithCNContact:(id)arg1 ;
-(BOOL)isEqualToContact:(id)arg1 ;
-(NSString *)supplementarySubLocality;
-(void)setSupplementarySubLocality:(NSString *)arg1 ;
@end

