/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSXPCConnection;

@interface CDDCloudKitClient : NSObject {

	BOOL _interrupted;
	BOOL _invalidated;
	NSXPCConnection* _connection;

}
-(BOOL)_valid;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)handleMessage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

