/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString;

@interface AAMyPhotoRequest : AARequest {

	ACAccount* _account;
	NSString* _serverCacheTag;
	ACAccount* _iTunesAccount;

}

@property (nonatomic,copy) NSString * serverCacheTag;                                         //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
@property (setter=setiTunesAccount:,nonatomic,retain) ACAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
+(Class)responseClass;
-(id)urlString;
-(void)setiTunesAccount:(id)arg1 ;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(ACAccount *)iTunesAccount;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 ;
@end

