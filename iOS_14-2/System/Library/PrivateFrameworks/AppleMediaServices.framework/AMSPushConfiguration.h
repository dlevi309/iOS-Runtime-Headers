/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol AMSPushHandlerDelegate;
@class NSString, NSSet;

@interface AMSPushConfiguration : NSObject {

	NSString* _userNotificationExtensionId;
	NSSet* _enabledActionTypes;
	id<AMSPushHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AMSPushHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * userNotificationExtensionId;                  //@synthesize userNotificationExtensionId=_userNotificationExtensionId - In the implementation block
@property (nonatomic,retain) NSSet * enabledActionTypes;                              //@synthesize enabledActionTypes=_enabledActionTypes - In the implementation block
-(id<AMSPushHandlerDelegate>)delegate;
-(NSString *)userNotificationExtensionId;
-(void)setEnabledActionTypes:(NSSet *)arg1 ;
-(NSSet *)enabledActionTypes;
-(void)setUserNotificationExtensionId:(NSString *)arg1 ;
-(void)setDelegate:(id<AMSPushHandlerDelegate>)arg1 ;
-(id)initWithEnabledActionTypes:(id)arg1 ;
@end

