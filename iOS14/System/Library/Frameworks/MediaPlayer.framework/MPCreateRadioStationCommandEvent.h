/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSURL, NSNumber;

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent {

	BOOL _requestingPlaybackInitialization;
	NSURL* _stationURL;
	NSNumber* _privateListeningOverride;

}

@property (nonatomic,readonly) NSURL * stationURL;                                                                           //@synthesize stationURL=_stationURL - In the implementation block
@property (getter=isRequestingPlaybackInitialization,nonatomic,readonly) BOOL requestingPlaybackInitialization;              //@synthesize requestingPlaybackInitialization=_requestingPlaybackInitialization - In the implementation block
@property (nonatomic,readonly) NSNumber * privateListeningOverride;                                                          //@synthesize privateListeningOverride=_privateListeningOverride - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(NSURL *)stationURL;
-(NSNumber *)privateListeningOverride;
-(BOOL)isRequestingPlaybackInitialization;
@end

