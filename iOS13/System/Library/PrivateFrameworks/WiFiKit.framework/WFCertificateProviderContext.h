/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol WFCertificateProviderContext <WFProviderContext>
@property (nonatomic,readonly) SecTrustRef certificateTrust; 
@required
-(void)accept;
-(SecTrustRef)certificateTrust;
-(void)launchSettings;

@end

