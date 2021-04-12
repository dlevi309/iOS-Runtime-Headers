/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPStoreAssetInfoPlaybackCacheRequest : NSObject <NSCopying> {

	unsigned long long _accountID;
	unsigned long long _delegatedAccountID;
	long long _requestType;
	NSString* _redownloadParameters;
	NSString* _cloudUniversalLibraryID;
	long long _storeSubscriptionAdamID;
	unsigned long long _storeCloudID;
	long long _storePurchasedAdamID;
	long long _storeRadioAdamID;

}

@property (assign,nonatomic) unsigned long long accountID;                       //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) unsigned long long delegatedAccountID;              //@synthesize delegatedAccountID=_delegatedAccountID - In the implementation block
@property (assign,nonatomic) long long requestType;                              //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy) NSString * redownloadParameters;                      //@synthesize redownloadParameters=_redownloadParameters - In the implementation block
@property (nonatomic,copy) NSString * cloudUniversalLibraryID;                   //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
@property (assign,nonatomic) long long storeSubscriptionAdamID;                  //@synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID - In the implementation block
@property (assign,nonatomic) unsigned long long storeCloudID;                    //@synthesize storeCloudID=_storeCloudID - In the implementation block
@property (assign,nonatomic) long long storePurchasedAdamID;                     //@synthesize storePurchasedAdamID=_storePurchasedAdamID - In the implementation block
@property (assign,nonatomic) long long storeRadioAdamID;                         //@synthesize storeRadioAdamID=_storeRadioAdamID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)requestType;
-(unsigned long long)accountID;
-(void)setAccountID:(unsigned long long)arg1 ;
-(void)setRequestType:(long long)arg1 ;
-(NSString *)cloudUniversalLibraryID;
-(long long)storePurchasedAdamID;
-(long long)storeSubscriptionAdamID;
-(unsigned long long)delegatedAccountID;
-(void)setDelegatedAccountID:(unsigned long long)arg1 ;
-(NSString *)redownloadParameters;
-(void)setRedownloadParameters:(NSString *)arg1 ;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(unsigned long long)storeCloudID;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(long long)storeRadioAdamID;
-(void)setStoreRadioAdamID:(long long)arg1 ;
@end

