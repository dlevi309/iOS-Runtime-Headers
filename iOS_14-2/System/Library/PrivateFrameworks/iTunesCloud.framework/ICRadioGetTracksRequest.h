/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, ICRadioPlaybackHistory, NSNumber, ICStoreRequestContext, NSString, NSURL, ICRadioContentReference;

@interface ICRadioGetTracksRequest : NSObject <NSCopying> {

	BOOL _allowsExplicitContent;
	BOOL _preservingCurrentlyPlayingItem;
	BOOL _shouldResponseContainStationMetadata;
	NSDictionary* _additionalRequestParameters;
	NSArray* _playActivityEvents;
	ICRadioPlaybackHistory* _playbackContext;
	NSNumber* _privateListeningEnabled;
	NSNumber* _delegatedPrivateListeningEnabled;
	long long _reasonType;
	ICStoreRequestContext* _requestContext;
	long long _requestedTrackCount;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationStringID;
	NSURL* _stationURL;
	ICRadioContentReference* _seedContentReference;
	ICRadioContentReference* _nowPlayingContentReference;
	NSArray* _queueContentReferences;

}

@property (nonatomic,copy) NSDictionary * additionalRequestParameters;                                                         //@synthesize additionalRequestParameters=_additionalRequestParameters - In the implementation block
@property (assign,nonatomic) BOOL allowsExplicitContent;                                                                       //@synthesize allowsExplicitContent=_allowsExplicitContent - In the implementation block
@property (nonatomic,copy) NSArray * playActivityEvents;                                                                       //@synthesize playActivityEvents=_playActivityEvents - In the implementation block
@property (nonatomic,copy) ICRadioPlaybackHistory * playbackContext;                                                           //@synthesize playbackContext=_playbackContext - In the implementation block
@property (assign,getter=isPreservingCurrentlyPlayingItem,nonatomic) BOOL preservingCurrentlyPlayingItem;                      //@synthesize preservingCurrentlyPlayingItem=_preservingCurrentlyPlayingItem - In the implementation block
@property (getter=isPrivateListeningEnabled,nonatomic,copy) NSNumber * privateListeningEnabled;                                //@synthesize privateListeningEnabled=_privateListeningEnabled - In the implementation block
@property (getter=isDelegatedPrivateListeningEnabled,nonatomic,copy) NSNumber * delegatedPrivateListeningEnabled;              //@synthesize delegatedPrivateListeningEnabled=_delegatedPrivateListeningEnabled - In the implementation block
@property (assign,nonatomic) long long reasonType;                                                                             //@synthesize reasonType=_reasonType - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;                                                             //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) BOOL shouldResponseContainStationMetadata;                                                        //@synthesize shouldResponseContainStationMetadata=_shouldResponseContainStationMetadata - In the implementation block
@property (assign,nonatomic) long long requestedTrackCount;                                                                    //@synthesize requestedTrackCount=_requestedTrackCount - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                                                                             //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long stationID;                                                                              //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSString * stationStringID;                                                                         //@synthesize stationStringID=_stationStringID - In the implementation block
@property (nonatomic,copy) NSURL * stationURL;                                                                                 //@synthesize stationURL=_stationURL - In the implementation block
@property (nonatomic,copy) ICRadioContentReference * seedContentReference;                                                     //@synthesize seedContentReference=_seedContentReference - In the implementation block
@property (nonatomic,copy) ICRadioContentReference * nowPlayingContentReference;                                               //@synthesize nowPlayingContentReference=_nowPlayingContentReference - In the implementation block
@property (nonatomic,copy) NSArray * queueContentReferences;                                                                   //@synthesize queueContentReferences=_queueContentReferences - In the implementation block
-(void)setPrivateListeningEnabled:(NSNumber *)arg1 ;
-(void)setReasonType:(long long)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(id)init;
-(NSURL *)stationURL;
-(id)isPrivateListeningEnabled;
-(long long)reasonType;
-(BOOL)allowsExplicitContent;
-(void)setStationStringID:(NSString *)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(void)setDelegatedPrivateListeningEnabled:(NSNumber *)arg1 ;
-(long long)stationID;
-(ICRadioContentReference *)seedContentReference;
-(BOOL)shouldResponseContainStationMetadata;
-(ICRadioContentReference *)nowPlayingContentReference;
-(NSArray *)queueContentReferences;
-(ICRadioPlaybackHistory *)playbackContext;
-(BOOL)isPreservingCurrentlyPlayingItem;
-(NSDictionary *)additionalRequestParameters;
-(void)setAdditionalRequestParameters:(NSDictionary *)arg1 ;
-(void)setAllowsExplicitContent:(BOOL)arg1 ;
-(void)setPlaybackContext:(ICRadioPlaybackHistory *)arg1 ;
-(NSArray *)playActivityEvents;
-(void)setPlayActivityEvents:(NSArray *)arg1 ;
-(void)setPreservingCurrentlyPlayingItem:(BOOL)arg1 ;
-(void)setShouldResponseContainStationMetadata:(BOOL)arg1 ;
-(long long)requestedTrackCount;
-(void)setRequestedTrackCount:(long long)arg1 ;
-(void)setSeedContentReference:(ICRadioContentReference *)arg1 ;
-(void)setNowPlayingContentReference:(ICRadioContentReference *)arg1 ;
-(void)setQueueContentReferences:(NSArray *)arg1 ;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)isDelegatedPrivateListeningEnabled;
-(void)setStationURL:(NSURL *)arg1 ;
@end

