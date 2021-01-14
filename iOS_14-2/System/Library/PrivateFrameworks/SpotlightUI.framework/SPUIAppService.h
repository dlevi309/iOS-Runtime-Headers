/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
*/


@protocol OS_dispatch_queue;
@class NSObject, SPXPCConnection;

@interface SPUIAppService : NSObject {

	int _awakeNotifyToken;
	NSObject*<OS_dispatch_queue> _appServiceQueue;
	SPXPCConnection* _backgroundConnection;
	SPXPCConnection* _appConnection;
	BOOL _activated;

}
+(void)initialize;
+(id)sharedAppService;
-(void)_cancelAwakeNotifyToken;
-(id)init;
-(void)deactivate;
-(void)activate;
-(void)registerAwakeNotifyToken;
@end

