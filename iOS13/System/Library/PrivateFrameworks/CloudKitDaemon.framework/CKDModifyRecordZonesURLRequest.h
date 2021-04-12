/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSDate, NSArray, NSMutableDictionary;

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest {

	BOOL _markZonesAsUserPurged;
	NSDate* _lastMissingManateeIdentityErrorDate;
	/*^block*/id _recordZoneModifiedBlock;
	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	NSMutableDictionary* _recordZoneIDByRequestID;

}

@property (nonatomic,retain) NSArray * recordZonesToSave;                                //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDsToDelete;                            //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneIDByRequestID;              //@synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID - In the implementation block
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                                 //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (nonatomic,retain) NSDate * lastMissingManateeIdentityErrorDate;               //@synthesize lastMissingManateeIdentityErrorDate=_lastMissingManateeIdentityErrorDate - In the implementation block
@property (nonatomic,copy) id recordZoneModifiedBlock;                                   //@synthesize recordZoneModifiedBlock=_recordZoneModifiedBlock - In the implementation block
-(int)operationType;
-(id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2 ;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(NSArray *)recordZonesToSave;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(NSArray *)recordZoneIDsToDelete;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(BOOL)markZonesAsUserPurged;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)setLastMissingManateeIdentityErrorDate:(NSDate *)arg1 ;
-(NSDate *)lastMissingManateeIdentityErrorDate;
-(void)setRecordZoneModifiedBlock:(id)arg1 ;
-(NSMutableDictionary *)recordZoneIDByRequestID;
-(void)setRecordZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
-(id)recordZoneModifiedBlock;
@end

