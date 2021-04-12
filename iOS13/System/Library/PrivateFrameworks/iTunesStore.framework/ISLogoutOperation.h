/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class SSAccount, NSString;

@interface ISLogoutOperation : ISOperation {

	SSAccount* _account;
	NSString* _logKey;

}

@property (nonatomic,retain) SSAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * logKey;                //@synthesize logKey=_logKey - In the implementation block
-(void)run;
-(SSAccount *)account;
-(void)setAccount:(SSAccount *)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(id)_copyAuthenticationContext;
-(void)_disableAutomaticDownloadKinds;
-(void)_disableBookkeeper;
-(void)_sendLogoutRequest;
-(id)_sbsyncData;
-(id)_createDisableBookkeeperRequestPropertiesWithURL:(id)arg1 ;
-(id)_createLogoutRequestProperties;
-(id)initWithAccount:(id)arg1 logKey:(id)arg2 ;
@end

