/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBNotificationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,retain) NSArray * displayIDsWithBadgingEnabled; 
@property (nonatomic,readonly) BOOL alwaysAllowDefaultAction; 
@property (nonatomic,readonly) BOOL alwaysAllowLongLookGesture; 
@property (nonatomic,readonly) BOOL dontSuppressForPrivacyWhenUnlocked; 
@property (nonatomic,readonly) BOOL shouldTestBannerPlayTextTone; 
@property (nonatomic,readonly) BOOL alwaysSpeakNotifications; 
@property (nonatomic,readonly) NSArray * legacyAlarmList; 
+(id)standardDefaults;
-(void)setAlwaysSpeakNotifications:(BOOL)arg1 ;
-(BOOL)alwaysSpeakNotifications;
-(void)setLegacyAlarmList:(NSArray *)arg1 ;
-(NSArray *)legacyAlarmList;
-(void)setAlwaysAllowLongLookGesture:(BOOL)arg1 ;
-(BOOL)alwaysAllowLongLookGesture;
-(void)setDisplayIDsWithBadgingEnabled:(NSArray *)arg1 ;
-(NSArray *)displayIDsWithBadgingEnabled;
-(void)setShouldTestBannerPlayTextTone:(BOOL)arg1 ;
-(BOOL)shouldTestBannerPlayTextTone;
-(void)setAlwaysAllowDefaultAction:(BOOL)arg1 ;
-(BOOL)alwaysAllowDefaultAction;
-(void)setDontSuppressForPrivacyWhenUnlocked:(BOOL)arg1 ;
-(BOOL)dontSuppressForPrivacyWhenUnlocked;
-(void)_bindAndRegisterDefaults;
@end

