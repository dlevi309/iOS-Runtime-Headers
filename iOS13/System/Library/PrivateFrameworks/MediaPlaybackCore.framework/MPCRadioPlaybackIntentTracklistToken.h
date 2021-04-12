/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPCRadioPlaybackIntentTracklistTokenRadioStationMetadata;
@class MPCModelRadioContentReference, MPModelRadioStation, NSURL;

@interface MPCRadioPlaybackIntentTracklistToken : NSObject <NSSecureCoding> {

	MPCModelRadioContentReference* _nowPlayingContentReference;
	MPCModelRadioContentReference* _seedContentReference;
	MPModelRadioStation* _radioStation;
	NSURL* _radioStationURL;
	id<MPCRadioPlaybackIntentTracklistTokenRadioStationMetadata> _radioStationPlaybackMetadata;

}

@property (nonatomic,copy) MPCModelRadioContentReference * nowPlayingContentReference;                                               //@synthesize nowPlayingContentReference=_nowPlayingContentReference - In the implementation block
@property (nonatomic,copy) MPCModelRadioContentReference * seedContentReference;                                                     //@synthesize seedContentReference=_seedContentReference - In the implementation block
@property (nonatomic,retain) MPModelRadioStation * radioStation;                                                                     //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,copy) NSURL * radioStationURL;                                                                                  //@synthesize radioStationURL=_radioStationURL - In the implementation block
@property (nonatomic,retain) id<MPCRadioPlaybackIntentTracklistTokenRadioStationMetadata> radioStationPlaybackMetadata;              //@synthesize radioStationPlaybackMetadata=_radioStationPlaybackMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRadioStation:(MPModelRadioStation *)arg1 ;
-(MPModelRadioStation *)radioStation;
-(MPCModelRadioContentReference *)seedContentReference;
-(MPCModelRadioContentReference *)nowPlayingContentReference;
-(void)setSeedContentReference:(MPCModelRadioContentReference *)arg1 ;
-(void)setNowPlayingContentReference:(MPCModelRadioContentReference *)arg1 ;
-(void)setRadioStationURL:(NSURL *)arg1 ;
-(NSURL *)radioStationURL;
-(id<MPCRadioPlaybackIntentTracklistTokenRadioStationMetadata>)radioStationPlaybackMetadata;
-(void)setRadioStationPlaybackMetadata:(id<MPCRadioPlaybackIntentTracklistTokenRadioStationMetadata>)arg1 ;
@end

