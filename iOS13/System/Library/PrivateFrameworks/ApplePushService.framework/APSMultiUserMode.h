/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/


@interface APSMultiUserMode : NSObject {

	BOOL _isMultiUser;
	BOOL _isLoggedInUser;

}

@property (nonatomic,readonly) BOOL isMultiUser;                 //@synthesize isMultiUser=_isMultiUser - In the implementation block
@property (nonatomic,readonly) BOOL isLoggedInUser;              //@synthesize isLoggedInUser=_isLoggedInUser - In the implementation block
+(id)sharedInstance;
+(BOOL)_getMultiUserMode;
+(BOOL)_getIsCurrentlyLoggedIn;
-(BOOL)isMultiUser;
-(id)initWithIsMultiUserMode:(BOOL)arg1 loggedInUser:(BOOL)arg2 ;
-(BOOL)isMultiAndLoggedIn;
-(BOOL)isLoggedInUser;
@end

