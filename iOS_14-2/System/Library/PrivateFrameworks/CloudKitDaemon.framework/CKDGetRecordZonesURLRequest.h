/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDGetRecordZonesURLRequest : CKDURLRequest {

	BOOL _onlyFetchPCSInfo;
	NSArray* _recordZones;
	/*^block*/id _recordZoneFetchedBlock;
	/*^block*/id _errorFetchingAllRecordZonesBlock;
	NSArray* _zoneIDs;
	NSMutableDictionary* _zoneIDByRequestID;

}

@property (nonatomic,retain) NSArray * zoneIDs;                                    //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zoneIDByRequestID;              //@synthesize zoneIDByRequestID=_zoneIDByRequestID - In the implementation block
@property (nonatomic,readonly) NSArray * recordZones;                              //@synthesize recordZones=_recordZones - In the implementation block
@property (assign,nonatomic) BOOL onlyFetchPCSInfo;                                //@synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo - In the implementation block
@property (nonatomic,copy) id recordZoneFetchedBlock;                              //@synthesize recordZoneFetchedBlock=_recordZoneFetchedBlock - In the implementation block
@property (nonatomic,copy) id errorFetchingAllRecordZonesBlock;                    //@synthesize errorFetchingAllRecordZonesBlock=_errorFetchingAllRecordZonesBlock - In the implementation block
-(void)setOnlyFetchPCSInfo:(BOOL)arg1 ;
-(NSArray *)zoneIDs;
-(id)recordZoneFetchedBlock;
-(id)initWithOperation:(id)arg1 recordZoneIDs:(id)arg2 ;
-(BOOL)allowsAnonymousAccount;
-(id)zoneIDsToLock;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)errorFetchingAllRecordZonesBlock;
-(BOOL)onlyFetchPCSInfo;
-(id)generateRequestOperations;
-(NSArray *)recordZones;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(void)setRecordZoneFetchedBlock:(id)arg1 ;
-(void)setZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
-(void)setErrorFetchingAllRecordZonesBlock:(id)arg1 ;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(NSMutableDictionary *)zoneIDByRequestID;
@end

