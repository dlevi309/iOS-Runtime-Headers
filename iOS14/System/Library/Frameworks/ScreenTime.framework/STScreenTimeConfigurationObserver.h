/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ScreenTime.framework/ScreenTime
*/


@class STScreenTimeConfiguration, NSXPCConnection;

@interface STScreenTimeConfigurationObserver : NSObject {

	int _notificationToken;
	STScreenTimeConfiguration* _configuration;
	NSXPCConnection* _xpcConnection;

}

@property (readonly) NSXPCConnection * xpcConnection;                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (retain) STScreenTimeConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign) int notificationToken;                                  //@synthesize notificationToken=_notificationToken - In the implementation block
-(void)startObserving;
-(void)stopObserving;
-(NSXPCConnection *)xpcConnection;
-(void)setNotificationToken:(int)arg1 ;
-(STScreenTimeConfiguration *)configuration;
-(int)notificationToken;
-(void)dealloc;
-(void)setConfiguration:(STScreenTimeConfiguration *)arg1 ;
-(void)_requestConfiguration;
-(void)_updateWithConfiguration:(id)arg1 ;
-(id)initWithUpdateQueue:(id)arg1 ;
@end

