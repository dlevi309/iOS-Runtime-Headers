/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@interface ICADIProvisionSession : NSObject {

	unsigned long long _accountID;
	unsigned _sessionID;

}
-(void)_destroySession;
-(BOOL)endWithMessageData:(id)arg1 transportKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)startWithServerActionData:(id)arg1 returningClientData:(id*)arg2 error:(id*)arg3 ;
-(id)initWithAccountID:(unsigned long long)arg1 ;
-(void)dealloc;
@end

