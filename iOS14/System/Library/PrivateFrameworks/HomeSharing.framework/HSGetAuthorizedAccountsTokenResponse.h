/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
*/

#import <HomeSharing/HSResponse.h>

@class NSData;

@interface HSGetAuthorizedAccountsTokenResponse : HSResponse {

	NSData* tokenData;

}

@property (nonatomic,copy) NSData * tokenData; 
-(NSData *)tokenData;
-(void)setTokenData:(NSData *)arg1 ;
@end

