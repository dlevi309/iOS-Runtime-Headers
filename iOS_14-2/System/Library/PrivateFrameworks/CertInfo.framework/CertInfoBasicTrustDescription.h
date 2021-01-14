/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <CertInfo/CertInfoTrustDescription.h>

@class NSString;

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription> {

	SecTrustRef _trust;
	int _action;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_expirationDate;
-(id)summaryTitle;
-(BOOL)isTrusted;
-(id)initWithTrust:(SecTrustRef)arg1 action:(int)arg2 ;
-(void)dealloc;
-(unsigned long long)certificateCount;
-(id)certificatePropertiesAtIndex:(unsigned long long)arg1 ;
-(id)summarySubtitle;
-(id)summaryDescriptionItems;
-(id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1 ;
-(id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1 ;
-(id)certificateExpirationDateAtIndex:(unsigned long long)arg1 ;
-(BOOL)isRootCertificate;
@end

