/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_didFinish;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

