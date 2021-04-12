/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
*/

#import <libobjc.A.dylib/CNDonationAnalyticsLogger.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger> {

	NSObject*<OS_os_log> _log_t;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log_t;              //@synthesize log_t=_log_t - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_os_log>)log_t;
-(void)willReportAnalytics;
-(void)didReportAnalytics;
-(void)withinReportingInterval:(id)arg1 ;
-(void)noMeCard;
-(void)noDonatedMeCard;
@end

