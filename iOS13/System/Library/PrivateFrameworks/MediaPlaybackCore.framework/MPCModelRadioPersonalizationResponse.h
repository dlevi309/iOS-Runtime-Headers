/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPModelResponse.h>

@class MPStoreLibraryPersonalizationResponse, MPSectionedCollection;

@interface MPCModelRadioPersonalizationResponse : MPModelResponse {

	MPStoreLibraryPersonalizationResponse* _personalizationResponse;
	MPSectionedCollection* _radioStationTracks;

}

@property (nonatomic,copy) MPSectionedCollection * radioStationTracks;              //@synthesize radioStationTracks=_radioStationTracks - In the implementation block
@property (nonatomic,copy,readonly) MPSectionedCollection * results; 
-(void)dealloc;
-(id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2 ;
-(void)setRadioStationTracks:(MPSectionedCollection *)arg1 ;
-(MPSectionedCollection *)radioStationTracks;
@end

