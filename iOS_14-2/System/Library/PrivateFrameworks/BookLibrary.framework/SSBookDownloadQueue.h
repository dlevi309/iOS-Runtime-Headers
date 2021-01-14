/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

@class NSArray;


@protocol SSBookDownloadQueue <NSObject>
@property (nonatomic,readonly) NSArray * downloads; 
@required
+(id*)sharedInstance;
-(NSArray *)downloads;
-(void)addDownloadWithPermlink:(id)arg1 title:(id)arg2 completion:(/*^block*/id)arg3;
-(void)addObserver:(id)arg1;
-(void)addRestoreDownloadWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)addRestoreDownloadsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeObserver:(id)arg1;
-(void)addDownloadWithPurchaseParameters:(id)arg1 completion:(/*^block*/id)arg2;
-(void)pauseDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)processAutomaticDownloadsWithReply:(/*^block*/id)arg1;
-(void)addDownloadsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelAllActiveDownloadsWithCompletion:(/*^block*/id)arg1;
-(void)addDownloadWithMetadata:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resumeDownloadWithID:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

