/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>
#import <libobjc.A.dylib/CKDURLRequestPipelining.h>

@class NSArray, NSDictionary, NSSet, NSMutableDictionary, NSString;

@interface CKDFetchArchivedRecordsURLRequest : CKDURLRequest <CKDURLRequestPipelining> {

	BOOL _shouldFetchAssetContent;
	NSArray* _recordZoneIDs;
	NSDictionary* _configurationsByRecordZoneID;
	NSSet* _desiredAssetKeys;
	/*^block*/id _recordFetchedBlock;
	NSMutableDictionary* _zoneIDsByRequestOperationUUID;
	NSMutableDictionary* _requestResultsByRecordZoneID;
	NSMutableDictionary* _nodeErrorsByZoneID;

}

@property (nonatomic,copy) NSArray * recordZoneIDs;                                            //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * configurationsByRecordZoneID;                      //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zoneIDsByRequestOperationUUID;              //@synthesize zoneIDsByRequestOperationUUID=_zoneIDsByRequestOperationUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestResultsByRecordZoneID;               //@synthesize requestResultsByRecordZoneID=_requestResultsByRecordZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nodeErrorsByZoneID;                         //@synthesize nodeErrorsByZoneID=_nodeErrorsByZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                     //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSSet * desiredAssetKeys;                                         //@synthesize desiredAssetKeys=_desiredAssetKeys - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                              //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,readonly) NSDictionary * resultsByRecordZoneID; 
@property (nonatomic,readonly) NSDictionary * zoneErrorsByZoneID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)recordZoneIDs;
-(BOOL)shouldFetchAssetContent;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)generateRequestOperations;
-(id)recordFetchedBlock;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSDictionary *)configurationsByRecordZoneID;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(void)setDesiredAssetKeys:(NSSet *)arg1 ;
-(NSSet *)desiredAssetKeys;
-(NSMutableDictionary *)nodeErrorsByZoneID;
-(NSMutableDictionary *)requestResultsByRecordZoneID;
-(NSMutableDictionary *)zoneIDsByRequestOperationUUID;
-(id)_handleRecords:(id)arg1 ;
-(id)initWithOperation:(id)arg1 recordZoneIDs:(id)arg2 configurationsByRecordZoneID:(id)arg3 ;
-(NSDictionary *)zoneErrorsByZoneID;
-(NSDictionary *)resultsByRecordZoneID;
-(void)setZoneIDsByRequestOperationUUID:(NSMutableDictionary *)arg1 ;
-(void)setRequestResultsByRecordZoneID:(NSMutableDictionary *)arg1 ;
-(void)setNodeErrorsByZoneID:(NSMutableDictionary *)arg1 ;
@end

