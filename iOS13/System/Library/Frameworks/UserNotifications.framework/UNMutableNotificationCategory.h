/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationCategory.h>

@class NSArray, UNNotificationAction, NSString;

@interface UNMutableNotificationCategory : UNNotificationCategory

@property (assign,nonatomic) unsigned long long options; 
@property (assign,nonatomic) unsigned long long backgroundStyle; 
@property (assign,nonatomic) unsigned long long listPriority; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,copy) NSArray * minimalActions; 
@property (nonatomic,copy) UNNotificationAction * alternateAction; 
@property (nonatomic,copy) NSArray * intentIdentifiers; 
@property (nonatomic,copy) NSString * hiddenPreviewsBodyPlaceholder; 
@property (nonatomic,copy) NSString * categorySummaryFormat; 
@property (nonatomic,copy) NSString * actionsMenuTitle; 
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setMinimalActions:(NSArray *)arg1 ;
-(void)setAlternateAction:(UNNotificationAction *)arg1 ;
-(void)setIntentIdentifiers:(NSArray *)arg1 ;
-(void)setHiddenPreviewsBodyPlaceholder:(NSString *)arg1 ;
-(void)setCategorySummaryFormat:(NSString *)arg1 ;
-(void)setActionsMenuTitle:(NSString *)arg1 ;
-(void)setListPriority:(unsigned long long)arg1 ;
@end

