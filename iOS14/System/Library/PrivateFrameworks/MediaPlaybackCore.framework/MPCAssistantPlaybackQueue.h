/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class NSString, NSDictionary, ICUserIdentity;

@interface MPCAssistantPlaybackQueue : NSObject {

	BOOL _shouldOverrideManuallyCuratedQueue;
	BOOL _shouldImmediatelyStartPlayback;
	NSString* _contextID;
	NSString* _siriRecommendationID;
	NSString* _siriAssetInfo;
	NSString* _featureName;
	NSDictionary* _siriWHAMetricsInfo;
	ICUserIdentity* _userIdentity;
	NSString* _homeKitUserIdentifier;

}

@property (nonatomic,copy,readonly) NSString * contextID;                          //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) BOOL supportedOnCurrentPlatform; 
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedQueue;              //@synthesize shouldOverrideManuallyCuratedQueue=_shouldOverrideManuallyCuratedQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldImmediatelyStartPlayback;                  //@synthesize shouldImmediatelyStartPlayback=_shouldImmediatelyStartPlayback - In the implementation block
@property (nonatomic,copy) NSString * siriRecommendationID;                        //@synthesize siriRecommendationID=_siriRecommendationID - In the implementation block
@property (nonatomic,copy) NSString * siriAssetInfo;                               //@synthesize siriAssetInfo=_siriAssetInfo - In the implementation block
@property (nonatomic,copy) NSString * featureName;                                 //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,copy) NSDictionary * siriWHAMetricsInfo;                      //@synthesize siriWHAMetricsInfo=_siriWHAMetricsInfo - In the implementation block
@property (nonatomic,copy) ICUserIdentity * userIdentity;                          //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,copy) NSString * homeKitUserIdentifier;                       //@synthesize homeKitUserIdentifier=_homeKitUserIdentifier - In the implementation block
-(ICUserIdentity *)userIdentity;
-(id)initWithContextID:(id)arg1 ;
-(NSString *)homeKitUserIdentifier;
-(void)setHomeKitUserIdentifier:(NSString *)arg1 ;
-(NSString *)contextID;
-(NSDictionary *)siriWHAMetricsInfo;
-(void)setSiriWHAMetricsInfo:(NSDictionary *)arg1 ;
-(void)setFeatureName:(NSString *)arg1 ;
-(NSString *)featureName;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(NSString *)siriAssetInfo;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(void)setSiriAssetInfo:(NSString *)arg1 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(BOOL)supportedOnCurrentPlatform;
-(BOOL)shouldImmediatelyStartPlayback;
-(void)setShouldImmediatelyStartPlayback:(BOOL)arg1 ;
-(NSString *)siriRecommendationID;
-(void)setSiriRecommendationID:(NSString *)arg1 ;
@end

