/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUDownloadMetadata.h>

@interface SUMutableDownloadMetadata : SUDownloadMetadata

@property (assign,nonatomic) int downloadFeeAgreementStatus; 
@property (assign,nonatomic) int termsAndConditionsAgreementStatus; 
@property (assign,nonatomic) BOOL enforceWifiOnlyOverride; 
@property (assign,getter=isAutoDownload,nonatomic) BOOL autoDownload; 
@property (assign,getter=isDownloadOnly,nonatomic) BOOL downloadOnly; 
-(id)initWithMetadata:(id)arg1 ;
-(void)applyDownloadPolicy:(id)arg1 ;
@end

