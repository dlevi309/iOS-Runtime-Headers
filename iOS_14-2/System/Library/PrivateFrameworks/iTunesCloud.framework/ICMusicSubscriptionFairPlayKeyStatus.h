/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ICMusicSubscriptionFairPlayKeyStatus : NSObject <NSCopying> {

	BOOL _hasOnlinePlaybackKeys;
	BOOL _hasOfflinePlaybackKeys;
	unsigned long long _accountUniqueIdentifier;

}

@property (assign,nonatomic) unsigned long long accountUniqueIdentifier;              //@synthesize accountUniqueIdentifier=_accountUniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasOnlinePlaybackKeys;                              //@synthesize hasOnlinePlaybackKeys=_hasOnlinePlaybackKeys - In the implementation block
@property (assign,nonatomic) BOOL hasOfflinePlaybackKeys;                             //@synthesize hasOfflinePlaybackKeys=_hasOfflinePlaybackKeys - In the implementation block
-(BOOL)hasOnlinePlaybackKeys;
-(BOOL)hasOfflinePlaybackKeys;
-(void)setHasOnlinePlaybackKeys:(BOOL)arg1 ;
-(void)setHasOfflinePlaybackKeys:(BOOL)arg1 ;
-(unsigned long long)accountUniqueIdentifier;
-(id)initWithFairPlaySubscriptionInfo:(FPSubscriptionInfo_)arg1 ;
-(void)setAccountUniqueIdentifier:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

