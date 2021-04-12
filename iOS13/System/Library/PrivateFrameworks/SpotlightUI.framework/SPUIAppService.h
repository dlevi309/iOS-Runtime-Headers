/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)activate;
-(void)deactivate;
-(void)_cancelAwakeNotifyToken;
-(void)registerAwakeNotifyToken;
@end

