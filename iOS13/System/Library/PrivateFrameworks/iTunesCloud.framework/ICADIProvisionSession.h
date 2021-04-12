/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@interface ICADIProvisionSession : NSObject {

	unsigned long long _accountID;
	unsigned _sessionID;

}
-(void)dealloc;
-(id)initWithAccountID:(unsigned long long)arg1 ;
-(BOOL)startWithServerActionData:(id)arg1 returningClientData:(id*)arg2 error:(id*)arg3 ;
-(BOOL)endWithMessageData:(id)arg1 transportKey:(id)arg2 error:(id*)arg3 ;
-(void)_destroySession;
@end

