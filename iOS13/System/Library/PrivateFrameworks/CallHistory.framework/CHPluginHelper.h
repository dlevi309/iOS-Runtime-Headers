/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@class NSXPCConnection, NSXPCInterface;

@interface CHPluginHelper : NSObject {

	NSXPCConnection* _connection;
	NSXPCInterface* _interface;

}
-(id)init;
-(unsigned long long)unreadCallCount;
-(id)recentCallsWithLimitingTypes:(unsigned)arg1 ;
@end

