/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@class EMRemoteConnection;

@interface EMFetchController : NSObject {

	EMRemoteConnection* _connection;

}

@property (retain) EMRemoteConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)remoteInterface;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(id)diagnosticInformation;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)performFetchOfType:(int)arg1 ;
-(void)setCurrentSuppressionContexts:(id)arg1 suppressedContexts:(id)arg2 ;
-(void)performFetchOfType:(int)arg1 mailboxes:(id)arg2 ;
-(void)performFetchOfType:(int)arg1 accounts:(id)arg2 ;
@end

