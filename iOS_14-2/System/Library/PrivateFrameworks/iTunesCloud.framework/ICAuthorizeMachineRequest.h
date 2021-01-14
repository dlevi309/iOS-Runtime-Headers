/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICStoreRequestContext, NSData;

@interface ICAuthorizeMachineRequest : NSObject <NSCopying> {

	NSString* _keybagPath;
	long long _qualityOfService;
	NSString* _reason;
	ICStoreRequestContext* _requestContext;
	NSData* _tokenData;

}

@property (nonatomic,copy) NSString * keybagPath;                               //@synthesize keybagPath=_keybagPath - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                        //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) NSString * reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                                  //@synthesize tokenData=_tokenData - In the implementation block
-(void)setQualityOfService:(long long)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(void)setKeybagPath:(NSString *)arg1 ;
-(NSData *)tokenData;
-(ICStoreRequestContext *)requestContext;
-(NSString *)reason;
-(long long)qualityOfService;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)keybagPath;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setTokenData:(NSData *)arg1 ;
@end

