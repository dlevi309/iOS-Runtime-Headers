/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(NSData *)tokenData;
-(void)setKeybagPath:(NSString *)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(NSString *)keybagPath;
-(void)setTokenData:(NSData *)arg1 ;
@end

