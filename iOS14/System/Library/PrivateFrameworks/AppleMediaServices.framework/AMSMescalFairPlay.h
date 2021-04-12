/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSMescalFairPlay : NSObject {

	BOOL _complete;
	FPSAPContextOpaque_Ref _context;
	FairPlayHWInfo_ _hardwareInfo;
	long long _mescalType;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete;              //@synthesize complete=_complete - In the implementation block
-(BOOL)isComplete;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)primingSignatureForData:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyPrimeSignature:(id)arg1 error:(id*)arg2 ;
-(void)_teardownSession;
-(BOOL)verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3 ;
-(id)initWithMescalType:(long long)arg1 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(id)_dataWithFairPlayBytes:(const char*)arg1 length:(unsigned)arg2 ;
-(void)dealloc;
@end

