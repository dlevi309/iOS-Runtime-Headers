/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <iTunesCloud/ICRequestOperation.h>

@class ATAsset, NSString, NSData, ICStoreMediaResponseItem;

@interface ATStoreDownloadOperation : ICRequestOperation {

	BOOL _cancelAllRemaining;
	ATAsset* _asset;
	long long _downloadState;
	NSString* _downloadFilePath;
	NSData* _resumeData;
	ICStoreMediaResponseItem* _storeMediaResponseItem;

}

@property (nonatomic,retain) ATAsset * asset;                                                //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) long long downloadState;                                        //@synthesize downloadState=_downloadState - In the implementation block
@property (nonatomic,retain) NSString * downloadFilePath;                                    //@synthesize downloadFilePath=_downloadFilePath - In the implementation block
@property (assign,nonatomic) BOOL cancelAllRemaining;                                        //@synthesize cancelAllRemaining=_cancelAllRemaining - In the implementation block
@property (nonatomic,retain) NSData * resumeData;                                            //@synthesize resumeData=_resumeData - In the implementation block
@property (nonatomic,retain) ICStoreMediaResponseItem * storeMediaResponseItem;              //@synthesize storeMediaResponseItem=_storeMediaResponseItem - In the implementation block
-(id)description;
-(void)finishWithError:(id)arg1 ;
-(ATAsset *)asset;
-(void)setAsset:(ATAsset *)arg1 ;
-(NSString *)downloadFilePath;
-(NSData *)resumeData;
-(void)setDownloadFilePath:(NSString *)arg1 ;
-(void)setResumeData:(NSData *)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(long long)downloadState;
-(void)setDownloadState:(long long)arg1 ;
-(ICStoreMediaResponseItem *)storeMediaResponseItem;
-(void)setStoreMediaResponseItem:(ICStoreMediaResponseItem *)arg1 ;
-(void)performDownloadOnOperationsQueue:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setCancelAllRemaining:(BOOL)arg1 ;
-(BOOL)cancelAllRemaining;
-(id)_ATErrorFromError:(id)arg1 ;
@end

