/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSCache, NSMutableDictionary, HKHealthRecordsStore, NSOperationQueue;

@interface HKBrandImageManager : NSObject {

	NSCache* _fetchedImages;
	NSMutableDictionary* _outstandingRequests;
	HKHealthRecordsStore* _healthRecordsStore;
	NSOperationQueue* _fileOperationQueue;

}

@property (retain) NSOperationQueue * fileOperationQueue;                            //@synthesize fileOperationQueue=_fileOperationQueue - In the implementation block
@property (nonatomic,retain) HKHealthRecordsStore * healthRecordsStore;              //@synthesize healthRecordsStore=_healthRecordsStore - In the implementation block
@property (nonatomic,retain) NSCache * fetchedImages;                                //@synthesize fetchedImages=_fetchedImages - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outstandingRequests;              //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
+(double)defaultLogoDimension;
+(id)imageManagerWithHealthRecordsStore:(id)arg1 ;
+(id)_fetchOrCreateSalt;
-(void)setOutstandingRequests:(NSMutableDictionary *)arg1 ;
-(void)retrieveLogoForBrand:(id)arg1 size:(double)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithHealthRecordsStore:(id)arg1 ;
-(HKHealthRecordsStore *)healthRecordsStore;
-(void)cacheFeaturedBrandLogosWithCompletion:(/*^block*/id)arg1 ;
-(void)setHealthRecordsStore:(HKHealthRecordsStore *)arg1 ;
-(NSMutableDictionary *)outstandingRequests;
-(void)setFileOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)fileOperationQueue;
-(id)_scaleKeyForCurrentDevice;
-(void)processFetchResponseWithData:(id)arg1 error:(id)arg2 brand:(id)arg3 ;
-(id)loadStoredLogoForBrand:(id)arg1 ;
-(void)onMainQueue:(/*^block*/id)arg1 ;
-(void)fetchLogoForBrand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSCache *)fetchedImages;
-(id)_logoURLForBrand:(id)arg1 ;
-(void)dispatchResponsesForBrand:(id)arg1 image:(id)arg2 error:(id)arg3 ;
-(void)_writeImageData:(id)arg1 brand:(id)arg2 ;
-(id)_hashedSaltedStringFromString:(id)arg1 ;
-(void)setFetchedImages:(NSCache *)arg1 ;
@end

