/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>
#import <libobjc.A.dylib/CKDURLRequestPipelining.h>

@class NSMutableArray, NSData, CKRecordZoneID, NSArray, NSString;

@interface CKDFetchDatabaseChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining> {

	NSMutableArray* _changedZoneIDs;
	NSMutableArray* _deletedZoneIDs;
	NSMutableArray* _purgedZoneIDs;
	unsigned long long _resultsLimit;
	NSData* _serverChangeTokenData;
	long long _status;
	/*^block*/id _zoneChangedBlock;
	/*^block*/id _zoneDeletedBlock;
	/*^block*/id _zonePurgedBlock;
	CKRecordZoneID* _recordZoneID;
	NSData* _previousServerChangeTokenData;

}

@property (nonatomic,retain) CKRecordZoneID * recordZoneID;                       //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,retain) NSData * previousServerChangeTokenData;              //@synthesize previousServerChangeTokenData=_previousServerChangeTokenData - In the implementation block
@property (nonatomic,retain) NSData * serverChangeTokenData;                      //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
@property (assign,nonatomic) long long status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                     //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,readonly) NSArray * changedZoneIDs;                          //@synthesize changedZoneIDs=_changedZoneIDs - In the implementation block
@property (nonatomic,readonly) NSArray * deletedZoneIDs;                          //@synthesize deletedZoneIDs=_deletedZoneIDs - In the implementation block
@property (nonatomic,readonly) NSArray * purgedZoneIDs;                           //@synthesize purgedZoneIDs=_purgedZoneIDs - In the implementation block
@property (nonatomic,copy) id zoneChangedBlock;                                   //@synthesize zoneChangedBlock=_zoneChangedBlock - In the implementation block
@property (nonatomic,copy) id zoneDeletedBlock;                                   //@synthesize zoneDeletedBlock=_zoneDeletedBlock - In the implementation block
@property (nonatomic,copy) id zonePurgedBlock;                                    //@synthesize zonePurgedBlock=_zonePurgedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)status;
-(int)operationType;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(CKRecordZoneID *)recordZoneID;
-(NSArray *)changedZoneIDs;
-(NSArray *)deletedZoneIDs;
-(NSData *)serverChangeTokenData;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)allowsAnonymousAccount;
-(NSData *)previousServerChangeTokenData;
-(id)zoneChangedBlock;
-(id)zonePurgedBlock;
-(id)zoneDeletedBlock;
-(id)initWithPreviousServerChangeTokenData:(id)arg1 ;
-(NSArray *)purgedZoneIDs;
-(void)setZoneChangedBlock:(id)arg1 ;
-(void)setZoneDeletedBlock:(id)arg1 ;
-(void)setZonePurgedBlock:(id)arg1 ;
-(void)setPreviousServerChangeTokenData:(NSData *)arg1 ;
@end

