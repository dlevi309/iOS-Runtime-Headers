/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString, SSAccount;

@interface AAMyPhotoRequest : AARequest {

	ACAccount* _account;
	NSString* _serverCacheTag;
	SSAccount* _iTunesAccount;

}

@property (nonatomic,copy) NSString * serverCacheTag;                                         //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
@property (setter=setiTunesAccount:,nonatomic,retain) SSAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 ;
-(id)urlRequest;
-(id)urlString;
-(SSAccount *)iTunesAccount;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(void)setiTunesAccount:(id)arg1 ;
@end

