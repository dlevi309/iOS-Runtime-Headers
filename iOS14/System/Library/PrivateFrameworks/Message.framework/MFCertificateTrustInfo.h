/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


#import <Message/Message-Structs.h>
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
-(NSString *)sender;
-(SecTrustRef)trust;
-(id)initWithCertificateType:(unsigned long long)arg1 trust:(SecTrustRef)arg2 sender:(id)arg3 ;
-(ECSecureMIMETrustEvaluation *)trustEvaluation;
-(unsigned long long)certificateType;
-(void)dealloc;
@end

