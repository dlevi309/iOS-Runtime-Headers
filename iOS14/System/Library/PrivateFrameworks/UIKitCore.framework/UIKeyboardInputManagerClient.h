/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSXPCConnection;

@interface UIKeyboardInputManagerClient : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)handleError:(id)arg1 forRequest:(id)arg2 ;
-(NSXPCConnection *)connection;
-(void)handleRequest:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

