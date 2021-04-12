/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@class NCNotificationRequest, NSMutableArray, NSMutableOrderedSet, NSMutableDictionary, NSString, NSArray;

@interface NCNotificationSummaryBuilder : NSObject {

	NCNotificationRequest* _leadingNotificationRequest;
	NSMutableArray* _notificationRequests;
	NSMutableOrderedSet* _formatStrings;
	NSMutableDictionary* _formatStringsCounts;
	NSMutableOrderedSet* _arguments;
	NSMutableDictionary* _argumentsCounts;
	unsigned long long _defaultFormatsCount;
	unsigned long long _emptyArgumentsCount;
	NSString* _summaryText;

}

@property (nonatomic,copy,readonly) NSString * summaryText;                 //@synthesize summaryText=_summaryText - In the implementation block
@property (nonatomic,readonly) NSArray * notificationRequests;              //@synthesize notificationRequests=_notificationRequests - In the implementation block
-(id)description;
-(NSString *)summaryText;
-(void)_updateSummaryText;
-(NSArray *)notificationRequests;
-(void)_addNotificationRequest:(id)arg1 ;
-(void)_insertString:(id)arg1 intoSequence:(id)arg2 withCounters:(id)arg3 ;
-(id)_buildSummaryText;
-(unsigned long long)_summaryNotificationsCount;
-(id)_localizedSummaryWithFormat:(id)arg1 notificationsCount:(unsigned long long)arg2 arguments:(id)arg3 ;
-(id)_localizedSummaryWithFormats:(id)arg1 andCounts:(id)arg2 ;
-(id)_defaultLocalizedSummaryWithNotificationsCount:(unsigned long long)arg1 arguments:(id)arg2 ;
-(id)_defaultLocalizedSummaryWithNotificationsCount:(unsigned long long)arg1 ;
-(id)_formatListWithArguments:(id)arg1 ;
-(id)_filteredArgumentsArrayWithArguments:(id)arg1 ;
-(id)_formatListWithArguments:(id)arg1 truncated:(BOOL)arg2 truncatedArgumentsCount:(unsigned long long*)arg3 ;
-(void)updateWithNotificationRequests:(id)arg1 ;
@end

