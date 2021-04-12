/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

@class NSString, NSArray;


@protocol SLWebClient <NSObject,NSSecureCoding>
@property (nonatomic,readonly) NSString * clientID; 
@property (nonatomic,readonly) NSString * clientRedirect; 
@property (nonatomic,readonly) NSString * tokenURL; 
@property (nonatomic,readonly) NSString * authRequestURL; 
@property (nonatomic,readonly) NSString * userInfoURL; 
@property (nonatomic,readonly) NSString * fallbackUserInfoURL; 
@property (nonatomic,readonly) Class webAuthRequestClass; 
@property (nonatomic,readonly) Class tokenRequestClass; 
@property (nonatomic,readonly) Class tokenResponseClass; 
@property (nonatomic,readonly) Class webUserInfoResponseClass; 
@property (nonatomic,readonly) Class fallbackWebUserInfoResponseClass; 
@property (nonatomic,readonly) NSString * clientSecret; 
@property (nonatomic,readonly) NSString * clientRedirectForAppOpenURL; 
@property (nonatomic,readonly) NSString * source; 
@property (nonatomic,readonly) NSArray * defaultScope; 
@property (nonatomic,readonly) NSArray * youTubeScope; 
@required
-(NSString *)source;
-(NSString *)clientID;
-(Class)tokenRequestClass;
-(NSString *)clientSecret;
-(NSString *)clientRedirect;
-(NSString *)tokenURL;
-(Class)tokenResponseClass;
-(NSString *)userInfoURL;
-(Class)webUserInfoResponseClass;
-(NSString *)fallbackUserInfoURL;
-(Class)fallbackWebUserInfoResponseClass;
-(NSString *)authRequestURL;
-(Class)webAuthRequestClass;
-(NSString *)clientRedirectForAppOpenURL;
-(NSArray *)defaultScope;
-(NSArray *)youTubeScope;

@end

