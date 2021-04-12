/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/


@protocol HKRPWatchAppInstallabilityDataSource;
@interface HKRPWatchAppInstallability : NSObject {

	id<HKRPWatchAppInstallabilityDataSource> _dataSource;

}

@property (nonatomic,readonly) BOOL shouldInstallWatchApp; 
-(id)initWithDevice:(id)arg1 ;
-(id)init;
-(id)initWithDataSource:(id)arg1 ;
-(BOOL)shouldInstallWatchApp;
@end

