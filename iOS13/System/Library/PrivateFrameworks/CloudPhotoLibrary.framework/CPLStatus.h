/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol OS_dispatch_queue, CPLStatusDelegate;
@class NSURL, NSMutableDictionary, NSObject, NSDate, NSData, NSArray, NSDictionary, CPLAccountFlags;

@interface CPLStatus : NSObject {

	BOOL _forCPL;
	NSURL* _statusFileURL;
	NSMutableDictionary* _status;
	NSObject*<OS_dispatch_queue> _lock;
	id<CPLStatusDelegate> _delegate;

}

@property (nonatomic,copy) NSDate * lastCompletePrefetchDate; 
@property (nonatomic,copy) NSDate * lastPruneDate; 
@property (assign,nonatomic) BOOL hasChangesToProcess; 
@property (assign,nonatomic) BOOL iCloudLibraryClientVersionTooOld; 
@property (nonatomic,copy) NSDate * lastSuccessfulSyncDate; 
@property (nonatomic,copy) NSDate * initialSyncDate; 
@property (assign,nonatomic) BOOL isExceedingQuota; 
@property (nonatomic,copy) NSDate * exitDeleteTime; 
@property (assign,nonatomic) BOOL iCloudLibraryHasBeenWiped; 
@property (assign,nonatomic) BOOL iCloudLibraryExists; 
@property (nonatomic,copy) NSData * accountFlagsData; 
@property (nonatomic,readonly) NSDate * cloudAssetCountPerTypeLastCheckDate; 
@property (assign,nonatomic) BOOL lowDiskSpace; 
@property (nonatomic,copy) NSArray * disabledFeatures; 
@property (nonatomic,readonly) BOOL hasValidSystemBudget; 
@property (nonatomic,readonly) BOOL hasCellularBudget; 
@property (nonatomic,readonly) BOOL hasBatteryBudget; 
@property (nonatomic,readonly) NSDictionary * cloudAssetCountPerType; 
@property (nonatomic,readonly) CPLAccountFlags * accountFlags; 
@property (getter=isConnectedToNetwork,nonatomic,readonly) BOOL connectedToNetwork; 
@property (nonatomic,readonly) BOOL isConstrainedNetwork; 
@property (assign,nonatomic,__weak) id<CPLStatusDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
-(id<CPLStatusDelegate>)delegate;
-(void)setDelegate:(id<CPLStatusDelegate>)arg1 ;
-(void)_save;
-(void)setExitDeleteTime:(NSDate *)arg1 ;
-(NSDate *)exitDeleteTime;
-(NSDate *)lastSuccessfulSyncDate;
-(NSDictionary *)cloudAssetCountPerType;
-(NSDate *)initialSyncDate;
-(CPLAccountFlags *)accountFlags;
-(BOOL)writeInitialSyncMarker:(id*)arg1 ;
-(id)statusDescription;
-(id)initWithClientLibraryBaseURL:(id)arg1 ;
-(BOOL)isExceedingQuota;
-(BOOL)iCloudLibraryHasBeenWiped;
-(void)setLastPruneDate:(NSDate *)arg1 ;
-(void)setLastCompletePrefetchDate:(NSDate *)arg1 ;
-(NSDate *)lastCompletePrefetchDate;
-(void)setInitialSyncDate:(NSDate *)arg1 ;
-(NSDate *)lastPruneDate;
-(BOOL)lowDiskSpace;
-(BOOL)isConstrainedNetwork;
-(BOOL)isConnectedToNetwork;
-(BOOL)hasCellularBudget;
-(BOOL)hasBatteryBudget;
-(BOOL)hasValidSystemBudget;
-(BOOL)iCloudLibraryClientVersionTooOld;
-(void)setIsExceedingQuota:(BOOL)arg1 ;
-(NSArray *)disabledFeatures;
-(NSData *)accountFlagsData;
-(void)setAccountFlagsData:(NSData *)arg1 ;
-(id)initWithClientLibraryBaseURLForCPLEngine:(id)arg1 ;
-(void)_loadIfNecessary;
-(BOOL)_writeInitialSyncMarkerForDate:(id)arg1 error:(id*)arg2 ;
-(BOOL)_deleteInitialSyncMarkerWithError:(id*)arg1 ;
-(void)checkInitialSyncMarker;
-(void)refetchFromDisk;
-(void)setLastSuccessfulSyncDate:(NSDate *)arg1 ;
-(BOOL)hasChangesToProcess;
-(void)setHasChangesToProcess:(BOOL)arg1 ;
-(void)setICloudLibraryHasBeenWiped:(BOOL)arg1 ;
-(BOOL)iCloudLibraryExists;
-(void)setICloudLibraryExists:(BOOL)arg1 ;
-(void)setICloudLibraryClientVersionTooOld:(BOOL)arg1 ;
-(void)setCloudAssetCountPerType:(id)arg1 updateCheckDate:(BOOL)arg2 ;
-(NSDate *)cloudAssetCountPerTypeLastCheckDate;
-(void)_statusDidChange;
-(void)setHasCellularBudget:(BOOL)arg1 hasBatteryBudget:(BOOL)arg2 isConstrainedNetwork:(BOOL)arg3 isBudgetValid:(BOOL)arg4 ;
-(void)setConnectedToNetwork:(BOOL)arg1 ;
-(void)setLowDiskSpace:(BOOL)arg1 ;
-(void)setDisabledFeatures:(NSArray *)arg1 ;
@end

