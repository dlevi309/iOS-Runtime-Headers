/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <UserNotificationsUIKit/NCNotificationRequestContentProvider.h>

@class NSNumberFormatter, NCNotificationSummaryBuilder, NSMutableArray;

@interface NCNotificationRequestCoalescingContentProvider : NCNotificationRequestContentProvider {

	NSNumberFormatter* _decimalFormatter;
	NCNotificationSummaryBuilder* _summaryBuilder;
	BOOL _deviceAuthenticated;
	NSMutableArray* _coalescedNotificationRequests;
	NCNotificationSummaryBuilder* _overridenSummaryBuilder;

}

@property (nonatomic,retain) NSMutableArray * coalescedNotificationRequests;                      //@synthesize coalescedNotificationRequests=_coalescedNotificationRequests - In the implementation block
@property (assign,getter=isDeviceAuthenticated,nonatomic) BOOL deviceAuthenticated;               //@synthesize deviceAuthenticated=_deviceAuthenticated - In the implementation block
@property (nonatomic,retain) NCNotificationSummaryBuilder * overridenSummaryBuilder;              //@synthesize overridenSummaryBuilder=_overridenSummaryBuilder - In the implementation block
-(BOOL)isDeviceAuthenticated;
-(void)setDeviceAuthenticated:(BOOL)arg1 ;
-(id)init;
-(id)thumbnail;
-(id)summaryText;
-(id)primaryText;
-(BOOL)_shouldShowContent;
-(id)secondaryText;
-(void)_updateSummaryText;
-(id)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(id)primarySubtitleText;
-(unsigned long long)coalesceCount;
-(NSMutableArray *)coalescedNotificationRequests;
-(unsigned long long)_indexOfMatchingNotificationRequest:(id)arg1 ;
-(BOOL)_shouldShowNotificationBody;
-(id)_placeholderSecondaryText;
-(NCNotificationSummaryBuilder *)overridenSummaryBuilder;
-(id)_localizedStringWithPlaceholderFormat:(id)arg1 count:(unsigned long long)arg2 ;
-(void)coalesceNotificationRequest:(id)arg1 ;
-(void)removeCoalescedNotificationRequest:(id)arg1 ;
-(void)updateCoalescedNotificationRequest:(id)arg1 ;
-(BOOL)containsMatchingCoalescedNotificationRequest:(id)arg1 ;
-(void)setCoalescedNotificationRequests:(NSMutableArray *)arg1 ;
-(void)setOverridenSummaryBuilder:(NCNotificationSummaryBuilder *)arg1 ;
@end

