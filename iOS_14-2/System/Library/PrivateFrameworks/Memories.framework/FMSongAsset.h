/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSString, NSURL;

@interface FMSongAsset : NSObject {

	double _downloadProgress;
	NSString* _assetID;
	NSString* _songUID;
	unsigned long long _assetStatus;
	NSURL* _localURL;
	long long _contentVersion;
	long long _compatibilityVersion;

}

@property (nonatomic,readonly) long long contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (readonly) NSString * assetID;                                    //@synthesize assetID=_assetID - In the implementation block
@property (retain) NSString * songUID;                                      //@synthesize songUID=_songUID - In the implementation block
@property (readonly) unsigned long long assetStatus;                        //@synthesize assetStatus=_assetStatus - In the implementation block
@property (readonly) NSURL * localURL;                                      //@synthesize localURL=_localURL - In the implementation block
-(long long)compatibilityVersion;
-(void)cancelDownload;
-(NSURL *)localURL;
-(NSString *)assetID;
-(double)downloadProgress;
-(long long)contentVersion;
-(NSString *)songUID;
-(unsigned long long)assetStatus;
-(BOOL)updateDownloadProgress:(double)arg1 ;
-(void)requestDownload;
-(void)setSongUID:(NSString *)arg1 ;
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)contentUpdateAvaliable;
-(void)purgeLocalCache;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)isCloudBacked;
-(BOOL)localURLExists;
-(id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 contentVersion:(long long)arg4 compatibilityVersion:(long long)arg5 ;
-(void)requestDownloadWithOptions:(id)arg1 ;
@end

