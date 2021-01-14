/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class ICStoreRadioStreamAssetInfo, NSURL;

@interface MPStoreRadioStreamAssetInfo : NSObject {

	ICStoreRadioStreamAssetInfo* _internalInfo;
	BOOL _iTunesStoreStream;

}

@property (nonatomic,readonly) long long flavor; 
@property (nonatomic,readonly) long long streamProtocol; 
@property (nonatomic,copy,readonly) NSURL * streamURL; 
@property (nonatomic,copy,readonly) NSURL * keyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * keyServerURL; 
@property (assign,getter=isiTunesStoreStream,nonatomic) BOOL iTunesStoreStream;              //@synthesize iTunesStoreStream=_iTunesStoreStream - In the implementation block
-(NSURL *)streamURL;
-(long long)streamProtocol;
-(BOOL)isITunesStoreStream;
-(id)initWithiTunesCloudStoreRadioStreamAssetInfo:(id)arg1 ;
-(long long)MPStoreRadioStreamFlavorFromICStoreRadioStreamFlavor:(long long)arg1 ;
-(long long)MPStoreRadioStreamProtocolFromICStoreRadioStreamProtocol:(long long)arg1 ;
-(long long)flavor;
-(BOOL)isiTunesStoreStream;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(void)setITunesStoreStream:(BOOL)arg1 ;
@end

