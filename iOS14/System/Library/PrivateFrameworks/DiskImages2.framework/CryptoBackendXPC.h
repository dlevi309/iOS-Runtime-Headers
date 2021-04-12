/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <DiskImages2/DiskImages2-Structs.h>
#import <DiskImages2/BackendXPC.h>

@class BackendXPC;

@interface CryptoBackendXPC : BackendXPC {

	BackendXPC* _baseBackendXPC;
	shared_ptr<crypto::format>* _cryptoFormat;

}

@property (nonatomic,retain) BackendXPC * baseBackendXPC;                           //@synthesize baseBackendXPC=_baseBackendXPC - In the implementation block
@property (assign,nonatomic) shared_ptr<crypto::format>* cryptoFormat;              //@synthesize cryptoFormat=_cryptoFormat - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBaseBackendXPC:(BackendXPC *)arg1 ;
-(BOOL)checkIfEncryptedWithErrno:(int*)arg1 ;
-(void)createBackendWithKeys:(keys*)arg1 ;
-(shared_ptr<crypto::format>*)cryptoFormat;
-(BackendXPC *)baseBackendXPC;
-(id)initWithKeys:(keys*)arg1 baseBackendXPC:(id)arg2 ;
-(void)setCryptoFormat:(shared_ptr<crypto::format>*)arg1 ;
@end

