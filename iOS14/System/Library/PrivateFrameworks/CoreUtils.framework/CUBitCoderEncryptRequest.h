/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class NSData;

@interface CUBitCoderEncryptRequest : NSObject {

	NSData* _aad;
	unsigned long long _authTagLength;
	NSData* _data;
	NSData* _nonce;

}

@property (nonatomic,copy) NSData * aad;                                    //@synthesize aad=_aad - In the implementation block
@property (assign,nonatomic) unsigned long long authTagLength;              //@synthesize authTagLength=_authTagLength - In the implementation block
@property (nonatomic,copy) NSData * data;                                   //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSData * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
-(NSData *)aad;
-(void)setNonce:(NSData *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setAad:(NSData *)arg1 ;
-(unsigned long long)authTagLength;
-(void)setAuthTagLength:(unsigned long long)arg1 ;
-(NSData *)data;
-(NSData *)nonce;
@end

