/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)accountUniqueIdentifier;
-(BOOL)hasOnlinePlaybackKeys;
-(BOOL)hasOfflinePlaybackKeys;
-(void)setHasOnlinePlaybackKeys:(BOOL)arg1 ;
-(void)setHasOfflinePlaybackKeys:(BOOL)arg1 ;
-(id)initWithFairPlaySubscriptionInfo:(FPSubscriptionInfo_)arg1 ;
-(void)setAccountUniqueIdentifier:(unsigned long long)arg1 ;
@end

