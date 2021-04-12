/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSSet;

@interface AMSURLSecurityPolicy : NSObject {

	long long _trustMode;
	NSSet* _pinnedCertificates;

}

@property (assign,nonatomic) long long trustMode;                     //@synthesize trustMode=_trustMode - In the implementation block
@property (nonatomic,retain) NSSet * pinnedCertificates;              //@synthesize pinnedCertificates=_pinnedCertificates - In the implementation block
+(id)defaultPolicy;
-(id)initWithTrustMode:(long long)arg1 ;
-(id)initWithTrustMode:(long long)arg1 pinnedCertificated:(id)arg2 ;
-(long long)trustMode;
-(BOOL)_evaluateExtendedValidationWithTrust:(SecTrustRef)arg1 forTask:(id)arg2 ;
-(BOOL)_evaluatePinnedCertificatesWithTrust:(SecTrustRef)arg1 forTask:(id)arg2 ;
-(BOOL)_shouldSkipValidation;
-(NSSet *)pinnedCertificates;
-(BOOL)evaluateTrust:(SecTrustRef)arg1 forTask:(id)arg2 ;
-(void)setTrustMode:(long long)arg1 ;
-(void)setPinnedCertificates:(NSSet *)arg1 ;
@end

