/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


#import <MessageLegacy/MessageLegacy-Structs.h>
@class ECSecureMIMETrustEvaluation, NSString;

@interface MFCertificateTrustInfo : NSObject {

	SecTrustRef _unevaluatedTrust;
	ECSecureMIMETrustEvaluation* _trustEvaluation;
	NSString* _uncommentedSender;
	unsigned long long _certificateType;
	NSString* _sender;

}

@property (nonatomic,readonly) unsigned long long certificateType;                         //@synthesize certificateType=_certificateType - In the implementation block
@property (nonatomic,copy,readonly) NSString * sender;                                     //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) ECSecureMIMETrustEvaluation * trustEvaluation; 
@property (nonatomic,readonly) SecTrustRef trust; 
-(void)dealloc;
-(SecTrustRef)trust;
-(NSString *)sender;
-(id)initWithCertificateType:(unsigned long long)arg1 trust:(SecTrustRef)arg2 sender:(id)arg3 ;
-(ECSecureMIMETrustEvaluation *)trustEvaluation;
-(unsigned long long)certificateType;
@end

