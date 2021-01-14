/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPAVItem, NSString, NSData, MPMusicPlayerQueueDescriptor, NSDictionary;

@interface MPPlaybackContext : NSObject <NSSecureCoding, NSCopying> {

	MPAVItem* _playerCurrentItem;
	BOOL _supportsAccountRectification;
	long long _actionAfterQueueLoad;
	long long _shuffleType;
	long long _repeatType;
	long long _queueEndAction;
	NSString* _playActivityFeatureName;
	NSData* _playActivityRecommendationData;
	MPMusicPlayerQueueDescriptor* _queueDescriptor;
	NSString* _siriAssetInfo;
	NSString* _siriReferenceIdentifier;
	NSDictionary* _siriWHAMetricsInfo;
	NSString* _sessionIdentifier;

}

@property (assign,nonatomic) long long actionAfterQueueLoad;                            //@synthesize actionAfterQueueLoad=_actionAfterQueueLoad - In the implementation block
@property (nonatomic,readonly) BOOL containsRestorableContent; 
@property (nonatomic,readonly) BOOL shouldBecomeActive; 
@property (assign,nonatomic) long long shuffleType;                                     //@synthesize shuffleType=_shuffleType - In the implementation block
@property (assign,nonatomic) long long repeatType;                                      //@synthesize repeatType=_repeatType - In the implementation block
@property (assign,nonatomic) long long queueEndAction;                                  //@synthesize queueEndAction=_queueEndAction - In the implementation block
@property (getter=isSupported,nonatomic,readonly) BOOL supported; 
@property (nonatomic,copy) NSString * playActivityFeatureName;                          //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
@property (nonatomic,copy) NSData * playActivityRecommendationData;                     //@synthesize playActivityRecommendationData=_playActivityRecommendationData - In the implementation block
@property (nonatomic,copy) MPMusicPlayerQueueDescriptor * queueDescriptor;              //@synthesize queueDescriptor=_queueDescriptor - In the implementation block
@property (nonatomic,copy) NSString * siriAssetInfo;                                    //@synthesize siriAssetInfo=_siriAssetInfo - In the implementation block
@property (nonatomic,copy) NSString * siriReferenceIdentifier;                          //@synthesize siriReferenceIdentifier=_siriReferenceIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * siriWHAMetricsInfo;                           //@synthesize siriWHAMetricsInfo=_siriWHAMetricsInfo - In the implementation block
@property (nonatomic,copy) NSString * sessionIdentifier;                                //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsAccountRectification;                         //@synthesize supportsAccountRectification=_supportsAccountRectification - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
+(BOOL)supportsAutoPlay;
-(long long)shuffleType;
-(BOOL)isSupported;
-(void)setSiriReferenceIdentifier:(NSString *)arg1 ;
-(id)init;
-(long long)queueEndAction;
-(BOOL)shouldBecomeActive;
-(void)clearStartItem;
-(id)descriptionComponents;
-(BOOL)containsRestorableContent;
-(void)setQueueEndAction:(long long)arg1 ;
-(BOOL)supportsAccountRectification;
-(void)setSupportsAccountRectification:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(long long)repeatType;
-(id)description;
-(NSString *)playActivityFeatureName;
-(NSDictionary *)siriWHAMetricsInfo;
-(void)setSiriWHAMetricsInfo:(NSDictionary *)arg1 ;
-(NSString *)siriReferenceIdentifier;
-(void)setShuffleType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPlayActivityRecommendationData:(NSData *)arg1 ;
-(long long)actionAfterQueueLoad;
-(MPMusicPlayerQueueDescriptor *)queueDescriptor;
-(void)setRepeatType:(long long)arg1 ;
-(NSString *)siriAssetInfo;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(NSData *)playActivityRecommendationData;
-(void)setActionAfterQueueLoad:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1 ;
-(void)setSiriAssetInfo:(NSString *)arg1 ;
@end

