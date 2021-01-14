/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/

#import <libobjc.A.dylib/ENRegionMonitorDataSource.h>

@protocol ENRegionMonitorSourceDelegate;
@class NSObject, NSString;

@interface ENRegionTestDataSource : NSObject <ENRegionMonitorDataSource> {

	NSObject*<ENRegionMonitorSourceDelegate> delegate;

}

@property (assign,nonatomic,__weak) NSObject*<ENRegionMonitorSourceDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopMonitoring;
-(NSObject*<ENRegionMonitorSourceDelegate>)delegate;
-(void)startMonitoring;
-(void)setDelegate:(NSObject*<ENRegionMonitorSourceDelegate>)arg1 ;
-(NSString *)description;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(id)currentRegionVisit;
-(void)regionChanged;
@end

