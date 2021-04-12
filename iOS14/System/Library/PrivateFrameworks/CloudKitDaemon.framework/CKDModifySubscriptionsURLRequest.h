/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)subscriptionsToSave;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(CKRecordZoneID *)zoneID;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)initWithOperation:(id)arg1 subscriptionsToSave:(id)arg2 subscriptionIDsToDelete:(id)arg3 ;
-(void)setSubscriptionIDByRequestID:(NSMutableDictionary *)arg1 ;
-(id)subscriptionModifiedBlock;
-(id)generateRequestOperations;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(NSArray *)subscriptionIDsToDelete;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setSubscriptionModifiedBlock:(id)arg1 ;
-(NSMutableDictionary *)subscriptionIDByRequestID;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
@end

