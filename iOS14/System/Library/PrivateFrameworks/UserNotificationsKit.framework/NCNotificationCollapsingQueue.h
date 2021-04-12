/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/


@class NSMutableArray, NSArray;

@interface NCNotificationCollapsingQueue : NSObject {

	unsigned long long _collapsingThreshold;
	NSMutableArray* _requests;

}

@property (nonatomic,retain) NSMutableArray * requests;                           //@synthesize requests=_requests - In the implementation block
@property (assign,nonatomic) unsigned long long collapsingThreshold;              //@synthesize collapsingThreshold=_collapsingThreshold - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * enqueuedRequestIdentifiers; 
-(id)_collapsedNotificationRequestForNotificationRequest:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeNotificationRequest:(id)arg1 ;
-(id)init;
-(NSArray *)enqueuedRequestIdentifiers;
-(id)_collapsedNotificationRequestFromCollapsibleRequests:(id)arg1 ;
-(void)replaceNotificationRequest:(id)arg1 ;
-(BOOL)containsNotificationRequestMatchingRequest:(id)arg1 ;
-(unsigned long long)count;
-(id)peekNextNotificationRequestPassingTest:(/*^block*/id)arg1 ;
-(id)peekNextNotificationRequest;
-(NSMutableArray *)requests;
-(unsigned long long)collapsingThreshold;
-(id)notificationRequestsCoalescebleWithCoalescedRequest:(id)arg1 ;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(id)_requestsCollapsibleWithNotificationRequest:(id)arg1 ;
-(unsigned long long)_collapsedCountForCollapsibleRequests:(id)arg1 ;
-(unsigned long long)_indexOfRequestMatchingNotificationRequest:(id)arg1 ;
-(void)addNotificationRequest:(id)arg1 ;
-(void)_insertPreemptingNotificationRequest:(id)arg1 ;
-(BOOL)containsNotificationRequest:(id)arg1 ;
-(void)setCollapsingThreshold:(unsigned long long)arg1 ;
@end

