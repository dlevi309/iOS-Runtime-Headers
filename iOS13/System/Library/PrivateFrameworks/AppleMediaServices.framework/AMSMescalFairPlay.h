/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isComplete;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(id)_dataWithFairPlayBytes:(const char*)arg1 length:(unsigned)arg2 ;
-(void)_teardownSession;
-(id)initWithMescalType:(long long)arg1 ;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)primingSignatureForData:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyPrimeSignature:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3 ;
@end

