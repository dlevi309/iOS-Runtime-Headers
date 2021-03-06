/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSDictionary, NSURL, NSArray, MPStoreRedownloadProductItemAsset, NSString;

@interface MPStoreRedownloadProductItem : NSObject {

	NSDictionary* _responseDictionary;
	BOOL _usesCurrentAccountIfAvailable;
	NSURL* _fallbackStreamingKeyServerURL;
	NSURL* _fallbackStreamingKeyCertificateURL;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;                              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,copy) NSURL * fallbackStreamingKeyServerURL;                              //@synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL - In the implementation block
@property (nonatomic,copy) NSURL * fallbackStreamingKeyCertificateURL;                         //@synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL - In the implementation block
@property (assign,nonatomic) BOOL usesCurrentAccountIfAvailable;                               //@synthesize usesCurrentAccountIfAvailable=_usesCurrentAccountIfAvailable - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allFlavors; 
@property (nonatomic,readonly) MPStoreRedownloadProductItemAsset * asset; 
@property (nonatomic,readonly) MPStoreRedownloadProductItemAsset * firstAsset; 
@property (getter=isiTunesStoreStream,nonatomic,readonly) BOOL iTunesStoreStream; 
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,readonly) NSURL * HLSPlaylistURL; 
@property (nonatomic,readonly) NSURL * HLSKeyCertificateURL; 
@property (nonatomic,readonly) NSURL * HLSKeyServerURL; 
@property (nonatomic,readonly) NSURL * alternateHLSPlaylistURL; 
@property (nonatomic,readonly) NSURL * alternateHLSKeyServerURL; 
@property (nonatomic,readonly) NSURL * alternateHLSKeyCertificateURL; 
-(NSString *)fileExtension;
-(MPStoreRedownloadProductItemAsset *)asset;
-(NSDictionary *)responseDictionary;
-(NSURL *)fallbackStreamingKeyServerURL;
-(void)setFallbackStreamingKeyServerURL:(NSURL *)arg1 ;
-(NSURL *)fallbackStreamingKeyCertificateURL;
-(void)setFallbackStreamingKeyCertificateURL:(NSURL *)arg1 ;
-(NSArray *)allFlavors;
-(MPStoreRedownloadProductItemAsset *)firstAsset;
-(NSURL *)HLSKeyCertificateURL;
-(id)_initWithResponseDictionary:(id)arg1 ;
-(NSURL *)HLSKeyServerURL;
-(NSURL *)HLSPlaylistURL;
-(BOOL)isiTunesStoreStream;
-(NSURL *)alternateHLSPlaylistURL;
-(NSURL *)alternateHLSKeyServerURL;
-(id)assetForFlavor:(id)arg1 ;
-(NSURL *)alternateHLSKeyCertificateURL;
-(void)_enumerateAssetDictionariesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)usesCurrentAccountIfAvailable;
-(void)setUsesCurrentAccountIfAvailable:(BOOL)arg1 ;
@end

