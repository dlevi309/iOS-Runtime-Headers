/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString;

@interface PawuKFL8icsLHMZd : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _emailAddress;
	NSString* _phoneNumber;
	unsigned long long _source;
	unsigned long long _type;

}

@property (nonatomic,retain) NSString * firstName;                   //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                    //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * fullName;                    //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                 //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                //@synthesize emailAddress=_emailAddress - In the implementation block
@property (assign,nonatomic) unsigned long long source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long type;                //@synthesize type=_type - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)source;
-(NSString *)phoneNumber;
-(NSString *)fullName;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithSource:(unsigned long long)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(id)initWithFullName:(id)arg1 source:(unsigned long long)arg2 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 source:(unsigned long long)arg3 ;
-(id)initWithEmailAddress:(id)arg1 source:(unsigned long long)arg2 ;
-(id)initWithPhoneNumber:(id)arg1 source:(unsigned long long)arg2 ;
@end

