/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@protocol VSServiceConnectionHandlerDelegate;
@class NSXPCConnection;

@interface VSServiceConnectionHandler : NSObject {

	NSXPCConnection* _connection;
	id<VSServiceConnectionHandlerDelegate> _delegate;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                        //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<VSServiceConnectionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VSServiceConnectionHandlerDelegate>)delegate;
-(void)setDelegate:(id<VSServiceConnectionHandlerDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_didFinish;
@end

