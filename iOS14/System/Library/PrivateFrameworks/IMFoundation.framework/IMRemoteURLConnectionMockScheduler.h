/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IMRemoteURLConnectionMockScheduler : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
-(BOOL)_connect;
-(id)init;
-(void)scheduleMockResponse:(id)arg1 forURL:(id)arg2 ;
-(void)scheduleMockResponse:(id)arg1 ;
@end

