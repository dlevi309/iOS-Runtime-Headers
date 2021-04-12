/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
*/


@interface APSMultiUserMode : NSObject {

	BOOL _isMultiUser;
	BOOL _isLoggedInUser;

}

@property (nonatomic,readonly) BOOL isMultiUser;                 //@synthesize isMultiUser=_isMultiUser - In the implementation block
@property (nonatomic,readonly) BOOL isLoggedInUser;              //@synthesize isLoggedInUser=_isLoggedInUser - In the implementation block
+(id)sharedInstance;
+(BOOL)_getIsCurrentlyLoggedIn;
+(BOOL)_getMultiUserMode;
-(id)initWithIsMultiUserMode:(BOOL)arg1 loggedInUser:(BOOL)arg2 ;
-(BOOL)isLoggedInUser;
-(BOOL)isMultiAndLoggedIn;
-(BOOL)isMultiUser;
@end

