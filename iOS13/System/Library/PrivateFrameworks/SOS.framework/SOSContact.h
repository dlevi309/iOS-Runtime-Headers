/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)nameContactIdentifier;
-(NSString *)phoneNumberContactIdentifier;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setNameContactIdentifier:(NSString *)arg1 ;
-(void)setPhoneNumberContactIdentifier:(NSString *)arg1 ;
@end

