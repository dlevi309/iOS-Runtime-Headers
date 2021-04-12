/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)operationType;
-(NSMutableArray *)subscriptions;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(id)initWithSubscriptionIDs:(id)arg1 ;
-(NSArray *)subscriptionIDs;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSMutableDictionary *)subscriptionIDByRequestID;
-(void)setSubscriptionIDByRequestID:(NSMutableDictionary *)arg1 ;
-(id)subscriptionFetchedBlock;
-(void)setSubscriptionFetchedBlock:(id)arg1 ;
@end

