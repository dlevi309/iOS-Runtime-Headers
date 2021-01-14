/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

