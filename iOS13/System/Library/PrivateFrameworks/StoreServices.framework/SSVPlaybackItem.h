/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSDictionary, NSURL, NSArray;

@interface SSVPlaybackItem : NSObject {

	NSDictionary* _itemDictionary;
	NSURL* _fallbackStreamingKeyServerURL;
	NSURL* _fallbackStreamingKeyCertificateURL;

}

@property (nonatomic,copy) NSURL * fallbackStreamingKeyServerURL;                              //@synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL - In the implementation block
@property (nonatomic,copy) NSURL * fallbackStreamingKeyCertificateURL;                         //@synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * itemDictionary;                             //@synthesize itemDictionary=_itemDictionary - In the implementation block
@property (nonatomic,copy,readonly) id itemIdentifier; 
@property (nonatomic,readonly) NSArray * assets; 
@property (nonatomic,readonly) NSURL * HLSPlaylistURL; 
@property (nonatomic,readonly) NSURL * HLSKeyCertificateURL; 
@property (nonatomic,readonly) NSURL * HLSKeyServerURL; 
@property (getter=isiTunesStoreStream,nonatomic,readonly) BOOL iTunesStoreStream; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)itemIdentifier;
-(NSArray *)assets;
-(NSURL *)fallbackStreamingKeyServerURL;
-(void)setFallbackStreamingKeyServerURL:(NSURL *)arg1 ;
-(NSURL *)fallbackStreamingKeyCertificateURL;
-(void)setFallbackStreamingKeyCertificateURL:(NSURL *)arg1 ;
-(NSURL *)HLSKeyCertificateURL;
-(NSURL *)HLSKeyServerURL;
-(NSURL *)HLSPlaylistURL;
-(BOOL)isiTunesStoreStream;
-(id)assetForFlavor:(id)arg1 ;
-(NSDictionary *)itemDictionary;
-(id)initWithItemDictionary:(id)arg1 ;
-(void)_enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
@end

