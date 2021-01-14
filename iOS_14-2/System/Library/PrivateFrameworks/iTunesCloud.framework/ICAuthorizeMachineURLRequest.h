/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICStoreURLRequest.h>

@class NSString, NSData;

@interface ICAuthorizeMachineURLRequest : ICStoreURLRequest {

	NSString* _keybagPath;
	NSString* _reason;
	NSData* _tokenData;

}

@property (nonatomic,copy) NSString * keybagPath;              //@synthesize keybagPath=_keybagPath - In the implementation block
@property (nonatomic,copy) NSString * reason;                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                 //@synthesize tokenData=_tokenData - In the implementation block
-(void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setKeybagPath:(NSString *)arg1 ;
-(NSData *)tokenData;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)keybagPath;
-(void)setTokenData:(NSData *)arg1 ;
@end

