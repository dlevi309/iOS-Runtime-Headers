/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaSafetyNet.framework/MediaSafetyNet
*/


@class NSXPCConnection, NSString;

@interface MSNScopedException : NSObject {

	NSXPCConnection* _connection;
	NSString* _exception;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (copy) NSString * exception;                        //@synthesize exception=_exception - In the implementation block
-(NSString *)exception;
-(NSXPCConnection *)connection;
-(void)setException:(NSString *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConnection:(id)arg1 exception:(id)arg2 ;
@end

