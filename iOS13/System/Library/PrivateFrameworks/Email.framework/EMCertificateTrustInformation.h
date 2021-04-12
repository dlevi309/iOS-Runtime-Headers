/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <Email/Email-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ECSecureMIMETrustEvaluation, NSString;

@interface EMCertificateTrustInformation : NSObject <EFLoggable, NSSecureCoding> {

	BOOL __forceNetworkAccessAllowed;
	SecTrustRef _trust;
	ECSecureMIMETrustEvaluation* _trustEvaluation;
	NSString* _sender;
	unsigned long long _certificateType;

}

@property (assign,nonatomic) SecTrustRef trust;                                              //@synthesize trust=_trust - In the implementation block
@property (assign,nonatomic) unsigned long long certificateType;                             //@synthesize certificateType=_certificateType - In the implementation block
@property (nonatomic,retain) ECSecureMIMETrustEvaluation * trustEvaluation;                  //@synthesize trustEvaluation=_trustEvaluation - In the implementation block
@property (nonatomic,copy) NSString * sender;                                                //@synthesize sender=_sender - In the implementation block
@property (assign,nonatomic) BOOL _forceNetworkAccessAllowed;                                //@synthesize _forceNetworkAccessAllowed=__forceNetworkAccessAllowed - In the implementation block
@property (nonatomic,copy,readonly) id<ECEmailAddressConvertible> emailAddress; 
@property (nonatomic,copy,readonly) NSString * commonName; 
@property (nonatomic,readonly) SecCertificateRef certificate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)log;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SecCertificateRef)certificate;
-(SecTrustRef)trust;
-(NSString *)sender;
-(void)setSender:(NSString *)arg1 ;
-(id<ECEmailAddressConvertible>)emailAddress;
-(void)setTrust:(SecTrustRef)arg1 ;
-(ECSecureMIMETrustEvaluation *)trustEvaluation;
-(unsigned long long)certificateType;
-(id)initWithTrust:(SecTrustRef)arg1 certificateType:(unsigned long long)arg2 sender:(id)arg3 ;
-(void)setCertificateType:(unsigned long long)arg1 ;
-(NSString *)commonName;
-(void)evaluateTrustWithOptions:(unsigned long long)arg1 ;
-(void)reevaluateTrustWithNetworkAccessAllowed;
-(void)setTrustEvaluation:(ECSecureMIMETrustEvaluation *)arg1 ;
-(BOOL)_forceNetworkAccessAllowed;
-(void)set_forceNetworkAccessAllowed:(BOOL)arg1 ;
@end

