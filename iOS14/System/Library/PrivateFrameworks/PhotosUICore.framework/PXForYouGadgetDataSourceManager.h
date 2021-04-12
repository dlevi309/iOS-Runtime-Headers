/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetDataSourceManager.h>
#import <libobjc.A.dylib/PXCMMCloudGadgetViewControllerDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>

@class NSArray, PXForYouGadgetPriorityManager, PXCMMInvitationsHorizontalGadgetProvider, PXCMMSuggestionsHorizontalGadgetProvider, PXCloudWelcomeGadgetProvider, PXSharedAlbumActivityHorizontalGadgetProvider, PXHorizontalCollectionGadgetProvider, PXForYouEditSuggestionsGadgetProvider, PXForYouRecentInterestSuggestionsGadgetProvider, PXForYouMemoryGadgetProvider, PXPeopleQuestionsGadgetProvider, PXForYouFooterGadgetProvider, PXSampleSuggestionProvider, PXGadgetNavigationHelper, NSString;

@interface PXForYouGadgetDataSourceManager : PXGadgetDataSourceManager <PXCMMCloudGadgetViewControllerDelegate, PXSettingsKeyObserver> {

	NSArray* _gadgetProviders;
	BOOL _isLaunchedToTest;
	PXForYouGadgetPriorityManager* _priorityManager;
	PXCMMInvitationsHorizontalGadgetProvider* _CMMInvitationsHorizontalGadgetProvider;
	PXCMMSuggestionsHorizontalGadgetProvider* _CMMSuggestionsHorizontalGadgetProvider;
	PXCloudWelcomeGadgetProvider* _CMMCloudWelcomeGadgetProvider;
	PXSharedAlbumActivityHorizontalGadgetProvider* _icpsActivityHorizontalGadgetProvider;
	PXHorizontalCollectionGadgetProvider* _inboxHorizontalGadgetProvider;
	PXHorizontalCollectionGadgetProvider* _editSuggestionsHorizontalGadgetProvider;
	PXForYouEditSuggestionsGadgetProvider* _editSuggestionsGadgetProvider;
	PXHorizontalCollectionGadgetProvider* _recentInterestSuggestionsHorizontalGadgetProvider;
	PXForYouRecentInterestSuggestionsGadgetProvider* _recentInterestsSuggestionsGadgetProvider;
	PXForYouMemoryGadgetProvider* _memoryGadgetProvider;
	PXPeopleQuestionsGadgetProvider* _peopleQuestionsGadgetProvider;
	PXHorizontalCollectionGadgetProvider* _peopleQuestionsHorizontalGadgetProvider;
	PXForYouFooterGadgetProvider* _footerGadgetProvider;
	PXSampleSuggestionProvider* _sampleSuggestionGadgetsProvider;

}

