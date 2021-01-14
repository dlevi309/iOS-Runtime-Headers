/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)scopes;
+(id)clientID;
+(id)sessionManager;
+(id)serviceID;
+(id)clientSecret;
+(id)localizedServiceName;
+(BOOL)allowsMultipleAccounts;
+(id)redirectURI;
-(id)localizedName;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)teamName;
-(void)setTeamName:(NSString *)arg1 ;
@end

