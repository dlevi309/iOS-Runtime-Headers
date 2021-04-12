/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@class NSXPCConnection, NSXPCInterface;

@interface CHPluginHelper : NSObject {

	NSXPCConnection* _connection;
	NSXPCInterface* _interface;

}
-(id)init;
-(id)recentCallsWithLimitingTypes:(unsigned)arg1 ;
-(unsigned long long)unreadCallCount;
@end

