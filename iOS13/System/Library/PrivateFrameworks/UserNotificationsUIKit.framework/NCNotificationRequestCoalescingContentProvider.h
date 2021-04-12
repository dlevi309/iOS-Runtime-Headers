/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)thumbnail;
-(id)primaryText;
-(id)secondaryText;
-(id)summaryText;
-(void)_updateSummaryText;
-(BOOL)_shouldShowContent;
-(id)primarySubtitleText;
-(id)notificationRequest;
-(void)setDeviceAuthenticated:(BOOL)arg1 ;
-(id)initWithNotificationRequest:(id)arg1 ;
-(BOOL)isDeviceAuthenticated;
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

