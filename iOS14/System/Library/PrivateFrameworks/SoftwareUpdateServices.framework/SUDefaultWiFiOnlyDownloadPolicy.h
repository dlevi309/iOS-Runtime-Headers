/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUDefaultWiFiOnlyDownloadPolicy : SUDefaultDownloadPolicy
+(unsigned long long)wifiOnlyPeriodInDaysForUpdate:(id)arg1 ;
-(id)initWithDescriptor:(id)arg1 ;
-(BOOL)isDownloadAllowableForCellular;
-(BOOL)allowExpensiveNetwork;
@end

