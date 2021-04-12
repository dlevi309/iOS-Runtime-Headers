/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isiTunesStoreStream;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(void)setITunesStoreStream:(BOOL)arg1 ;
-(long long)flavor;
-(id)initWithiTunesCloudStoreRadioStreamAssetInfo:(id)arg1 ;
-(long long)streamProtocol;
-(NSURL *)streamURL;
-(BOOL)isITunesStoreStream;
-(long long)MPStoreRadioStreamFlavorFromICStoreRadioStreamFlavor:(long long)arg1 ;
-(long long)MPStoreRadioStreamProtocolFromICStoreRadioStreamProtocol:(long long)arg1 ;
@end

