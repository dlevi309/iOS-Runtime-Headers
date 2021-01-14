/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreAssetPlaybackResponse.h>

@class NSDictionary, NSDate, NSArray, MPStoreHLSAssetInfo;

@interface MPMutableStoreAssetPlaybackResponse : MPStoreAssetPlaybackResponse

@property (nonatomic,copy) NSDictionary * dialogDictionary; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSArray * fileAssetInfoList; 
@property (nonatomic,retain) MPStoreHLSAssetInfo * hlsAssetInfo; 
@property (assign,getter=isLiveRadioStream,nonatomic) BOOL liveRadioStream; 
@property (nonatomic,copy) NSArray * radioStreamAssetInfoList; 
@property (nonatomic,retain) id suzeLeaseID; 
@property (assign,getter=isSubscriptionRequired,nonatomic) BOOL subscriptionRequired; 
@property (assign,nonatomic) BOOL onlineSubscriptionKeysRequired; 
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setDialogDictionary:(NSDictionary *)arg1 ;
-(void)setFileAssetInfoList:(NSArray *)arg1 ;
-(void)setHlsAssetInfo:(MPStoreHLSAssetInfo *)arg1 ;
-(void)setLiveRadioStream:(BOOL)arg1 ;
-(void)setRadioStreamAssetInfoList:(NSArray *)arg1 ;
-(void)setSuzeLeaseID:(id)arg1 ;
-(void)setSubscriptionRequired:(BOOL)arg1 ;
-(void)setOnlineSubscriptionKeysRequired:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

