/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/


#import <TrustedPeers/TrustedPeers-Structs.h>
@interface TPHashBuilder : NSObject {

	long long _algo;
	CC_SHA256state_st _ctxSHA256;
	CC_SHA512state_st _ctxSHA512;

}

@property (assign,nonatomic) long long algo;                           //@synthesize algo=_algo - In the implementation block
@property (assign,nonatomic) CC_SHA256state_st ctxSHA256;              //@synthesize ctxSHA256=_ctxSHA256 - In the implementation block
@property (assign,nonatomic) CC_SHA512state_st ctxSHA512;              //@synthesize ctxSHA512=_ctxSHA512 - In the implementation block
+(long long)algoOfHash:(id)arg1 ;
+(id)hashWithAlgo:(long long)arg1 ofData:(id)arg2 ;
+(id)hashWithAlgo:(long long)arg1 ofBytes:(const void*)arg2 len:(unsigned long long)arg3 ;
-(id)init;
-(void)updateWithData:(id)arg1 ;
-(id)initWithAlgo:(long long)arg1 ;
-(void)resetWithAlgo:(long long)arg1 ;
-(void)updateWithBytes:(const void*)arg1 len:(unsigned long long)arg2 ;
-(id)finalHash;
-(void)throwInvalidAlgo;
-(long long)algo;
-(void)setAlgo:(long long)arg1 ;
-(CC_SHA256state_st)ctxSHA256;
-(void)setCtxSHA256:(CC_SHA256state_st)arg1 ;
-(CC_SHA512state_st)ctxSHA512;
-(void)setCtxSHA512:(CC_SHA512state_st)arg1 ;
@end

