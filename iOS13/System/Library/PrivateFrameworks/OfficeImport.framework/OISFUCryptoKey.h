/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSData, NSString;

@interface OISFUCryptoKey : NSObject {

	unsigned mIterationCount;
	char* mKey;
	unsigned long long mKeyLength;
	NSData* mSaltData;
	NSString* _passphrase;

}

@property (nonatomic,readonly) NSString * passphrase;              //@synthesize passphrase=_passphrase - In the implementation block
-(void)dealloc;
-(int)keyType;
-(const char*)keyData;
-(NSString *)passphrase;
-(unsigned long long)keyLength;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2 ;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 saltData:(id)arg4 ;
-(unsigned)iterationCount;
-(id)saltData;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned)arg2 saltData:(id)arg3 ;
-(id)initAes128Key:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
@end

