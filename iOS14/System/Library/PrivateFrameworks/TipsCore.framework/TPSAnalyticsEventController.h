/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <libobjc.A.dylib/_TPSXPCExportable.h>

@class TPSDuetDataProvider, TPSAnalyticsDataProvider, _TPSXPCConnection, NSString;

@interface TPSAnalyticsEventController : NSObject <_TPSXPCExportable> {

	TPSDuetDataProvider* _duetDataProvider;
	TPSAnalyticsDataProvider* _dataProvider;
	_TPSXPCConnection* _xpcConnection;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> analyticsQueue; 
@property (nonatomic,retain) _TPSXPCConnection * xpcConnection;                           //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic,__weak) TPSAnalyticsDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)callerIsTipsd;
-(void)setXpcConnection:(_TPSXPCConnection *)arg1 ;
-(_TPSXPCConnection *)xpcConnection;
-(void)connectionInvalidated;
-(void)setDataProvider:(TPSAnalyticsDataProvider *)arg1 ;
-(id)duetDataProvider;
-(id)exportedInterface;
-(void)_destroyXPCConnection;
-(void)logAnalyticsEventFromTipsd:(id)arg1 ;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)logAnalyticsEvents:(id)arg1 ;
-(TPSAnalyticsDataProvider *)dataProvider;
-(void)logAnalyticsEvent:(id)arg1 ;
-(void)sendToCoreAnalytics:(id)arg1 eventName:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)analyticsQueue;
-(void)logAnalyticsEventsFromTipsd:(id)arg1 ;
@end

