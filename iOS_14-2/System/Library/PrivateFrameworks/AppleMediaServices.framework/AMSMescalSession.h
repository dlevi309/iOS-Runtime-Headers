/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSData, AMSURLSession, AMSMescalFairPlay;

@interface AMSMescalSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSData* _certificateData;
	AMSURLSession* _urlSession;
	AMSMescalFairPlay* _fairPlayContext;
	long long _mescalType;
	BOOL _primed;

}

@property (assign,nonatomic) BOOL primed;              //@synthesize primed=_primed - In the implementation block
+(id)sessionWithType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(void)setPrimed:(BOOL)arg1 ;
-(BOOL)primed;
-(void)_resetSession;
-(BOOL)_verifyEntitlements;
-(BOOL)_verifyPrimeResponse:(id)arg1 error:(id*)arg2 ;
-(id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
-(BOOL)_cacheCertData:(id)arg1 expiration:(double)arg2 ;
-(id)_loadCertificateDataWithBag:(id)arg1 error:(id*)arg2 ;
-(id)_establishContextWithBag:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldRetryFairPlayForError:(id)arg1 ;
-(id)_cachedCertData;
-(id)signData:(id)arg1 bag:(id)arg2 error:(id*)arg3 ;
-(id)_cachedCertPath;
-(BOOL)primeTheConnectionWithBag:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id*)arg4 ;
@end

