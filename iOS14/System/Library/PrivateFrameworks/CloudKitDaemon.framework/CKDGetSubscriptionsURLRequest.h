/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableArray, NSArray, NSMutableDictionary;

@interface CKDGetSubscriptionsURLRequest : CKDURLRequest {

	NSMutableArray* _subscriptions;
	/*^block*/id _subscriptionFetchedBlock;
	NSArray* _subscriptionIDs;
	NSMutableDictionary* _subscriptionIDByRequestID;

}

@property (nonatomic,retain) NSArray * subscriptionIDs;                                    //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscriptions;                               //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionIDByRequestID;              //@synthesize subscriptionIDByRequestID=_subscriptionIDByRequestID - In the implementation block
@property (nonatomic,copy) id subscriptionFetchedBlock;                                    //@synthesize subscriptionFetchedBlock=_subscriptionFetchedBlock - In the implementation block
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)subscriptions;
-(void)setSubscriptionFetchedBlock:(id)arg1 ;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(NSArray *)subscriptionIDs;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(void)setSubscriptionIDByRequestID:(NSMutableDictionary *)arg1 ;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(id)initWithOperation:(id)arg1 subscriptionIDs:(id)arg2 ;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)subscriptionFetchedBlock;
-(NSMutableDictionary *)subscriptionIDByRequestID;
@end

