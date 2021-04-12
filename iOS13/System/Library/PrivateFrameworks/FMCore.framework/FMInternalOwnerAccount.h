/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)personId;
-(void)setPersonId:(NSString *)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
@end

