/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)emailAddress;
-(NSArray *)emailAddresses;
-(void)setError:(NSError *)arg1 ;
-(NSString *)errorMessage;
-(NSError *)error;
-(long long)statusCode;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setErrorMessage:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
@end

