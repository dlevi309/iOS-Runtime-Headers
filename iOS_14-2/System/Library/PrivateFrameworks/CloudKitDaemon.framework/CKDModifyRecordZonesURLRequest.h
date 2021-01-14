/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)recordZoneIDsToDelete;
-(BOOL)markZonesAsUserPurged;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(NSArray *)recordZonesToSave;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setLastMissingManateeIdentityErrorDate:(NSDate *)arg1 ;
-(NSDate *)lastMissingManateeIdentityErrorDate;
-(id)initWithOperation:(id)arg1 recordZonesToSave:(id)arg2 recordZoneIDsToDelete:(id)arg3 ;
-(void)setRecordZoneModifiedBlock:(id)arg1 ;
-(NSMutableDictionary *)recordZoneIDByRequestID;
-(void)setRecordZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
-(id)recordZoneModifiedBlock;
@end

