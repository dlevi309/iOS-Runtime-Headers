/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/


@protocol OS_dispatch_queue_global;
@class NSString, NSURL, NSNumber, NSArray, ADBackgroundTaskRequest, NSDate, NSObject;

@interface ADMobileAssets : NSObject {

	BOOL _operationInProgress;
	NSString* _assetType;
	NSString* _version;
	NSURL* _assetPath;
	NSNumber* _maxQueryElements;
	NSArray* _lookbackPeriods;
	ADBackgroundTaskRequest* _task;
	NSDate* _creationTime;
	NSObject*<OS_dispatch_queue_global> _assetQueue;

}

@property (nonatomic,retain) NSString * assetType;                                        //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) NSString * version;                                          //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSURL * assetPath;                                           //@synthesize assetPath=_assetPath - In the implementation block
@property (nonatomic,retain) NSNumber * maxQueryElements;                                 //@synthesize maxQueryElements=_maxQueryElements - In the implementation block
@property (nonatomic,retain) NSArray * lookbackPeriods;                                   //@synthesize lookbackPeriods=_lookbackPeriods - In the implementation block
@property (nonatomic,retain) ADBackgroundTaskRequest * task;                              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSDate * creationTime;                                       //@synthesize creationTime=_creationTime - In the implementation block
@property (assign) BOOL operationInProgress;                                              //@synthesize operationInProgress=_operationInProgress - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue_global> assetQueue;              //@synthesize assetQueue=_assetQueue - In the implementation block
-(NSString *)assetType;
-(ADBackgroundTaskRequest *)task;
-(void)setCreationTime:(NSDate *)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(void)setTask:(ADBackgroundTaskRequest *)arg1 ;
-(NSDate *)creationTime;
-(void)setVersion:(NSString *)arg1 ;
-(NSURL *)assetPath;
-(void)setAssetPath:(NSURL *)arg1 ;
-(NSString *)version;
-(BOOL)shouldStartOperations;
-(void)doneWithOperations;
-(NSArray *)lookbackPeriods;
-(NSNumber *)maxQueryElements;
-(void)findProperAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAsset:(id)arg1 andTask:(id)arg2 ;
-(void)downloadAssetCatalog:(/*^block*/id)arg1 ;
-(void)queryAssetData:(/*^block*/id)arg1 ;
-(void)createAppUsageVectors:(/*^block*/id)arg1 ;
-(void)setMaxQueryElements:(NSNumber *)arg1 ;
-(void)setLookbackPeriods:(NSArray *)arg1 ;
-(BOOL)operationInProgress;
-(void)setOperationInProgress:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue_global>)assetQueue;
-(void)setAssetQueue:(NSObject*<OS_dispatch_queue_global>)arg1 ;
@end

