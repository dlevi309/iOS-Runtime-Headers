/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordZoneID, NSArray, NSMutableDictionary;

@interface CKDModifySubscriptionsURLRequest : CKDURLRequest {

	CKRecordZoneID* _zoneID;
	/*^block*/id _subscriptionModifiedBlock;
	NSArray* _subscriptionsToSave;
	NSArray* _subscriptionIDsToDelete;
	NSMutableDictionary* _subscriptionIDByRequestID;

}

@property (nonatomic,retain) NSArray * subscriptionsToSave;                                //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDsToDelete;                            //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionIDByRequestID;              //@synthesize subscriptionIDByRequestID=_subscriptionIDByRequestID - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * zoneID;                                        //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,copy) id subscriptionModifiedBlock;                                   //@synthesize subscriptionModifiedBlock=_subscriptionModifiedBlock - In the implementation block
-(int)operationType;
-(CKRecordZoneID *)zoneID;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 ;
-(NSArray *)subscriptionsToSave;
-(NSArray *)subscriptionIDsToDelete;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setSubscriptionModifiedBlock:(id)arg1 ;
-(id)subscriptionModifiedBlock;
-(NSMutableDictionary *)subscriptionIDByRequestID;
-(void)setSubscriptionIDByRequestID:(NSMutableDictionary *)arg1 ;
@end

