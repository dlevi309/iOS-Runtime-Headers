/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)isPowerRequired;
-(unsigned long long)wifiOnlyPeriodInDays;
-(id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg1 ;
@end

