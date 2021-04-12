/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSString, NSArray, NSError, NSDictionary;

@interface SLWebUserInfoResponse : NSObject {

	long long _statusCode;
	NSString* _displayName;
	NSArray* _emailAddresses;
	NSError* _error;
	NSString* _errorMessage;
	NSDictionary* _userInfo;

}

@property (readonly) long long statusCode;                  //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSString * emailAddress; 
@property (readonly) NSArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (readonly) NSString * errorMessage;               //@synthesize errorMessage=_errorMessage - In the implementation block
@property (readonly) NSDictionary * userInfo;               //@synthesize userInfo=_userInfo - In the implementation block
-(NSDictionary *)userInfo;
-(NSError *)error;
-(long long)statusCode;
-(void)setError:(NSError *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)emailAddresses;
-(NSString *)errorMessage;
-(NSString *)emailAddress;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
@end

