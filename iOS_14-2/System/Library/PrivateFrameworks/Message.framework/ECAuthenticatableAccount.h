/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

@class NSString;


@protocol ECAuthenticatableAccount <NSObject>
@property (readonly) NSString * username; 
@property (copy,readonly) NSString * password; 
@property (nonatomic,copy,readonly) NSString * hostname; 
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSString * oauth2Token; 
@required
-(NSString *)password;
-(NSString *)domain;
-(NSString *)username;
-(NSString *)hostname;
-(void)setMissingPasswordError;
-(NSString *)oauth2Token;

@end

