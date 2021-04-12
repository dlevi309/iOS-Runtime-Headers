/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSDictionary, NSURL;

@interface ICStoreRadioStreamAssetInfo : NSObject {

	NSDictionary* _itemResponseDictionary;
	BOOL _iTunesStoreStream;

}

@property (nonatomic,readonly) long long flavor; 
@property (nonatomic,readonly) long long streamProtocol; 
@property (nonatomic,copy,readonly) NSURL * streamURL; 
@property (nonatomic,copy,readonly) NSURL * keyCertificateURL; 
@property (nonatomic,copy,readonly) NSURL * keyServerURL; 
@property (assign,getter=isiTunesStoreStream,nonatomic) BOOL iTunesStoreStream;              //@synthesize iTunesStoreStream=_iTunesStoreStream - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isiTunesStoreStream;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(void)setITunesStoreStream:(BOOL)arg1 ;
-(long long)flavor;
-(long long)streamProtocol;
-(NSURL *)streamURL;
-(id)initWithItemResponseDictionary:(id)arg1 ;
-(long long)ICStoreRadioStreamFlavorWithString:(id)arg1 ;
-(long long)ICStoreRadioStreamProtocolWithString:(id)arg1 ;
@end

