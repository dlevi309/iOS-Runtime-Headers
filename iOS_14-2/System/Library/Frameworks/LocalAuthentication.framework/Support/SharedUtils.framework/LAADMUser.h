/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/


@class NSString;

@interface LAADMUser : NSObject {

	BOOL _isAdministrator;
	BOOL _isDirectAdministrator;
	NSString* _groupName;
	NSString* _name;
	NSString* _fullName;
	long long _userID;

}

@property (nonatomic,readonly) BOOL isAdministrator;                    //@synthesize isAdministrator=_isAdministrator - In the implementation block
@property (nonatomic,readonly) BOOL isDirectAdministrator;              //@synthesize isDirectAdministrator=_isDirectAdministrator - In the implementation block
@property (nonatomic,readonly) NSString * groupName;                    //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) long long userID;                        //@synthesize userID=_userID - In the implementation block
+(id)currentUser;
+(id)allLocalUsers;
+(id)rootUser;
+(id)findUserByID:(unsigned long long)arg1 searchParent:(BOOL)arg2 ;
+(id)findUserByName:(id)arg1 searchParent:(BOOL)arg2 ;
+(BOOL)isUserNameUnique:(id)arg1 searchParent:(BOOL)arg2 ;
+(BOOL)shouldDisplayUser:(id)arg1 ;
+(id)namesFromUsersWithUIDs:(id)arg1 ;
+(id)namesFromUsersWithUIDs:(id)arg1 presentInGroupWithName:(id)arg2 ;
-(NSString *)fullName;
-(long long)userID;
-(BOOL)isAdministrator;
-(NSString *)groupName;
-(NSString *)name;
-(BOOL)isMemberOfGroupWithName:(id)arg1 ;
-(BOOL)isDirectAdministrator;
@end

