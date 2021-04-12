/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)allowExpensiveNetwork;
-(BOOL)isPowerRequired;
-(unsigned long long)wifiOnlyPeriodInDays;
-(id)computAutoDownloadEndDateFromDate:(id)arg1 ;
-(id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg1 ;
@end

