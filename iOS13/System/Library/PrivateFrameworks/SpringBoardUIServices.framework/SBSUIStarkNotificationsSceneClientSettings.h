/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIApplicationSceneClientSettings.h>
#import <libobjc.A.dylib/SBSUIStarkNotificationsSceneClientSettings.h>

@protocol SBSUIStarkNotificationsSceneClientSettings <NSObject>
@property (getter=isDisplayingNotification,nonatomic,readonly) BOOL displayingNotification; 
@property (nonatomic,readonly) BOOL shouldBorrowScreen; 
@required
-(BOOL)isDisplayingNotification;
-(BOOL)shouldBorrowScreen;

@end


@class NSString;

@interface SBSUIStarkNotificationsSceneClientSettings : UIApplicationSceneClientSettings <SBSUIStarkNotificationsSceneClientSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDisplayingNotification,nonatomic,readonly) BOOL displayingNotification; 
@property (nonatomic,readonly) BOOL shouldBorrowScreen; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)isDisplayingNotification;
-(BOOL)shouldBorrowScreen;
@end

