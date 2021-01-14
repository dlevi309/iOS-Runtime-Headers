/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class MPSectionedCollection;

@interface MPCModelRadioGetTracksResponse : NSObject {

	long long _tracklistAction;
	MPSectionedCollection* _tracks;

}

@property (nonatomic,readonly) long long tracklistAction;                        //@synthesize tracklistAction=_tracklistAction - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * tracks;              //@synthesize tracks=_tracks - In the implementation block
-(MPSectionedCollection *)tracks;
-(id)initWithTracks:(id)arg1 tracklistAction:(long long)arg2 ;
-(long long)tracklistAction;
@end

