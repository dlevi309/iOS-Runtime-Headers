/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAsset:(ATAsset *)arg1 ;
-(long long)downloadState;
-(NSData *)resumeData;
-(NSString *)downloadFilePath;
-(ATAsset *)asset;
-(void)setResumeData:(NSData *)arg1 ;
-(id)description;
-(id)initWithAsset:(id)arg1 ;
-(void)setDownloadState:(long long)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(ICStoreMediaResponseItem *)storeMediaResponseItem;
-(void)setStoreMediaResponseItem:(ICStoreMediaResponseItem *)arg1 ;
-(void)performDownloadOnOperationsQueue:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setCancelAllRemaining:(BOOL)arg1 ;
-(void)setDownloadFilePath:(NSString *)arg1 ;
-(BOOL)cancelAllRemaining;
@end

