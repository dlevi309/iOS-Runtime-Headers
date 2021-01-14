/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


@protocol VUIImageDecrypter;
@class NSURL, NSDictionary, NSString;

@interface VUIURLImageRequest : NSObject {

	NSURL* _url;
	NSDictionary* _headers;
	id<VUIImageDecrypter> _decrypter;
	NSString* _identifier;

}

@property (nonatomic,retain) NSURL * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                       //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id<VUIImageDecrypter> decrypter;              //@synthesize decrypter=_decrypter - In the implementation block
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(id<VUIImageDecrypter>)decrypter;
-(void)setDecrypter:(id<VUIImageDecrypter>)arg1 ;
-(id)initWithURL:(id)arg1 headers:(id)arg2 identifier:(id)arg3 decrypter:(id)arg4 ;
-(id)initWithURL:(id)arg1 headers:(id)arg2 decrypter:(id)arg3 ;
@end

