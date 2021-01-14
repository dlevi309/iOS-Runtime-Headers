/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <DiskImages2/DiskImages2-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class DiskImageParamsXPC, NSURL;

@interface DIBaseParams : NSObject <NSSecureCoding, NSCoding> {

	BOOL _allowStoringInKeychain;
	long long _debugLevel;
	long long _logsForwarding;
	unsigned long long _readPassphraseFlags;
	DiskImageParamsXPC* _diskImageParamsXPC;
	NSURL* _inputURL;

}

@property (assign,nonatomic) shared_ptr<Backend>* backend; 
@property (nonatomic,readonly) unique_ptr<crypto::header* cryptoHeader; 
@property (nonatomic,retain) DiskImageParamsXPC * diskImageParamsXPC;                //@synthesize diskImageParamsXPC=_diskImageParamsXPC - In the implementation block
@property (nonatomic,readonly) NSURL * inputURL;                                     //@synthesize inputURL=_inputURL - In the implementation block
@property (assign,nonatomic) BOOL allowStoringInKeychain;                            //@synthesize allowStoringInKeychain=_allowStoringInKeychain - In the implementation block
@property (nonatomic,readonly) BOOL RAMdisk; 
@property (assign,nonatomic) unsigned long long rawBlockSize; 
@property (assign,nonatomic) long long debugLevel;                                   //@synthesize debugLevel=_debugLevel - In the implementation block
@property (assign,nonatomic) long long logsForwarding;                               //@synthesize logsForwarding=_logsForwarding - In the implementation block
@property (assign,nonatomic) unsigned long long readPassphraseFlags;                 //@synthesize readPassphraseFlags=_readPassphraseFlags - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBackend:(shared_ptr<Backend>*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(shared_ptr<Backend>*)backend;
-(NSURL *)inputURL;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(BOOL)RAMdisk;
-(id)initWithURL:(id)arg1 fileOpenMode:(unsigned short)arg2 error:(id*)arg3 ;
-(DiskImageParamsXPC *)diskImageParamsXPC;
-(BOOL)hasCryptoBackend;
-(long long)logsForwarding;
-(BOOL)getPassphraseFromUserWithXpcHandler:(id)arg1 error:(id*)arg2 ;
-(BOOL)allowStoringInKeychain;
-(long long)debugLevel;
-(unsigned long long)readPassphraseFlags;
-(void)setDiskImageParamsXPC:(DiskImageParamsXPC *)arg1 ;
-(unique_ptr<crypto::header*)cryptoHeader;
-(BOOL)setPassphrase:(const char*)arg1 error:(id*)arg2 ;
-(BOOL)getPassphraseFromConsoleWithUseStdin:(BOOL)arg1 error:(id*)arg2 ;
-(void)setDebugLevel:(long long)arg1 ;
-(void)setLogsForwarding:(long long)arg1 ;
-(id)copyEncryptionUUID;
-(id)copyInstanceID;
-(unsigned long long)rawBlockSize;
-(void)setRawBlockSize:(unsigned long long)arg1 ;
-(void)setReadPassphraseFlags:(unsigned long long)arg1 ;
-(void)setAllowStoringInKeychain:(BOOL)arg1 ;
@end

