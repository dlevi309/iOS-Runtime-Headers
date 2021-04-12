/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableDictionary;

@interface CKDArchiveRecordsURLRequest : CKDURLRequest {

	/*^block*/id _recordArchivedBlock;
	NSMutableDictionary* _zoneIDToRecordIDs;
	NSMutableDictionary* _recordZoneIDByRequestID;

}

@property (nonatomic,retain) NSMutableDictionary * zoneIDToRecordIDs;                    //@synthesize zoneIDToRecordIDs=_zoneIDToRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneIDByRequestID;              //@synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID - In the implementation block
@property (nonatomic,copy) id recordArchivedBlock;                                       //@synthesize recordArchivedBlock=_recordArchivedBlock - In the implementation block
-(int)operationType;
-(id)recordArchivedBlock;
-(void)setRecordArchivedBlock:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(NSMutableDictionary *)zoneIDToRecordIDs;
-(NSMutableDictionary *)recordZoneIDByRequestID;
-(id)initWithRecordIDsToArchive:(id)arg1 ;
-(void)setZoneIDToRecordIDs:(NSMutableDictionary *)arg1 ;
-(void)setRecordZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
@end

