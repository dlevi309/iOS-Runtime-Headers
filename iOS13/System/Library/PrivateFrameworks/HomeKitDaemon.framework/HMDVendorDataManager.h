/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURLSession, HMFTimer, NSDictionary, NSURL, NSString;

@interface HMDVendorDataManager : HMFObject <HMFLogging, HMFTimerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSURLSession* _urlSession;
	HMFTimer* _fetchTimer;
	long long _dataVersion;
	NSDictionary* _collectionsByManufacturer;
	NSDictionary* _entriesByProductData;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSURLSession * urlSession;                           //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) HMFTimer * fetchTimer;                               //@synthesize fetchTimer=_fetchTimer - In the implementation block
@property (nonatomic,readonly) NSURL * urlForBundledPlist; 
@property (nonatomic,readonly) NSURL * urlForBundledInternalPlist; 
@property (assign,nonatomic) long long dataVersion;                                 //@synthesize dataVersion=_dataVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * collectionsByManufacturer;              //@synthesize collectionsByManufacturer=_collectionsByManufacturer - In the implementation block
@property (nonatomic,retain) NSDictionary * entriesByProductData;                   //@synthesize entriesByProductData=_entriesByProductData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedVendorDataManager;
+(id)dbURL;
-(id)init;
-(void)_start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(long long)dataVersion;
-(void)setDataVersion:(long long)arg1 ;
-(NSURLSession *)urlSession;
-(id)initWithDefaults;
-(void)timerDidFire:(id)arg1 ;
-(id)vendorModelEntryForProductData:(id)arg1 ;
-(id)vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg1 urlSession:(id)arg2 fetchTimer:(id)arg3 ;
-(void)_loadDatabaseFromLocalFiles;
-(NSDictionary *)collectionsByManufacturer;
-(NSDictionary *)entriesByProductData;
-(BOOL)_parseDatabaseFromDictionary:(id)arg1 dataVersion:(long long*)arg2 collectionsByManufacturer:(id*)arg3 entriesByProductData:(id*)arg4 ;
-(void)setCollectionsByManufacturer:(NSDictionary *)arg1 ;
-(void)setEntriesByProductData:(NSDictionary *)arg1 ;
-(BOOL)_loadDatabaseFromDictionary:(id)arg1 ;
-(BOOL)_loadDatabaseFromFileURL:(id)arg1 fileDescription:(id)arg2 ;
-(BOOL)_loadDatabaseFromFilePath:(id)arg1 fileDescription:(id)arg2 ;
-(NSURL *)urlForBundledInternalPlist;
-(NSURL *)urlForBundledPlist;
-(HMFTimer *)fetchTimer;
-(void)_fetchDataFromServer;
-(void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3 ;
-(void)_handleDataFromServer:(id)arg1 ;
-(BOOL)_parseManufacturersList:(id)arg1 collectionsByManufacturer:(id*)arg2 entriesByProductData:(id*)arg3 ;
-(id)_modelsStringForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3 key:(id)arg4 ;
-(id)_parseVendorModelEntryForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3 ;
@end

