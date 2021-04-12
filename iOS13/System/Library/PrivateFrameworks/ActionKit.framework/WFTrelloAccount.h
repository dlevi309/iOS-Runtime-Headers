/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFAccount.h>

@class NSString;

@interface WFTrelloAccount : WFAccount {

	NSString* _token;
	NSString* _email;

}

@property (nonatomic,copy) NSString * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * email;              //@synthesize email=_email - In the implementation block
+(id)localizedServiceName;
+(id)serviceID;
+(id)accountWithToken:(id)arg1 ;
-(NSString *)token;
-(BOOL)isValid;
-(id)localizedName;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
@end

