/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSString, NSNumber, NSDate;

@interface SLFacebookRegistrationInfo : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _email;
	NSNumber* _phone;
	NSString* _password;
	NSString* _gender;
	NSDate* _birthday;

}

@property (nonatomic,retain) NSString * firstName;              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;               //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * email;                  //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSNumber * phone;                  //@synthesize phone=_phone - In the implementation block
@property (nonatomic,retain) NSString * password;               //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * gender;                 //@synthesize gender=_gender - In the implementation block
@property (nonatomic,retain) NSDate * birthday;                 //@synthesize birthday=_birthday - In the implementation block
-(id)debugDescription;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(NSDate *)birthday;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSNumber *)phone;
-(void)setPhone:(NSNumber *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setBirthday:(NSDate *)arg1 ;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(BOOL)hasAllRequiredValues;
@end

