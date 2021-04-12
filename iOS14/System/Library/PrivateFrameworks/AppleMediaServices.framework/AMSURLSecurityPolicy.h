/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)trustMode;
-(id)initWithTrustMode:(long long)arg1 ;
-(id)initWithTrustMode:(long long)arg1 pinnedCertificated:(id)arg2 ;
-(BOOL)_evaluateExtendedValidationWithTrust:(SecTrustRef)arg1 forTask:(id)arg2 ;
-(BOOL)_shouldSkipValidation;
-(BOOL)_evaluatePinnedCertificatesWithTrust:(SecTrustRef)arg1 forTask:(id)arg2 ;
-(NSSet *)pinnedCertificates;
-(void)setTrustMode:(long long)arg1 ;
-(BOOL)evaluateTrust:(SecTrustRef)arg1 forTask:(id)arg2 ;
-(void)setPinnedCertificates:(NSSet *)arg1 ;
@end

