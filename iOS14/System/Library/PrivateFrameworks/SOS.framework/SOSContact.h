/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
*/


@class NSString;

@interface SOSContact : NSObject {

	NSString* _name;
	NSString* _phoneNumber;
	NSString* _nameContactIdentifier;
	NSString* _phoneNumberContactIdentifier;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * nameContactIdentifier;                     //@synthesize nameContactIdentifier=_nameContactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * phoneNumberContactIdentifier;              //@synthesize phoneNumberContactIdentifier=_phoneNumberContactIdentifier - In the implementation block
-(void)setNameContactIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumberContactIdentifier:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)phoneNumberContactIdentifier;
-(NSString *)name;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)nameContactIdentifier;
@end

