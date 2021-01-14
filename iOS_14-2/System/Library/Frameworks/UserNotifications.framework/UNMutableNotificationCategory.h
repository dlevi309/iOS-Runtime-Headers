/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <UserNotifications/UNNotificationCategory.h>

@class NSArray, NSString, UNNotificationAction;

@interface UNMutableNotificationCategory : UNNotificationCategory

@property (assign,nonatomic) unsigned long long options; 
@property (nonatomic,copy) NSArray * actions; 
@property (nonatomic,copy) NSArray * minimalActions; 
@property (nonatomic,copy) NSArray * intentIdentifiers; 
@property (nonatomic,copy) NSString * hiddenPreviewsBodyPlaceholder; 
@property (nonatomic,copy) NSString * categorySummaryFormat; 
@property (nonatomic,copy) NSString * actionsMenuTitle; 
@property (nonatomic,copy) UNNotificationAction * alternateAction; 
@property (assign,nonatomic) unsigned long long backgroundStyle; 
@property (assign,nonatomic) unsigned long long listPriority; 
-(void)setActions:(NSArray *)arg1 ;
-(void)setAlternateAction:(UNNotificationAction *)arg1 ;
-(void)setCategorySummaryFormat:(NSString *)arg1 ;
-(void)setActionsMenuTitle:(NSString *)arg1 ;
-(void)setMinimalActions:(NSArray *)arg1 ;
-(void)setHiddenPreviewsBodyPlaceholder:(NSString *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(void)setListPriority:(unsigned long long)arg1 ;
-(void)setIntentIdentifiers:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

