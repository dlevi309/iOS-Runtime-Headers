/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/EmailCore-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSString, NSError;

@interface ECSecureMIMETrustEvaluation : NSObject <EFLoggable> {

	unsigned _trustResult;
	SecTrustRef _trust;
	NSString* _signerEmailAddress;
	unsigned long long _options;
	NSError* _error;

}

@property (nonatomic,readonly) SecTrustRef trust;                                       //@synthesize trust=_trust - In the implementation block
@property (nonatomic,copy,readonly) NSString * signerEmailAddress;                      //@synthesize signerEmailAddress=_signerEmailAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned trustResult;                                    //@synthesize trustResult=_trustResult - In the implementation block
@property (nonatomic,readonly) BOOL requiresReevaluationWithNetworkAccess; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)evaluateTrust:(SecTrustRef)arg1 withOptions:(unsigned long long)arg2 signerEmailAddress:(id)arg3 ;
+(id)reevaluateWithNetworkAccessAllowed:(id)arg1 ;
+(id)anchorCertificatesForTesting;
+(void)setAnchorCertificatesForTesting:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)options;
-(NSError *)error;
-(SecTrustRef)trust;
-(unsigned)trustResult;
-(id)_initWithTrust:(SecTrustRef)arg1 options:(unsigned long long)arg2 signerEmailAddress:(id)arg3 ;
-(BOOL)requiresReevaluationWithNetworkAccess;
-(NSString *)signerEmailAddress;
-(void)_evaluate;
@end

