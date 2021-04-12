/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/VCSyncDataHandling.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSArray, NSString;

@interface VCSyncDataHandler : NSObject <VCSyncDataHandling> {

	NSHashTable* _servicesTable;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSHashTable * servicesTable;                     //@synthesize servicesTable=_servicesTable - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * services; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)messageType;
+(Class)changeClass;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSArray *)services;
-(void)requestSync;
-(void)requestFullResync;
-(void)registerSyncService:(id)arg1 ;
-(void)deregisterSyncService:(id)arg1 ;
-(BOOL)applyChanges:(id)arg1 fromSyncService:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteSyncedData:(id*)arg1 ;
-(id)unsyncedChangesForSyncService:(id)arg1 metadata:(id*)arg2 error:(id*)arg3 ;
-(BOOL)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(BOOL)resetSyncStateForService:(id)arg1 error:(id*)arg2 ;
-(NSHashTable *)servicesTable;
@end

