/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@class EMRemoteConnection;

@interface EMFetchController : NSObject {

	EMRemoteConnection* _connection;

}

@property (retain) EMRemoteConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)remoteInterface;
-(id)initWithRemoteConnection:(id)arg1 ;
-(id)diagnosticInformation;
-(void)performFetchOfType:(int)arg1 accounts:(id)arg2 ;
-(void)performFetchOfType:(int)arg1 ;
-(void)performFetchOfType:(int)arg1 mailboxes:(id)arg2 ;
-(EMRemoteConnection *)connection;
-(void)setCurrentSuppressionContexts:(id)arg1 suppressedContexts:(id)arg2 ;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
@end

