/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class NSURL;

@interface BRCDatabaseRestoreManager : NSObject {

	NSURL* _userURL;
	NSURL* _clientDatabaseURL;

}

@property (nonatomic,retain) NSURL * userURL;                        //@synthesize userURL=_userURL - In the implementation block
@property (nonatomic,retain) NSURL * clientDatabaseURL;              //@synthesize clientDatabaseURL=_clientDatabaseURL - In the implementation block
-(NSURL *)userURL;
-(void)setUserURL:(NSURL *)arg1 ;
-(id)initWithUserURL:(id)arg1 ;
-(void)restoreWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSURL *)clientDatabaseURL;
-(void)setClientDatabaseURL:(NSURL *)arg1 ;
@end

