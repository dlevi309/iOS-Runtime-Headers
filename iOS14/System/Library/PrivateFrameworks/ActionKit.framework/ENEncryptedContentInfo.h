/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSString, NSMutableString;

@interface ENEncryptedContentInfo : NSObject {

	NSString* _hint;
	NSString* _cipher;
	long long _keyLength;
	NSMutableString* _cipherText;

}

@property (nonatomic,copy) NSString * cipher;                           //@synthesize cipher=_cipher - In the implementation block
@property (assign) long long keyLength;                                 //@synthesize keyLength=_keyLength - In the implementation block
@property (nonatomic,copy) NSString * hint;                             //@synthesize hint=_hint - In the implementation block
@property (nonatomic,retain) NSMutableString * cipherText;              //@synthesize cipherText=_cipherText - In the implementation block
-(NSString *)hint;
-(id)init;
-(void)setKeyLength:(long long)arg1 ;
-(long long)keyLength;
-(NSString *)cipher;
-(void)setHint:(NSString *)arg1 ;
-(void)setCipher:(NSString *)arg1 ;
-(NSMutableString *)cipherText;
-(void)setCipherText:(NSMutableString *)arg1 ;
@end

