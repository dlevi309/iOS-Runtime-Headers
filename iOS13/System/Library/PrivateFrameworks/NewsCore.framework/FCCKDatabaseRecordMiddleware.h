/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCCKDatabaseRecordMiddleware <NSObject>
@required
-(id)clientToServerRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
-(id)serverToClientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
-(id)clientToServerRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
-(id)serverToClientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
-(id)clientToServerRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
-(id)serverToClientRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
-(id)clientToServerRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
-(id)serverToClientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
-(id)clientToServerRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
-(id)serverToClientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;

@end

