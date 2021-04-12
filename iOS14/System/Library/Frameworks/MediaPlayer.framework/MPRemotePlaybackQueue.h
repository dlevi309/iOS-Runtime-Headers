/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICUserIdentity, NSDictionary, NSString;

@interface MPRemotePlaybackQueue : NSObject <NSSecureCoding> {

	MRSystemAppPlaybackQueueRef _mediaRemotePlaybackQueue;
	ICUserIdentity* _userIdentity;
	NSDictionary* _mediaRemoteOptions;

}

@property (nonatomic,readonly) MRSystemAppPlaybackQueueRef _mediaRemotePlaybackQueue; 
@property (nonatomic,readonly) NSDictionary * mediaRemoteOptions;                                                //@synthesize mediaRemoteOptions=_mediaRemoteOptions - In the implementation block
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
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(ICUserIdentity *)userIdentity;
-(NSDictionary *)userInfo;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)siriWHAMetricsInfo;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 options:(id)arg2 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(MRSystemAppPlaybackQueueRef)_mediaRemotePlaybackQueue;
-(NSString *)featureName;
-(BOOL)isRequestingImmediatePlayback;
-(void)setRequestingImmediatePlayback:(BOOL)arg1 ;
-(NSString *)siriRecommendationIdentifier;
-(void)setSiriRecommendationIdentifier:(NSString *)arg1 ;
-(BOOL)shouldOverrideManuallyCuratedQueue;
-(long long)replaceIntent;
-(void)setShouldOverrideManuallyCuratedQueue:(BOOL)arg1 ;
-(void)setReplaceIntent:(long long)arg1 ;
-(NSDictionary *)mediaRemoteOptions;
-(NSString *)siriAssetInfo;
-(void)dealloc;
@end

