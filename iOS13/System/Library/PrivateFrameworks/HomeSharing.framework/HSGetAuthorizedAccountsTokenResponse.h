/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

