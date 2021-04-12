/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString, SANPVideoAudioAndSubtitleLanguageOptions, NSDictionary, SAMPMediaItem, SANPCommandInfo, SAMPNowPlayingQueuePosition, NSNumber;

@interface SAMPQueueState : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * applicationIdentifier; 
@property (nonatomic,retain) SANPVideoAudioAndSubtitleLanguageOptions * audioAndSubtitleLanguageOptions; 
@property (assign,nonatomic) BOOL currentItemSteerable; 
@property (nonatomic,copy) NSDictionary * currentListeningToContainer; 
@property (nonatomic,retain) SAMPMediaItem * listeningToItem; 
@property (nonatomic,retain) SAMPMediaItem * nextListeningToItem; 
@property (nonatomic,retain) SANPCommandInfo * nowPlayingCommandInfo; 
@property (nonatomic,retain) SAMPNowPlayingQueuePosition * playbackQueuePosition; 
@property (nonatomic,copy) NSNumber * playbackRate; 
@property (nonatomic,retain) SAMPMediaItem * previousListenedToItem; 
@property (nonatomic,copy) NSNumber * shuffleEnabled; 
@property (nonatomic,copy) NSString * source; 
@property (assign,nonatomic) int state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queueState;
+(id)queueStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_mediaTypeFromNowPlayingInfo:(id)arg1 ;
-(id)_mediaItemIdURLFromNowPlayingInfo:(id)arg1 ;
-(void)_af_setShuffleModeFromNowPlayingInfo:(id)arg1 ;
-(void)_af_setNowPlayingInfo:(id)arg1 ;
-(void)_af_validateAndFinalize;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(int)state;
-(id)groupIdentifier;
-(NSString *)applicationIdentifier;
-(void)setState:(int)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSNumber *)playbackRate;
-(void)setPlaybackRate:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(void)setShuffleEnabled:(NSNumber *)arg1 ;
-(void)setListeningToItem:(SAMPMediaItem *)arg1 ;
-(void)setCurrentItemSteerable:(BOOL)arg1 ;
-(void)setPlaybackQueuePosition:(SAMPNowPlayingQueuePosition *)arg1 ;
-(void)setCurrentListeningToContainer:(NSDictionary *)arg1 ;
-(void)setAudioAndSubtitleLanguageOptions:(SANPVideoAudioAndSubtitleLanguageOptions *)arg1 ;
-(SAMPMediaItem *)listeningToItem;
-(void)setPreviousListenedToItem:(SAMPMediaItem *)arg1 ;
-(void)setNextListeningToItem:(SAMPMediaItem *)arg1 ;
-(SANPVideoAudioAndSubtitleLanguageOptions *)audioAndSubtitleLanguageOptions;
-(BOOL)currentItemSteerable;
-(NSDictionary *)currentListeningToContainer;
-(SAMPMediaItem *)nextListeningToItem;
-(SANPCommandInfo *)nowPlayingCommandInfo;
-(void)setNowPlayingCommandInfo:(SANPCommandInfo *)arg1 ;
-(SAMPNowPlayingQueuePosition *)playbackQueuePosition;
-(SAMPMediaItem *)previousListenedToItem;
-(NSNumber *)shuffleEnabled;
@end

