/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)serviceID;
+(id)localizedServiceName;
+(id)accountWithToken:(id)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(id)localizedName;
-(void)refreshWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isValid;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)token;
-(NSString *)email;
@end

