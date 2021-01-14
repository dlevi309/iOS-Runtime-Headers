/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryComponentAuth.framework/AccessoryComponentAuth
*/


@class NSData;

@interface ACCHWComponentAuthServiceParams : NSObject {

	unsigned _moduleAuthService;
	unsigned _authFlags;
	NSData* _certificate;
	NSData* _signature;
	NSData* _deviceNonce;
	NSData* _challenge;

}

@property (assign,nonatomic) unsigned moduleAuthService;              //@synthesize moduleAuthService=_moduleAuthService - In the implementation block
@property (assign,nonatomic) unsigned authFlags;                      //@synthesize authFlags=_authFlags - In the implementation block
@property (nonatomic,retain) NSData * certificate;                    //@synthesize certificate=_certificate - In the implementation block
@property (nonatomic,retain) NSData * signature;                      //@synthesize signature=_signature - In the implementation block
@property (nonatomic,retain) NSData * deviceNonce;                    //@synthesize deviceNonce=_deviceNonce - In the implementation block
@property (nonatomic,retain) NSData * challenge;                      //@synthesize challenge=_challenge - In the implementation block
-(NSData *)signature;
-(void)setAuthFlags:(unsigned)arg1 ;
-(void)setCertificate:(NSData *)arg1 ;
-(unsigned)authFlags;
-(unsigned)moduleAuthService;
-(NSData *)certificate;
-(void)setChallenge:(NSData *)arg1 ;
-(NSData *)challenge;
-(NSData *)deviceNonce;
-(void)setSignature:(NSData *)arg1 ;
-(void)setDeviceNonce:(NSData *)arg1 ;
-(void)setModuleAuthService:(unsigned)arg1 ;
@end

