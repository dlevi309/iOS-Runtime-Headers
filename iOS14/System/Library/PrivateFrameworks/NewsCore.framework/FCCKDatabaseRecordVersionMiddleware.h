/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCKDatabaseRecordMiddleware.h>
#import <libobjc.A.dylib/FCCKDatabaseOperationMiddleware.h>

@class NSString;

@interface FCCKDatabaseRecordVersionMiddleware : NSObject <FCCKDatabaseRecordMiddleware, FCCKDatabaseOperationMiddleware>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serverToClientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)serverToClientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)serverToClientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
-(id)serverToClientRecord:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(id)serverToClientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
-(long long)database:(id)arg1 willEnqueueOperation:(id)arg2 error:(id*)arg3 ;
-(id)clientToServerRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4 ;
-(id)clientToServerRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
@end

