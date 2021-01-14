/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)familyName;
-(NSString *)givenName;
-(id)initWithGivenName:(id)arg1 familyName:(id)arg2 userDSID:(id)arg3 userAltDSID:(id)arg4 ;
-(NSNumber *)userDSID;
-(NSString *)userAltDSID;
@end

