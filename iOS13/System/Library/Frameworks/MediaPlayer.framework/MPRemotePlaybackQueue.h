/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICUserIdentity, NSDictionary, NSString;

@interface MPRemotePlaybackQueue : NSObject <NSSecureCoding> {

	MRSystemAppPlaybackQueueRef _mediaRemotePlaybackQueue;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,getter=isRequestingImmediatePlayback,nonatomic) BOOL requestingImmediatePlayback; 
@property (assign,nonatomic) BOOL shouldOverrideManuallyCuratedQueue; 
@property (assign,nonatomic) long long replaceIntent; 
@property (nonatomic,copy) NSString * siriRecommendationIdentifier; 
@property (nonatomic,copy,readonly) NSString * siriAssetInfo; 
@property (nonatomic,copy,readonly) NSString * featureName; 
@property (nonatomic,copy,readonly) NSDictionary * siriWHAMetricsInfo; 
@property (nonatomic,readonly) ICUserIdentity * userIdentity;                                                    //@synthesize userIdentity=_userIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)queueWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
+(id)queueWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 options:(id)arg2 ;
+(void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)featureName;
-(ICUserIdentity *)userIdentity;
-(NSDictionary *)siriWHAMetricsInfo;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 options:(id)arg2 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(MRSystemAppPlaybackQueueRef)_mediaRemotePlaybackQueue;
-(BOOL)isRequestingImmediatePlayback;
-(void)setRequestingImmediatePlayback:(BOOL)arg1 ;
-(NSString *)siriRecommendationIdentifier;
-(NSString *)siriAssetInfo;
-(void)setSiriRecommendationIdentifier:(NSString *)arg1 ;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(long long)replaceIntent;
-(void)setReplaceIntent:(long long)arg1 ;
@end

