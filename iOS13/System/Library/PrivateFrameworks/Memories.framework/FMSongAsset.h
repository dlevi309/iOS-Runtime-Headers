/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSURL *)localURL;
-(void)cancelDownload;
-(long long)contentVersion;
-(NSString *)assetID;
-(double)downloadProgress;
-(BOOL)updateDownloadProgress:(double)arg1 ;
-(unsigned long long)assetStatus;
-(void)requestDownload;
-(void)setSongUID:(NSString *)arg1 ;
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(NSString *)songUID;
-(BOOL)contentUpdateAvaliable;
-(void)purgeLocalCache;
-(void)requestDownloadWithOptions:(id)arg1 ;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)isCloudBacked;
-(BOOL)localURLExists;
-(id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 contentVersion:(long long)arg4 compatibilityVersion:(long long)arg5 ;
@end

