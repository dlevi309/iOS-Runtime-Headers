/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<NSURLAuthenticationChallengeSender>)sender;
-(void)setSender:(id<NSURLAuthenticationChallengeSender>)arg1 ;
-(id)init;
-(void)setUser:(NSString *)arg1 ;
-(NSString *)password;
-(long long)failureCount;
-(BOOL)hasPassword;
-(void)setPassword:(NSString *)arg1 ;
-(void)setFailureCount:(long long)arg1 ;
-(NSString *)user;
-(void)dealloc;
-(BOOL)userNameIsEditable;
-(BOOL)userNameIsEmail;
-(void)setUserNameIsEditable:(BOOL)arg1 ;
-(void)setHasPassword:(BOOL)arg1 ;
@end

