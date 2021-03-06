/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPCModelRadioContentReference, MPModelRadioStation, NSURL;

@interface MPCRadioPlaybackIntentTracklistToken : NSObject <NSSecureCoding> {

	BOOL _continueListeningStation;
	MPCModelRadioContentReference* _nowPlayingContentReference;
	MPCModelRadioContentReference* _seedContentReference;
	MPModelRadioStation* _radioStation;
	NSURL* _radioStationURL;

}

@property (assign,nonatomic) BOOL continueListeningStation;                                         //@synthesize continueListeningStation=_continueListeningStation - In the implementation block
@property (nonatomic,copy) MPCModelRadioContentReference * nowPlayingContentReference;              //@synthesize nowPlayingContentReference=_nowPlayingContentReference - In the implementation block
@property (nonatomic,copy) MPCModelRadioContentReference * seedContentReference;                    //@synthesize seedContentReference=_seedContentReference - In the implementation block
@property (nonatomic,retain) MPModelRadioStation * radioStation;                                    //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,copy) NSURL * radioStationURL;                                                 //@synthesize radioStationURL=_radioStationURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRadioStation:(MPModelRadioStation *)arg1 ;
-(MPModelRadioStation *)radioStation;
-(id)initWithCoder:(id)arg1 ;
-(MPCModelRadioContentReference *)seedContentReference;
-(MPCModelRadioContentReference *)nowPlayingContentReference;
-(void)setSeedContentReference:(MPCModelRadioContentReference *)arg1 ;
-(void)setNowPlayingContentReference:(MPCModelRadioContentReference *)arg1 ;
-(void)setContinueListeningStation:(BOOL)arg1 ;
-(void)setRadioStationURL:(NSURL *)arg1 ;
-(BOOL)continueListeningStation;
-(NSURL *)radioStationURL;
@end

