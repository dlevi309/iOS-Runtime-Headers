/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@interface SFUCryptoUtils : NSObject
+(BOOL)generateRandomDataInBuffer:(char*)arg1 length:(unsigned long long)arg2 ;
+(unsigned)ivLengthForKey:(id)arg1 ;
+(id)generateRandomSaltWithLength:(unsigned long long)arg1 ;
+(id)sha256HashFromData:(id)arg1 ;
+(BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1 ;
+(id)saltForSageFiles;
+(id)generateRandomSalt;
+(id)hashForPassphrase:(id)arg1 withSalt:(id)arg2 ;
+(id)generatePassphraseVerifierForKey:(id)arg1 verifierVersion:(unsigned short)arg2 ;
+(unsigned)iterationCountFromPassphraseVerifier:(id)arg1 ;
+(id)saltFromVerifier:(id)arg1 saltLength:(unsigned long long)arg2 ;
+(BOOL)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2 ;
+(id)newBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(BOOL)arg3 zipStream:(id*)arg4 ;
+(id)newBufferedInputStreamForDecryptingZippedBundle:(id)arg1 key:(id)arg2 zipArchive:(id)arg3 isDeflated:(BOOL)arg4 zipStream:(id*)arg5 ;
+(id)encodePassphraseHint:(id)arg1 ;
+(id)decodePassphraseHint:(id)arg1 ;
+(id)sha256HashFromStorage:(id)arg1 ;
+(id)sha256HashFromString:(id)arg1 ;
+(id)sha1HashFromStorage:(id)arg1 ;
@end

