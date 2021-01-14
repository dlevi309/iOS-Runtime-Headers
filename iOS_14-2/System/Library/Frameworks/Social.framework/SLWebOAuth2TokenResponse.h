/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

@class NSDictionary, NSString, NSDate, NSError;


@protocol SLWebOAuth2TokenResponse <NSObject>
@property (readonly) long long statusCode; 
@property (readonly) NSDictionary * data; 
@property (readonly) NSString * token; 
@property (readonly) NSString * refreshToken; 
@property (readonly) NSString * idToken; 
@property (readonly) NSDate * expiryDate; 
@property (readonly) NSError * error; 
@property (readonly) NSString * errorMessage; 
@property (readonly) NSString * GUID; 
@required
-(NSString *)refreshToken;
-(NSString *)errorMessage;
-(NSError *)error;
-(long long)statusCode;
-(NSDictionary *)data;
-(NSDate *)expiryDate;
-(NSString *)idToken;
-(NSString *)token;
-(NSString *)GUID;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

