/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@class NSXPCConnection, NSXPCInterface;

@interface CallDBMigrator : NSObject {

	NSXPCConnection* _connection;
	NSXPCInterface* _interface;

}
-(id)init;
-(void)migrate:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
@end

