/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/

#import <libobjc.A.dylib/TRIStorageManagementProtocol.h>

@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>
-(BOOL)requestTrialStorageResetOnNextLaunch;
-(BOOL)prepareTrialStorage;
-(BOOL)_readSchemaVersion:(unsigned*)arg1 ;
-(BOOL)_readDeviceIdWithSchemaVersion:(unsigned)arg1 intoData:(id*)arg2 ;
-(BOOL)_clearStorage;
-(BOOL)_writeDeviceIdWithData:(id)arg1 schemaVersion:(unsigned)arg2 ;
-(BOOL)_writeSchemaVersion:(unsigned)arg1 ;
-(BOOL)_clearContainerStorage;
-(BOOL)_runNamespaceDatabaseBlock:(/*^block*/id)arg1 ;
@end

