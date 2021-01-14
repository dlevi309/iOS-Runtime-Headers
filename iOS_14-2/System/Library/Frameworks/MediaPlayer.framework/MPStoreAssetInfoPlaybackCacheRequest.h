/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)accountID;
-(void)setAccountID:(unsigned long long)arg1 ;
-(void)setRequestType:(long long)arg1 ;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(long long)requestType;
-(unsigned long long)delegatedAccountID;
-(void)setDelegatedAccountID:(unsigned long long)arg1 ;
-(NSString *)redownloadParameters;
-(void)setRedownloadParameters:(NSString *)arg1 ;
-(long long)storeRadioAdamID;
-(void)setStoreRadioAdamID:(long long)arg1 ;
-(void)setStoreCloudID:(unsigned long long)arg1 ;
-(long long)storeSubscriptionAdamID;
-(long long)storePurchasedAdamID;
-(void)setStorePurchasedAdamID:(long long)arg1 ;
-(unsigned long long)hash;
-(void)setStoreSubscriptionAdamID:(long long)arg1 ;
-(unsigned long long)storeCloudID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cloudUniversalLibraryID;
-(BOOL)isEqual:(id)arg1 ;
@end

