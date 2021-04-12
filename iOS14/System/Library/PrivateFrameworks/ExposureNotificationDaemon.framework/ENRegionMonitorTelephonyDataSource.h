/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <libobjc.A.dylib/ENCoreTelephonyUtilityObserver.h>
#import <libobjc.A.dylib/ENRegionMonitorDataSource.h>

@protocol ENRegionMonitorSourceDelegate, OS_dispatch_queue;
@class NSObject, ENRegionVisit, ENCoreTelephonyUtility, NSString;

@interface ENRegionMonitorTelephonyDataSource : NSObject <ENCoreTelephonyUtilityObserver, ENRegionMonitorDataSource> {

	NSObject*<ENRegionMonitorSourceDelegate> delegate;
	ENRegionVisit* _cachedRegionVisit;
	NSObject*<OS_dispatch_queue> _dataSourceQueue;
	ENCoreTelephonyUtility* _telephonyUtility;

}

@property (nonatomic,copy) ENRegionVisit * cachedRegionVisit;                                       //@synthesize cachedRegionVisit=_cachedRegionVisit - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dataSourceQueue;                          //@synthesize dataSourceQueue=_dataSourceQueue - In the implementation block
@property (nonatomic,retain) ENCoreTelephonyUtility * telephonyUtility;                             //@synthesize telephonyUtility=_telephonyUtility - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ENRegionMonitorSourceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopMonitoring;
-(NSObject*<ENRegionMonitorSourceDelegate>)delegate;
-(void)setDataSourceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)startMonitoring;
-(void)setDelegate:(NSObject*<ENRegionMonitorSourceDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dataSourceQueue;
-(id)currentRegionVisit;
-(ENRegionVisit *)cachedRegionVisit;
-(void)setCachedRegionVisit:(ENRegionVisit *)arg1 ;
-(void)telephonyUtility:(id)arg1 mobileCountryCodeChanged:(id)arg2 andCountryCodeISO:(id)arg3 ;
-(void)setTelephonyUtility:(ENCoreTelephonyUtility *)arg1 ;
-(ENCoreTelephonyUtility *)telephonyUtility;
-(void)mobileCountryCodeChanged:(id)arg1 withISOString:(id)arg2 ;
@end

