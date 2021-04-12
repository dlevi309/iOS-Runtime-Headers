/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDGetRecordZonesURLRequest : CKDURLRequest {

	BOOL _onlyFetchPCSInfo;
	NSArray* _recordZones;
	/*^block*/id _recordZoneFetchedBlock;
	NSArray* _zoneIDs;
	NSMutableDictionary* _zoneIDByRequestID;

}

@property (nonatomic,retain) NSArray * zoneIDs;                                    //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zoneIDByRequestID;              //@synthesize zoneIDByRequestID=_zoneIDByRequestID - In the implementation block
@property (nonatomic,readonly) NSArray * recordZones;                              //@synthesize recordZones=_recordZones - In the implementation block
@property (assign,nonatomic) BOOL onlyFetchPCSInfo;                                //@synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo - In the implementation block
@property (nonatomic,copy) id recordZoneFetchedBlock;                              //@synthesize recordZoneFetchedBlock=_recordZoneFetchedBlock - In the implementation block
-(int)operationType;
-(NSArray *)recordZones;
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(id)initWithRecordZoneIDs:(id)arg1 ;
-(void)setOnlyFetchPCSInfo:(BOOL)arg1 ;
-(BOOL)onlyFetchPCSInfo;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)allowsAnonymousAccount;
-(id)zoneIDsToLock;
-(void)setRecordZoneFetchedBlock:(id)arg1 ;
-(NSMutableDictionary *)zoneIDByRequestID;
-(id)recordZoneFetchedBlock;
-(void)setZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
@end

