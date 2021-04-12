/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface BBBulletinBoardDefaults : BSAbstractDefaultDomain

@property (assign,nonatomic) long long globalContentPreviewSetting; 
@property (assign,nonatomic) long long globalSpokenNotificationSetting; 
@property (assign,getter=isSpokenNotificationsSupported,nonatomic) BOOL spokenNotificationsSupported; 
+(id)standardDefaults;
-(void)setSpokenNotificationsSupported:(BOOL)arg1 ;
-(BOOL)isSpokenNotificationsSupported;
-(void)setGlobalSpokenNotificationSetting:(long long)arg1 ;
-(long long)globalSpokenNotificationSetting;
-(void)setGlobalContentPreviewSetting:(long long)arg1 ;
-(long long)globalContentPreviewSetting;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

