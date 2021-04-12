/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemLegibleOutputPushDelegate.h>

@class MPAVItem, NSDictionary, NSMutableDictionary, AVPlayerItemLegibleOutput, MPAlternateTextTrack, NSArray, NSString;

@interface MPAlternateTracks : NSObject <AVPlayerItemLegibleOutputPushDelegate> {

	MPAVItem* _item;
	NSDictionary* _alternateTracks;
	NSMutableDictionary* _trackChangeDictionary;
	BOOL _disableAlternateTextTrackRendering;
	AVPlayerItemLegibleOutput* _legibleOutput;
	MPAlternateTextTrack* _currentTextTrack;
	NSArray* _outOfBandTextTracks;

}

@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,retain) NSArray * outOfBandTextTracks;                                  //@synthesize outOfBandTextTracks=_outOfBandTextTracks - In the implementation block
@property (assign,nonatomic) BOOL disableAlternateTextTrackRendering;                        //@synthesize disableAlternateTextTrackRendering=_disableAlternateTextTrackRendering - In the implementation block
@property (nonatomic,retain) MPAlternateTextTrack * selectedAlternateTextTrack; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)subtitleLanguages;
-(BOOL)isLoaded;
-(void)reloadData;
-(id)initWithItem:(id)arg1 ;
-(void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(SCD_Struct_MP3)arg4 ;
-(void)beginTrackChanges;
-(void)commitTrackChanges;
-(id)currentTrackForType:(unsigned long long)arg1 ;
-(unsigned long long)indexOfCurrentTrackForType:(unsigned long long)arg1 ;
-(void)setDisableAlternateTextTrackRendering:(BOOL)arg1 ;
-(MPAlternateTextTrack *)selectedAlternateTextTrack;
-(void)setSelectedAlternateTextTrack:(MPAlternateTextTrack *)arg1 ;
-(void)setOutOfBandTextTracks:(NSArray *)arg1 ;
-(void)setTrack:(id)arg1 forType:(unsigned long long)arg2 ;
-(id)tracksForType:(unsigned long long)arg1 ;
-(BOOL)hasTracksForTypes:(unsigned long long)arg1 ;
-(unsigned long long)trackCountForTypes:(unsigned long long)arg1 ;
-(void)reloadDataWithChangedCaptionDisplayType:(BOOL)arg1 ;
-(void)enableLegibleOutputIfNecessary;
-(id)_keyForTrackType:(unsigned long long)arg1 ;
-(id)_currentTextTrackAccordingToAVF;
-(void)_suppressAVFSubtitleRendering;
-(NSArray *)outOfBandTextTracks;
-(BOOL)disableAlternateTextTrackRendering;
@end

