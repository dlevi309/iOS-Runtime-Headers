/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithItemResponseDictionary:(id)arg1 ;
-(long long)ICStoreRadioStreamFlavorWithString:(id)arg1 ;
-(long long)ICStoreRadioStreamProtocolWithString:(id)arg1 ;
-(NSURL *)streamURL;
-(long long)streamProtocol;
-(long long)flavor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isiTunesStoreStream;
-(NSURL *)keyCertificateURL;
-(NSURL *)keyServerURL;
-(void)setITunesStoreStream:(BOOL)arg1 ;
@end

