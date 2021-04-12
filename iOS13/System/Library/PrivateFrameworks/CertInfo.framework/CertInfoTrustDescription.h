/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/


@protocol CertInfoTrustDescription <NSObject>
@required
-(BOOL)isTrusted;
-(unsigned long long)certificateCount;
-(id)certificatePropertiesAtIndex:(unsigned long long)arg1;
-(id)summaryTitle;
-(id)summarySubtitle;
-(id)summaryDescriptionItems;
-(id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
-(id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
-(id)certificateExpirationDateAtIndex:(unsigned long long)arg1;
-(BOOL)isRootCertificate;

@end

