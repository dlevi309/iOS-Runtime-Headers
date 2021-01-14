/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/

#import <FMCore/FMOwnerAccountIdentity.h>

@class NSString;

@interface FMInternalOwnerAccount : NSObject <FMOwnerAccountIdentity> {

	NSString* _personId;
	NSString* _username;
	NSString* _firstName;
	NSString* _lastName;

}

@property (nonatomic,copy) NSString * personId;               //@synthesize personId=_personId - In the implementation block
@property (nonatomic,copy) NSString * username;               //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * firstName;              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;               //@synthesize lastName=_lastName - In the implementation block
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setUsername:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)username;
-(void)setPersonId:(NSString *)arg1 ;
-(id)description;
-(NSString *)personId;
-(id)initWithAccount:(id)arg1 ;
@end

