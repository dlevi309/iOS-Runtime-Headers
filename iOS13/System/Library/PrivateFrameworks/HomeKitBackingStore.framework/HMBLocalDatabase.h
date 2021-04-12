/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMBLocalDatabaseDelegate;
@class HMBModelContainer, NSOperationQueue, HMBLocalSQLContext, HMFUnfairLock, NSMapTable, NSString;

@interface HMBLocalDatabase : HMFObject <HMFLogging> {

	HMBModelContainer* _modelContainer;
	id<HMBLocalDatabaseDelegate> _delegate;
	NSOperationQueue* _queue;
	HMBLocalSQLContext* _local;
	HMFUnfairLock* _lock;
	NSMapTable* _openZonesByZoneID;
	/*^block*/id _localZoneFactory;

}

@property (nonatomic,retain) NSOperationQueue * queue;                                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) HMBLocalSQLContext * local;                                //@synthesize local=_local - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;                                    //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NSMapTable * openZonesByZoneID;                          //@synthesize openZonesByZoneID=_openZonesByZoneID - In the implementation block
@property (nonatomic,copy) id localZoneFactory;                                         //@synthesize localZoneFactory=_localZoneFactory - In the implementation block
@property (nonatomic,readonly) HMBModelContainer * modelContainer;                      //@synthesize modelContainer=_modelContainer - In the implementation block
@property (assign,nonatomic,__weak) id<HMBLocalDatabaseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)queue;
-(id<HMBLocalDatabaseDelegate>)delegate;
-(void)setDelegate:(id<HMBLocalDatabaseDelegate>)arg1 ;
-(HMFUnfairLock *)lock;
-(HMBLocalSQLContext *)local;
-(void)setLocal:(HMBLocalSQLContext *)arg1 ;
-(id)logIdentifier;
-(HMBModelContainer *)modelContainer;
-(void)handleLocalZoneShutdown:(id)arg1 ;
-(BOOL)shouldLogPrivateInformation;
-(id)initWithLocalSQLContext:(id)arg1 modelContainer:(id)arg2 ;
-(BOOL)removeLocalDataForZone:(id)arg1 error:(id*)arg2 ;
-(NSMapTable *)openZonesByZoneID;
-(id)initWithDatastorePath:(id)arg1 readOnly:(BOOL)arg2 modelContainer:(id)arg3 ;
-(id)fetchZonesWithError:(id*)arg1 ;
-(id)openOrCreateZoneWithZoneID:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)openExistingZoneWithZoneID:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)openedZoneWithZoneID:(id)arg1 ;
-(id)openOrCreateZoneWithMirror:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)openExistingZoneWithMirror:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)openedZoneWithMirror:(id)arg1 ;
-(id)removeZone:(id)arg1 ;
-(id)localZoneFactory;
-(void)setLocalZoneFactory:(id)arg1 ;
-(void)detectedLocalCorruptionWithInfo:(id)arg1 ;
@end

