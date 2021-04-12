/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneClientSettings.h>
#import <libobjc.A.dylib/SBSUIStarkNotificationsSceneClientSettings.h>

@class NSString;

@interface SBSUIMutableStarkNotificationsSceneClientSettings : UIMutableApplicationSceneClientSettings <SBSUIStarkNotificationsSceneClientSettings>

@property (assign,getter=isDisplayingNotification,nonatomic) BOOL displayingNotification; 
@property (assign,nonatomic) BOOL shouldBorrowScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)isDisplayingNotification;
-(BOOL)shouldBorrowScreen;
-(void)setDisplayingNotification:(BOOL)arg1 ;
-(void)setShouldBorrowScreen:(BOOL)arg1 ;
@end

