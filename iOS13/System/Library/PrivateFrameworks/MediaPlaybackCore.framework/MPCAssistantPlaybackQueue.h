/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)contextID;
-(NSString *)featureName;
-(ICUserIdentity *)userIdentity;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(id)initWithContextID:(id)arg1 ;
-(NSDictionary *)siriWHAMetricsInfo;
-(void)setSiriWHAMetricsInfo:(NSDictionary *)arg1 ;
-(NSString *)siriAssetInfo;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(void)setSiriAssetInfo:(NSString *)arg1 ;
-(void)setFeatureName:(NSString *)arg1 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(BOOL)supportedOnCurrentPlatform;
-(BOOL)shouldImmediatelyStartPlayback;
-(void)setShouldImmediatelyStartPlayback:(BOOL)arg1 ;
-(NSString *)siriRecommendationID;
-(void)setSiriRecommendationID:(NSString *)arg1 ;
@end

