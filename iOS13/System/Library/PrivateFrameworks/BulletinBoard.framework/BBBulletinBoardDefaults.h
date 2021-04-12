/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

