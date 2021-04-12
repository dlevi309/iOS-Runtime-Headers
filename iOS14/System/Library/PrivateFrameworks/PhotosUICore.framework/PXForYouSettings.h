/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXForYouSettings : PXSettings {

	BOOL _showMemories;
	BOOL _showSharedAlbumActivity;
	BOOL _showCMMSuggestions;
	BOOL _showCMMInvitations;
	BOOL _showEditSuggestions;
	BOOL _showRecentInterestSuggestions;
	BOOL _showPeopleQuestions;
	BOOL _showSurveyQuestions;
	BOOL _showSurveyQuestionsWithProfile;
	BOOL _showFooter;
	BOOL _showSampleSuggestionGadgets;
	BOOL _showVerticalSampleGadgets;
	BOOL _showHorizontalGadget;
	BOOL _allowVideoPlayback;
	BOOL _allowLoopPlayback;
	BOOL _allowGIFPlayback;
	BOOL _useMockData;
	BOOL _forceDisplayReportJunk;
	BOOL _forcePortraitBias;
	BOOL _useSquareSharedAlbumActivity;
	BOOL _disableSharedAlbumTopMargin;
	BOOL _alwaysShowSuggestionRenderingOverlay;
	BOOL _delayEditRenders;
	BOOL _useCachedEditRenders;
	unsigned long long _maxSimultaneousVideoCount;
	double _minimumVisibilityForVideoPlayback;
	long long _sortingAlgorithm;
	unsigned long long _maxMemoriesToFetch;

}

