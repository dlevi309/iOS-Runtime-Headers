/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, NSSet;

@interface AMSPushConfiguration : NSObject {

	NSString* _userNotificationExtensionId;
	NSSet* _enabledActionTypes;

}

@property (nonatomic,retain) NSString * userNotificationExtensionId;              //@synthesize userNotificationExtensionId=_userNotificationExtensionId - In the implementation block
@property (nonatomic,retain) NSSet * enabledActionTypes;                          //@synthesize enabledActionTypes=_enabledActionTypes - In the implementation block
-(id)initWithEnabledActionTypes:(id)arg1 ;
-(NSString *)userNotificationExtensionId;
-(void)setUserNotificationExtensionId:(NSString *)arg1 ;
-(NSSet *)enabledActionTypes;
-(void)setEnabledActionTypes:(NSSet *)arg1 ;
@end

