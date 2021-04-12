/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)generateRequestOperations;
-(id)recordArchivedBlock;
-(void)setRecordArchivedBlock:(id)arg1 ;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(NSMutableDictionary *)zoneIDToRecordIDs;
-(NSMutableDictionary *)recordZoneIDByRequestID;
-(id)initWithOperation:(id)arg1 recordIDsToArchive:(id)arg2 ;
-(void)setZoneIDToRecordIDs:(NSMutableDictionary *)arg1 ;
-(void)setRecordZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
@end

