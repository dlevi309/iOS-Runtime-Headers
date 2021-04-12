/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSString, NSNumber;

@interface STUserDescription : NSObject {

	NSString* _givenName;
	NSString* _familyName;
	NSNumber* _userDSID;
	NSString* _userAltDSID;

}

@property (nonatomic,copy,readonly) NSString * givenName;                //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy,readonly) NSString * familyName;               //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * userDSID;                 //@synthesize userDSID=_userDSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * userAltDSID;              //@synthesize userAltDSID=_userAltDSID - In the implementation block
+(id)currentUser;
+(void)currentUserWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)givenName;
-(NSString *)familyName;
-(NSNumber *)userDSID;
-(NSString *)userAltDSID;
-(id)initWithGivenName:(id)arg1 familyName:(id)arg2 userDSID:(id)arg3 userAltDSID:(id)arg4 ;
@end

