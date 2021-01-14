/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class ICStoreHLSAssetInfo, NSURL;

@interface MPStoreHLSAssetInfo : NSObject {

	ICStoreHLSAssetInfo* _internalInfo;

}

@property (nonatomic,copy,readonly) NSURL * playlistURL; 
@property (nonatomic,copy,readonly) NSURL * keyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * keyServerURL; 
@property (nonatomic,copy,readonly) NSURL * alternatePlaylistURL; 
@property (nonatomic,copy,readonly) NSURL * alternateKeyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * alternateKeyServerURL; 
@property (getter=isiTunesStoreStream,nonatomic,readonly) BOOL iTunesStoreStream; 
-(BOOL)isiTunesStoreStream;
-(id)initWithiTunesCloudStoreHLSAssetInfo:(id)arg1 ;
-(NSURL *)playlistURL;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(NSURL *)alternatePlaylistURL;
-(NSURL *)alternateKeyCertificateURL;
-(NSURL *)alternateKeyServerURL;
@end

