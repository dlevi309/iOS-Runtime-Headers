/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(id<NSURLAuthenticationChallengeSender>)sender;
-(NSString *)password;
-(void)setLocalizedMessage:(NSString *)arg1 ;
-(void)cancelAuthentication;
-(long long)failureCount;
-(BOOL)hasPassword;
-(NSString *)user;
-(NSString *)localizedMessage;
-(void)dealloc;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 ;
-(BOOL)userNameIsEditable;
-(BOOL)userNameIsEmail;
@end

