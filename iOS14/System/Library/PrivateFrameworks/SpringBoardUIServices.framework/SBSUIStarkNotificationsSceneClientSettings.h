/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (getter=isDisplayingNotification,nonatomic,readonly) BOOL displayingNotification; 
@property (nonatomic,readonly) BOOL shouldBorrowScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isDisplayingNotification;
-(BOOL)shouldBorrowScreen;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
@end

