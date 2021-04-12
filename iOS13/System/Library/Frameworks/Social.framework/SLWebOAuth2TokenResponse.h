/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)token;
-(NSDictionary *)data;
-(NSError *)error;
-(long long)statusCode;
-(NSDate *)expiryDate;
-(NSString *)errorMessage;
-(NSString *)GUID;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
-(NSString *)refreshToken;
-(NSString *)idToken;

@end

