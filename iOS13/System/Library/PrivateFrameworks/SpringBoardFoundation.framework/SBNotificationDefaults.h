/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBNotificationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,retain) NSArray * displayIDsWithBadgingEnabled; 
@property (nonatomic,readonly) BOOL alwaysPerformDefaultAction; 
@property (nonatomic,readonly) BOOL dontSuppressForPrivacyWhenUnlocked; 
@property (nonatomic,readonly) BOOL shouldTestBannerPlayTextTone; 
@property (nonatomic,readonly) BOOL alwaysSpeakNotifications; 
@property (nonatomic,readonly) NSArray * legacyAlarmList; 
+(id)standardDefaults;
-(void)setAlwaysSpeakNotifications:(BOOL)arg1 ;
-(BOOL)alwaysSpeakNotifications;
-(void)setShouldTestBannerPlayTextTone:(BOOL)arg1 ;
-(BOOL)shouldTestBannerPlayTextTone;
-(void)setDisplayIDsWithBadgingEnabled:(NSArray *)arg1 ;
-(NSArray *)displayIDsWithBadgingEnabled;
-(void)setDontSuppressForPrivacyWhenUnlocked:(BOOL)arg1 ;
-(BOOL)dontSuppressForPrivacyWhenUnlocked;
-(void)setAlwaysPerformDefaultAction:(BOOL)arg1 ;
-(BOOL)alwaysPerformDefaultAction;
-(void)setLegacyAlarmList:(NSArray *)arg1 ;
-(NSArray *)legacyAlarmList;
-(void)_bindAndRegisterDefaults;
@end

