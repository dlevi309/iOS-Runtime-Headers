/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


@class _TVURLSessionDownloadTaskWrapper, NSURL, NSString;

@interface VUILayeredImageProxy : NSObject {

	_TVURLSessionDownloadTaskWrapper* _downloadTaskWrapper;
	BOOL _cancelled;
	NSURL* _url;
	long long _groupType;
	NSString* _assetKey;

}

@property (getter=isCancelled) BOOL cancelled;                        //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long groupType;                   //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetKey;              //@synthesize assetKey=_assetKey - In the implementation block
+(id)_loadingQueue;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(void)setCancelled:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isLoading;
-(NSURL *)url;
-(id)description;
-(NSString *)assetKey;
-(long long)groupType;
-(unsigned long long)hash;
-(void)cancel;
-(BOOL)isCancelled;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)isImageAvailable;
-(id)initWithURL:(id)arg1 groupType:(long long)arg2 ;
-(id)initWithURL:(id)arg1 groupType:(long long)arg2 assetKey:(id)arg3 ;
-(id)_assetPathWithAssetKey:(id)arg1 ;
@end

