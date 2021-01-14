/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SSAccount *)account;
-(void)setAccount:(SSAccount *)arg1 ;
-(void)run;
-(void)setLogKey:(NSString *)arg1 ;
-(id)_copyAuthenticationContext;
-(NSString *)logKey;
-(void)_disableAutomaticDownloadKinds;
-(void)_disableBookkeeper;
-(void)_sendLogoutRequest;
-(id)_sbsyncData;
-(id)_createDisableBookkeeperRequestPropertiesWithURL:(id)arg1 ;
-(id)_createLogoutRequestProperties;
-(id)initWithAccount:(id)arg1 logKey:(id)arg2 ;
@end

