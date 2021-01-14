/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)firstName;
-(id)initWithSource:(unsigned long long)arg1 ;
-(NSString *)lastName;
-(NSString *)fullName;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(id)initWithEmailAddress:(id)arg1 source:(unsigned long long)arg2 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 source:(unsigned long long)arg3 ;
-(NSString *)phoneNumber;
-(void)setType:(unsigned long long)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(unsigned long long)type;
-(id)initWithPhoneNumber:(id)arg1 source:(unsigned long long)arg2 ;
-(id)initWithFullName:(id)arg1 source:(unsigned long long)arg2 ;
-(unsigned long long)source;
@end