@property (assign,nonatomic) BOOL showMemories;                                         //@synthesize showMemories=_showMemories - In the implementation block
@property (assign,nonatomic) BOOL showSharedAlbumActivity;                              //@synthesize showSharedAlbumActivity=_showSharedAlbumActivity - In the implementation block
@property (assign,nonatomic) BOOL showCMMSuggestions;                                   //@synthesize showCMMSuggestions=_showCMMSuggestions - In the implementation block
@property (assign,nonatomic) BOOL showCMMInvitations;                                   //@synthesize showCMMInvitations=_showCMMInvitations - In the implementation block
@property (assign,nonatomic) BOOL showEditSuggestions;                                  //@synthesize showEditSuggestions=_showEditSuggestions - In the implementation block
@property (assign,nonatomic) BOOL showRecentInterestSuggestions;                        //@synthesize showRecentInterestSuggestions=_showRecentInterestSuggestions - In the implementation block
@property (assign,nonatomic) BOOL showPeopleQuestions;                                  //@synthesize showPeopleQuestions=_showPeopleQuestions - In the implementation block
@property (assign,nonatomic) BOOL showSurveyQuestions;                                  //@synthesize showSurveyQuestions=_showSurveyQuestions - In the implementation block
@property (assign,nonatomic) BOOL showSurveyQuestionsWithProfile;                       //@synthesize showSurveyQuestionsWithProfile=_showSurveyQuestionsWithProfile - In the implementation block
@property (assign,nonatomic) BOOL showFooter;                                           //@synthesize showFooter=_showFooter - In the implementation block
@property (assign,nonatomic) BOOL showSampleSuggestionGadgets;                          //@synthesize showSampleSuggestionGadgets=_showSampleSuggestionGadgets - In the implementation block
@property (assign,nonatomic) BOOL showVerticalSampleGadgets;                            //@synthesize showVerticalSampleGadgets=_showVerticalSampleGadgets - In the implementation block
@property (assign,nonatomic) BOOL showHorizontalGadget;                                 //@synthesize showHorizontalGadget=_showHorizontalGadget - In the implementation block
@property (assign,nonatomic) BOOL allowVideoPlayback;                                   //@synthesize allowVideoPlayback=_allowVideoPlayback - In the implementation block
@property (assign,nonatomic) BOOL allowLoopPlayback;                                    //@synthesize allowLoopPlayback=_allowLoopPlayback - In the implementation block
@property (assign,nonatomic) BOOL allowGIFPlayback;                                     //@synthesize allowGIFPlayback=_allowGIFPlayback - In the implementation block
@property (assign,nonatomic) unsigned long long maxSimultaneousVideoCount;              //@synthesize maxSimultaneousVideoCount=_maxSimultaneousVideoCount - In the implementation block
@property (assign,nonatomic) double minimumVisibilityForVideoPlayback;                  //@synthesize minimumVisibilityForVideoPlayback=_minimumVisibilityForVideoPlayback - In the implementation block
@property (assign,nonatomic) BOOL useMockData;                                          //@synthesize useMockData=_useMockData - In the implementation block
@property (assign,nonatomic) BOOL forceDisplayReportJunk;                               //@synthesize forceDisplayReportJunk=_forceDisplayReportJunk - In the implementation block
@property (assign,nonatomic) BOOL forcePortraitBias;                                    //@synthesize forcePortraitBias=_forcePortraitBias - In the implementation block
@property (assign,nonatomic) BOOL useSquareSharedAlbumActivity;                         //@synthesize useSquareSharedAlbumActivity=_useSquareSharedAlbumActivity - In the implementation block
@property (assign,nonatomic) BOOL disableSharedAlbumTopMargin;                          //@synthesize disableSharedAlbumTopMargin=_disableSharedAlbumTopMargin - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowSuggestionRenderingOverlay;                 //@synthesize alwaysShowSuggestionRenderingOverlay=_alwaysShowSuggestionRenderingOverlay - In the implementation block
@property (assign,nonatomic) BOOL delayEditRenders;                                     //@synthesize delayEditRenders=_delayEditRenders - In the implementation block
@property (assign,nonatomic) BOOL useCachedEditRenders;                                 //@synthesize useCachedEditRenders=_useCachedEditRenders - In the implementation block
@property (assign,nonatomic) long long sortingAlgorithm;                                //@synthesize sortingAlgorithm=_sortingAlgorithm - In the implementation block
@property (assign,nonatomic) unsigned long long maxMemoriesToFetch;                     //@synthesize maxMemoriesToFetch=_maxMemoriesToFetch - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
+(id)keyPathsAffectingGadgetVisibility;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)setDisableSharedAlbumTopMargin:(BOOL)arg1 ;
-(void)setForceDisplayReportJunk:(BOOL)arg1 ;
-(void)setMaxMemoriesToFetch:(unsigned long long)arg1 ;
-(BOOL)alwaysShowSuggestionRenderingOverlay;
-(double)minimumVisibilityForVideoPlayback;
-(void)setMaxSimultaneousVideoCount:(unsigned long long)arg1 ;
-(void)setShowVerticalSampleGadgets:(BOOL)arg1 ;
-(BOOL)showSharedAlbumActivity;
-(BOOL)showHorizontalGadget;
-(void)setAllowLoopPlayback:(BOOL)arg1 ;
-(BOOL)showFooter;
-(BOOL)showPeopleQuestions;
-(BOOL)showVerticalSampleGadgets;
-(void)setShowHorizontalGadget:(BOOL)arg1 ;
-(void)setMinimumVisibilityForVideoPlayback:(double)arg1 ;
-(BOOL)showSurveyQuestionsWithProfile;
-(BOOL)showSurveyQuestions;
-(void)setSortingAlgorithm:(long long)arg1 ;
-(BOOL)forceDisplayReportJunk;
-(BOOL)showCMMInvitations;
-(void)setAlwaysShowSuggestionRenderingOverlay:(BOOL)arg1 ;
-(BOOL)disableSharedAlbumTopMargin;
-(BOOL)useCachedEditRenders;
-(void)setUseCachedEditRenders:(BOOL)arg1 ;
-(void)setShowSurveyQuestionsWithProfile:(BOOL)arg1 ;
-(void)setShowMemories:(BOOL)arg1 ;
-(BOOL)useSquareSharedAlbumActivity;
-(long long)sortingAlgorithm;
-(void)setForcePortraitBias:(BOOL)arg1 ;
-(BOOL)allowGIFPlayback;
-(BOOL)showEditSuggestions;
-(BOOL)allowLoopPlayback;
-(void)setUseSquareSharedAlbumActivity:(BOOL)arg1 ;
-(BOOL)allowVideoPlayback;
-(void)setShowCMMInvitations:(BOOL)arg1 ;
-(void)setShowCMMSuggestions:(BOOL)arg1 ;
-(void)setShowSampleSuggestionGadgets:(BOOL)arg1 ;
-(BOOL)showMemories;
-(void)setShowRecentInterestSuggestions:(BOOL)arg1 ;
-(unsigned long long)maxSimultaneousVideoCount;
-(void)setShowEditSuggestions:(BOOL)arg1 ;
-(unsigned long long)maxMemoriesToFetch;
-(void)setShowSurveyQuestions:(BOOL)arg1 ;
-(BOOL)showSampleSuggestionGadgets;
-(void)setAllowVideoPlayback:(BOOL)arg1 ;
-(void)setShowPeopleQuestions:(BOOL)arg1 ;
-(void)setShowSharedAlbumActivity:(BOOL)arg1 ;
-(BOOL)showRecentInterestSuggestions;
-(void)setAllowGIFPlayback:(BOOL)arg1 ;
-(BOOL)forcePortraitBias;
-(void)setDelayEditRenders:(BOOL)arg1 ;
-(long long)version;
-(BOOL)useMockData;
-(void)setShowFooter:(BOOL)arg1 ;
-(BOOL)delayEditRenders;
-(BOOL)showCMMSuggestions;
-(void)setUseMockData:(BOOL)arg1 ;
@end

