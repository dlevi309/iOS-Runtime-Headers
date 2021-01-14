/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriAudioSupport.framework/SiriAudioSupport
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface SiriAudioSupport.PlayMediaAppSelectionInput : _UKNOWN_SUPERCLASS_ <MLFeatureProvider> {

	 n_candidates;
	 result_asrConfidenceLevel;
	 result_asrConfidenceScore;
	 result_audioRoutes;
	 result_clientCarConnected;
	 result_clientCarplay;
	 result_clientDaylight;
	 result_clientDayOfWeek;
	 result_clientDevice;
	 result_clientHourOfDay;
	 result_clientIsActiveForegroundApp;
	 result_clientLocaleIdentifier;
	 result_clientLocaleLanguage;
	 result_clientLocked;
	 result_clientMotion;
	 result_clientNavigating;
	 result_clientWorkout;
	 result_entitySearchDirichletScore;
	 result_entitySearchSecondsSinceLastInteraction;
	 result_foregroundAppDuetElapsedSeconds;
	 result_foregroundAppIsLastUsed;
	 result_interactionType;
	 result_isNowPlayingApp;
	 result_isNowPlayingDuetApp;
	 result_libraryItems;
	 result_mediaAlbumPresent;
	 result_mediaArtistPresent;
	 result_mediaGenrePresent;
	 result_mediaMoodPresent;
	 result_mediaNamePresent;
	 result_mediaParsecCategory;
	 result_mediaPlaybackLocation;
	 result_mediaReleaseDatePresent;
	 result_mediaType;
	 result_nlConfidenceLevel;
	 result_nlConfidenceScore;
	 result_nowPlayingDuetElapsedSeconds;
	 result_nowPlayingState;
	 result_nowPlayingUsage7Days;
	 result_nowPlayingUsage1Day;
	 result_nowPlayingUsage14Days;
	 result_serverSearchResultsAmpConfidenceLevel;
	 result_serverSearchResultsAmpConfidenceScore;
	 result_serverSearchResultsMediaType;
	 result_serverSearchResultsPresent;
	 result_serverSearchResultsSelected;
	 result_serverSignals;
	 result_spotlightMatches;
	 result_subscriptionStatus;
	 result_supportedMediaCategories;
	 result_unionOfMediaCategories;

}

@property (readonly,nonatomic) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
@end

