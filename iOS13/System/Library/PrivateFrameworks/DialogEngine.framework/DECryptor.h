/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


#import <DialogEngine/DialogEngine-Structs.h>
@interface DECryptor : NSObject {

	BOOL _compressed;
	BOOL _streamEnded;
	unsigned _operation;
	CCCryptorRef _cryptor;
	z_stream_s* _stream;

}

@property (assign,nonatomic) z_stream_s* stream;                //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) BOOL streamEnded;                  //@synthesize streamEnded=_streamEnded - In the implementation block
@property (assign,nonatomic) CCCryptorRef cryptor;              //@synthesize cryptor=_cryptor - In the implementation block
@property (assign,nonatomic) BOOL compressed;                   //@synthesize compressed=_compressed - In the implementation block
@property (assign,nonatomic) unsigned operation;                //@synthesize operation=_operation - In the implementation block
+(BOOL)isCompressed:(id)arg1 ;
-(void)dealloc;
-(id)finalize;
-(unsigned)operation;
-(void)setOperation:(unsigned)arg1 ;
-(z_stream_s*)stream;
-(void)setStream:(z_stream_s*)arg1 ;
-(id)write:(id)arg1 ;
-(BOOL)compressed;
-(void)setCompressed:(BOOL)arg1 ;
-(id)decompress:(id)arg1 ;
-(CCCryptorRef)cryptor;
-(id)initForDecryption:(id)arg1 iv:(id)arg2 compressed:(BOOL)arg3 ;
-(id)initForEncryption:(id)arg1 iv:(id)arg2 ;
-(id)initWithOperation:(unsigned)arg1 key:(id)arg2 iv:(id)arg3 compressed:(BOOL)arg4 ;
-(id)compress:(id)arg1 finalize:(BOOL)arg2 ;
-(void)setCryptor:(CCCryptorRef)arg1 ;
-(BOOL)streamEnded;
-(void)setStreamEnded:(BOOL)arg1 ;
@end

