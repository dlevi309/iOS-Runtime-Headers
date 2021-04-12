/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

@class NSArray;


@protocol SSBookDownloadQueue <NSObject>
@property (nonatomic,readonly) NSArray * downloads; 
@required
+(id*)sharedInstance;
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(NSArray *)downloads;
-(void)cancelDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)pauseDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resumeDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addDownloadWithPurchaseParameters:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addDownloadWithPermlink:(id)arg1 title:(id)arg2 completion:(/*^block*/id)arg3;
-(void)addDownloadWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addRestoreDownloadWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelAllActiveDownloadsWithCompletion:(/*^block*/id)arg1;
-(void)addDownloadsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addRestoreDownloadsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;

@end

