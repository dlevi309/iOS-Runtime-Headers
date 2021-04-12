/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


#import <StoreServices/StoreServices-Structs.h>
@interface SSVFairPlaySAPContext : NSObject {

	BOOL _complete;
	FPSAPContextOpaque_Ref _context;
	FairPlayHWInfo_ _hardwareInfo;
	long long _version;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete;              //@synthesize complete=_complete - In the implementation block
-(BOOL)isComplete;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)initWithSAPVersion:(long long)arg1 ;
-(id)primingSignatureForData:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyPrimeSignature:(id)arg1 error:(id*)arg2 ;
-(void)_teardownSession;
-(BOOL)verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3 ;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

