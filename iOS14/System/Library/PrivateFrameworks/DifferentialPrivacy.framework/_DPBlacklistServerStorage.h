/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <libobjc.A.dylib/_DPMaintenance.h>

@protocol OS_xpc_object;
@class NSObject, NSDate;

@interface _DPBlacklistServerStorage : NSObject <_DPMaintenance> {

	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,retain) NSDate * lastUpdateDate; 
@property (assign,nonatomic,__weak) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
-(NSDate *)lastUpdateDate;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2 ;
-(BOOL)requestLatestBlacklistsSynchronously:(id*)arg1 error:(id*)arg2 lastRecordModifiedAt:(id*)arg3 ;
-(BOOL)prepareRuntimeBlacklistFolder:(id*)arg1 ;
-(id)saveBlacklistsToRuntimeFolder:(id)arg1 ;
-(void)_requestLatestBlacklists:(/*^block*/id)arg1 ;
-(BOOL)updateRuntimeBlacklistsFromServer;
-(id)_predicateForFetchQuery;
-(void)_attributeQueryOperation:(id)arg1 ;
-(id)_queryOperationFromCursor:(id)arg1 ;
-(void)_executeQueryOperation:(id)arg1 onOperationQueue:(id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(id)_blacklistURLByKeyFrom:(id)arg1 ;
-(id)_publicDatabaseForBlacklists;
@end

