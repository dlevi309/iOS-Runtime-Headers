/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/


@class NSMutableDictionary;

@interface NCNotificationStore : NSObject {

	NSMutableDictionary* _notificationSections;

}

@property (nonatomic,retain) NSMutableDictionary * notificationSections;                  //@synthesize notificationSections=_notificationSections - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionsCount; 
@property (nonatomic,readonly) unsigned long long notificationRequestsCount; 
-(id)init;
-(unsigned long long)sectionsCount;
-(BOOL)addNotificationRequest:(id)arg1 ;
-(BOOL)removeNotificationRequest:(id)arg1 ;
-(BOOL)replaceNotificationRequest:(id)arg1 ;
-(NSMutableDictionary *)notificationSections;
-(unsigned long long)notificationRequestsCount;
-(id)notificationRequestMatchingNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)setNotificationSections:(NSMutableDictionary *)arg1 ;
@end

