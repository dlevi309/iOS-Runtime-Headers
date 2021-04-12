/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

@class NSString;


@protocol ECAuthenticatableAccount <NSObject>
@property (readonly) NSString * username; 
@property (copy,readonly) NSString * password; 
@property (nonatomic,copy,readonly) NSString * hostname; 
@property (nonatomic,readonly) NSString * domain; 
@property (nonatomic,readonly) NSString * oauth2Token; 
@required
-(NSString *)domain;
-(NSString *)password;
-(NSString *)hostname;
-(NSString *)username;
-(void)setMissingPasswordError;
-(NSString *)oauth2Token;

@end

