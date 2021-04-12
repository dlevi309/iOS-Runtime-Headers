/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@interface ATXAnchor : NSObject
+(long long)anchorType;
+(Class)supportedDuetDataProviderClass;
+(id)duetEventsPredicates;
+(BOOL)shouldPredicateOnStartDate;
+(id)keyPathForContextStore;
+(id)predicateForContextStoreRegistration;
+(BOOL)shouldProcessContextStoreNotification;
+(id)sampleEvent;
+(id)anchorOccurenceDateFromDuetEvent:(id)arg1 ;
+(BOOL)shouldProcessContextStoreNotificationForDict;
+(BOOL)shouldProcessContextStoreNotificationForNumber;
+(id)fetchAnchorOccurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
+(int)pbAnchorEventTypeFromDuetEvent:(id)arg1 ;
+(id)anchorTypeToString:(long long)arg1 ;
-(id)description;
@end

