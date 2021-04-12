/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@class NSDictionary, NSString, NSDate, NSError;

@interface DAEASOAuthTokenResponse : NSObject {

	long long _statusCode;
	NSDictionary* _data;
	NSString* _token;
	NSString* _refreshToken;
	NSDate* _expiryDate;
	NSError* _error;
	NSString* _errorMessage;
	NSString* _user_id;

}

@property (nonatomic,readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * data;                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * token;                     //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSString * refreshToken;              //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,readonly) NSDate * expiryDate;                  //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) NSString * user_id;                   //@synthesize user_id=_user_id - In the implementation block
-(NSString *)token;
-(NSDictionary *)data;
-(NSError *)error;
-(long long)statusCode;
-(NSDate *)expiryDate;
-(NSString *)errorMessage;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)refreshToken;
-(id)usernameFromJWTToken:(id)arg1 ;
-(NSString *)user_id;
@end

