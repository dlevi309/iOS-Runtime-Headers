/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
*/


@class NSDictionary, NSString, NSDate, NSError;

@interface DAEASOAuthTokenResponse : NSObject {

	long long _statusCode;
	NSDictionary* _data;
	NSString* _accessToken;
	NSString* _refreshToken;
	NSString* _idToken;
	NSDate* _expiryDate;
	NSError* _error;
	NSString* _errorMessage;
	NSString* _user_id;

}

@property (nonatomic,readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * data;                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * accessToken;               //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,readonly) NSString * refreshToken;              //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,readonly) NSString * idToken;                   //@synthesize idToken=_idToken - In the implementation block
@property (nonatomic,readonly) NSDate * expiryDate;                  //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) NSString * user_id;                   //@synthesize user_id=_user_id - In the implementation block
-(NSString *)accessToken;
-(NSString *)refreshToken;
-(NSString *)errorMessage;
-(NSError *)error;
-(long long)statusCode;
-(NSDictionary *)data;
-(NSDate *)expiryDate;
-(NSString *)idToken;
-(NSString *)user_id;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(id)usernameFromJWTToken:(id)arg1 ;
@end

