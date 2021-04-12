/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@class NSURLAuthenticationChallenge, NSString;

@interface ISAuthenticationChallenge : NSObject {

	NSURLAuthenticationChallenge* _challenge;
	NSString* _localizedMessage;
	NSString* _localizedTitle;

}

@property (retain) NSString * localizedMessage;                                  //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (retain) NSString * localizedTitle;                                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (readonly) BOOL hasPassword; 
@property (retain,readonly) NSString * password; 
@property (retain,readonly) NSString * user; 
@property (readonly) long long failureCount; 
@property (readonly) BOOL userNameIsEditable; 
@property (readonly) BOOL userNameIsEmail; 
@property (readonly) id<NSURLAuthenticationChallengeSender> sender; 
-(void)dealloc;
-(NSString *)user;
-(NSString *)password;
-(id<NSURLAuthenticationChallengeSender>)sender;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(BOOL)hasPassword;
-(long long)failureCount;
-(NSString *)localizedMessage;
-(void)setLocalizedMessage:(NSString *)arg1 ;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthentication;
-(void)useCredential:(id)arg1 ;
-(BOOL)userNameIsEditable;
-(BOOL)userNameIsEmail;
@end

