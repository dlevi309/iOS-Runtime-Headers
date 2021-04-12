/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, ICURLBag, NSDate, NSArray, ICStoreHLSAssetInfo;

@interface ICMusicSubscriptionPlaybackResponseItem : NSObject <NSCopying> {

	NSDictionary* _itemResponseDictionary;
	ICURLBag* _urlBag;
	NSDate* _assetExpirationDate;

}

@property (nonatomic,copy) NSDate * assetExpirationDate;                         //@synthesize assetExpirationDate=_assetExpirationDate - In the implementation block
@property (nonatomic,readonly) long long storeAdamID; 
@property (nonatomic,copy,readonly) NSArray * fileAssets; 
@property (nonatomic,copy,readonly) ICStoreHLSAssetInfo * hlsAsset; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)storeAdamID;
-(NSArray *)fileAssets;
-(id)fileAssetWithFlavorType:(long long)arg1 ;
-(ICStoreHLSAssetInfo *)hlsAsset;
-(id)initWithItemResponseDictionary:(id)arg1 urlBag:(id)arg2 ;
-(NSDate *)assetExpirationDate;
-(void)setAssetExpirationDate:(NSDate *)arg1 ;
@end

