/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFOAuth2Account.h>

@class NSString;

@interface WFSlackAccount : WFOAuth2Account {

	NSString* _username;
	NSString* _teamName;

}

@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * teamName;              //@synthesize teamName=_teamName - In the implementation block
+(id)clientID;
+(id)scopes;
+(id)sessionManager;
+(id)clientSecret;
+(id)localizedServiceName;
+(id)serviceID;
+(BOOL)allowsMultipleAccounts;
+(id)redirectURI;
-(id)localizedName;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)teamName;
-(void)setTeamName:(NSString *)arg1 ;
@end

