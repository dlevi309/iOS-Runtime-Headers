/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDictionary, NSDate, NSArray, MPStoreHLSAssetInfo;

@interface MPStoreAssetPlaybackResponse : NSObject <NSCopying, NSMutableCopying> {

	NSDictionary* _dialogDictionary;
	NSDate* _expirationDate;
	NSArray* _fileAssetInfoList;
	MPStoreHLSAssetInfo* _hlsAssetInfo;
	BOOL _liveRadioStream;
	NSArray* _radioStreamAssetInfoList;
	id _suzeLeaseID;
	BOOL _subscriptionRequired;

}

@property (nonatomic,copy,readonly) NSDictionary * dialogDictionary;                                 //@synthesize dialogDictionary=_dialogDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fileAssetInfoList;                                     //@synthesize fileAssetInfoList=_fileAssetInfoList - In the implementation block
@property (nonatomic,readonly) MPStoreHLSAssetInfo * hlsAssetInfo;                                   //@synthesize hlsAssetInfo=_hlsAssetInfo - In the implementation block
@property (getter=isLiveRadioStream,nonatomic,readonly) BOOL liveRadioStream;                        //@synthesize liveRadioStream=_liveRadioStream - In the implementation block
@property (nonatomic,copy,readonly) NSArray * radioStreamAssetInfoList;                              //@synthesize radioStreamAssetInfoList=_radioStreamAssetInfoList - In the implementation block
@property (nonatomic,readonly) id suzeLeaseID;                                                       //@synthesize suzeLeaseID=_suzeLeaseID - In the implementation block
@property (getter=isSubscriptionRequired,nonatomic,readonly) BOOL subscriptionRequired;              //@synthesize subscriptionRequired=_subscriptionRequired - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isSubscriptionRequired;
-(id)_copyWithPlaybackResponseClass:(Class)arg1 ;
-(NSDictionary *)dialogDictionary;
-(NSArray *)fileAssetInfoList;
-(MPStoreHLSAssetInfo *)hlsAssetInfo;
-(BOOL)isLiveRadioStream;
-(NSArray *)radioStreamAssetInfoList;
-(id)suzeLeaseID;
@end