@property (nonatomic,retain) PXCMMInvitationsHorizontalGadgetProvider * CMMInvitationsHorizontalGadgetProvider;                       //@synthesize CMMInvitationsHorizontalGadgetProvider=_CMMInvitationsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXCMMSuggestionsHorizontalGadgetProvider * CMMSuggestionsHorizontalGadgetProvider;                       //@synthesize CMMSuggestionsHorizontalGadgetProvider=_CMMSuggestionsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXCloudWelcomeGadgetProvider * CMMCloudWelcomeGadgetProvider;                                            //@synthesize CMMCloudWelcomeGadgetProvider=_CMMCloudWelcomeGadgetProvider - In the implementation block
@property (nonatomic,retain) PXSharedAlbumActivityHorizontalGadgetProvider * icpsActivityHorizontalGadgetProvider;                    //@synthesize icpsActivityHorizontalGadgetProvider=_icpsActivityHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXHorizontalCollectionGadgetProvider * inboxHorizontalGadgetProvider;                                    //@synthesize inboxHorizontalGadgetProvider=_inboxHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXHorizontalCollectionGadgetProvider * editSuggestionsHorizontalGadgetProvider;                          //@synthesize editSuggestionsHorizontalGadgetProvider=_editSuggestionsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXForYouEditSuggestionsGadgetProvider * editSuggestionsGadgetProvider;                                   //@synthesize editSuggestionsGadgetProvider=_editSuggestionsGadgetProvider - In the implementation block
@property (nonatomic,retain) PXHorizontalCollectionGadgetProvider * recentInterestSuggestionsHorizontalGadgetProvider;                //@synthesize recentInterestSuggestionsHorizontalGadgetProvider=_recentInterestSuggestionsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXForYouRecentInterestSuggestionsGadgetProvider * recentInterestsSuggestionsGadgetProvider;              //@synthesize recentInterestsSuggestionsGadgetProvider=_recentInterestsSuggestionsGadgetProvider - In the implementation block
@property (nonatomic,retain) PXForYouMemoryGadgetProvider * memoryGadgetProvider;                                                     //@synthesize memoryGadgetProvider=_memoryGadgetProvider - In the implementation block
@property (nonatomic,retain) PXPeopleQuestionsGadgetProvider * peopleQuestionsGadgetProvider;                                         //@synthesize peopleQuestionsGadgetProvider=_peopleQuestionsGadgetProvider - In the implementation block
@property (nonatomic,retain) PXHorizontalCollectionGadgetProvider * peopleQuestionsHorizontalGadgetProvider;                          //@synthesize peopleQuestionsHorizontalGadgetProvider=_peopleQuestionsHorizontalGadgetProvider - In the implementation block
@property (nonatomic,retain) PXForYouFooterGadgetProvider * footerGadgetProvider;                                                     //@synthesize footerGadgetProvider=_footerGadgetProvider - In the implementation block
@property (nonatomic,retain) PXSampleSuggestionProvider * sampleSuggestionGadgetsProvider;                                            //@synthesize sampleSuggestionGadgetsProvider=_sampleSuggestionGadgetsProvider - In the implementation block
@property (nonatomic,readonly) PXForYouGadgetPriorityManager * priorityManager;                                                       //@synthesize priorityManager=_priorityManager - In the implementation block
@property (nonatomic,readonly) BOOL isLaunchedToTest;                                                                                 //@synthesize isLaunchedToTest=_isLaunchedToTest - In the implementation block
@property (nonatomic,readonly) id<PXGadgetTransition> gadgetTransition; 
@property (nonatomic,readonly) PXGadgetNavigationHelper * rootNavigationHelper; 
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> nextGadgetResponder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCMMCloudWelcomeGadgetProvider:(PXCloudWelcomeGadgetProvider *)arg1 ;
-(PXHorizontalCollectionGadgetProvider *)peopleQuestionsHorizontalGadgetProvider;
-(void)setSampleSuggestionGadgetsProvider:(PXSampleSuggestionProvider *)arg1 ;
-(PXPeopleQuestionsGadgetProvider *)peopleQuestionsGadgetProvider;
-(void)_calendarDayChanged;
-(void)setEditSuggestionsHorizontalGadgetProvider:(PXHorizontalCollectionGadgetProvider *)arg1 ;
-(BOOL)isLaunchedToTest;
-(void)setEditSuggestionsGadgetProvider:(PXForYouEditSuggestionsGadgetProvider *)arg1 ;
-(/*^block*/id)gadgetProviderSortComparator;
-(void)setPeopleQuestionsGadgetProvider:(PXPeopleQuestionsGadgetProvider *)arg1 ;
-(PXCMMInvitationsHorizontalGadgetProvider *)CMMInvitationsHorizontalGadgetProvider;
-(void)setFooterGadgetProvider:(PXForYouFooterGadgetProvider *)arg1 ;
-(PXSharedAlbumActivityHorizontalGadgetProvider *)icpsActivityHorizontalGadgetProvider;
-(BOOL)_gadgetProviderIsInbox:(id)arg1 ;
-(PXForYouFooterGadgetProvider *)footerGadgetProvider;
-(id)hiddenGadgetProviders;
-(void)removeCachedProviders;
-(void)setCMMSuggestionsHorizontalGadgetProvider:(PXCMMSuggestionsHorizontalGadgetProvider *)arg1 ;
-(id)initWithPriorityManager:(id)arg1 isLaunchedToTest:(BOOL)arg2 ;
-(PXCMMSuggestionsHorizontalGadgetProvider *)CMMSuggestionsHorizontalGadgetProvider;
-(void)setRecentInterestSuggestionsHorizontalGadgetProvider:(PXHorizontalCollectionGadgetProvider *)arg1 ;
-(PXHorizontalCollectionGadgetProvider *)inboxHorizontalGadgetProvider;
-(PXHorizontalCollectionGadgetProvider *)recentInterestSuggestionsHorizontalGadgetProvider;
-(PXHorizontalCollectionGadgetProvider *)editSuggestionsHorizontalGadgetProvider;
-(void)setCMMInvitationsHorizontalGadgetProvider:(PXCMMInvitationsHorizontalGadgetProvider *)arg1 ;
-(void)setRecentInterestsSuggestionsGadgetProvider:(PXForYouRecentInterestSuggestionsGadgetProvider *)arg1 ;
-(void)didLoadDataForPriorities;
-(void)presentationRequestForWelcomeCloudViewController:(id)arg1 ;
-(id)gadgetProviders;
-(PXForYouMemoryGadgetProvider *)memoryGadgetProvider;
-(PXForYouRecentInterestSuggestionsGadgetProvider *)recentInterestsSuggestionsGadgetProvider;
-(unsigned long long)_adjustGadgetTypeForRanking:(unsigned long long)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(long long)_adjustComparasionForInbox:(long long)arg1 gadgetType1:(unsigned long long)arg2 gadgeType2:(unsigned long long)arg3 ;
-(BOOL)_canShowSurveyQuestionsGadget;
-(PXForYouEditSuggestionsGadgetProvider *)editSuggestionsGadgetProvider;
-(PXForYouGadgetPriorityManager *)priorityManager;
-(void)setMemoryGadgetProvider:(PXForYouMemoryGadgetProvider *)arg1 ;
-(void)_updatePrioritiesForCalendarChange;
-(void)_forceCalendarDayChanged;
-(void)setPeopleQuestionsHorizontalGadgetProvider:(PXHorizontalCollectionGadgetProvider *)arg1 ;
-(PXCloudWelcomeGadgetProvider *)CMMCloudWelcomeGadgetProvider;
-(/*^block*/id)gadgetSortComparator;
-(void)setInboxHorizontalGadgetProvider:(PXHorizontalCollectionGadgetProvider *)arg1 ;
-(PXSampleSuggestionProvider *)sampleSuggestionGadgetsProvider;
-(long long)_compareRank1:(long long)arg1 rank2:(long long)arg2 ;
-(void)_calendarDayChangedForced:(BOOL)arg1 ;
-(void)setIcpsActivityHorizontalGadgetProvider:(PXSharedAlbumActivityHorizontalGadgetProvider *)arg1 ;
-(BOOL)_resetSortingRanksIfNecessary;
-(void)didUpdateCloudPhotoLibraryEnablement:(id)arg1 ;
@end

