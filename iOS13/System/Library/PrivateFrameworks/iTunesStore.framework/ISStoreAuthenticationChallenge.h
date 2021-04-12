/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISAuthenticationChallenge.h>

@protocol NSURLAuthenticationChallengeSender;
@class NSString;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {

	long long _failureCount;
	BOOL _hasPassword;
	NSString* _password;
	id<NSURLAuthenticationChallengeSender> _sender;
	NSString* _user;
	BOOL _userNameIsEditable;

}

@property (assign) long long failureCount;                                     //@synthesize failureCount=_failureCount - In the implementation block
@property (assign) BOOL hasPassword;                                           //@synthesize hasPassword=_hasPassword - In the implementation block
@property (retain) NSString * password;                                        //@synthesize password=_password - In the implementation block
@property (assign) id<NSURLAuthenticationChallengeSender> sender;              //@synthesize sender=_sender - In the implementation block
@property (retain) NSString * user;                                            //@synthesize user=_user - In the implementation block
@property (assign) BOOL userNameIsEditable;                                    //@synthesize userNameIsEditable=_userNameIsEditable - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)user;
-(NSString *)password;
-(void)setUser:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(id<NSURLAuthenticationChallengeSender>)sender;
-(void)setSender:(id<NSURLAuthenticationChallengeSender>)arg1 ;
-(BOOL)hasPassword;
-(long long)failureCount;
-(void)setFailureCount:(long long)arg1 ;
-(BOOL)userNameIsEditable;
-(BOOL)userNameIsEmail;
-(void)setUserNameIsEditable:(BOOL)arg1 ;
-(void)setHasPassword:(BOOL)arg1 ;
@end

