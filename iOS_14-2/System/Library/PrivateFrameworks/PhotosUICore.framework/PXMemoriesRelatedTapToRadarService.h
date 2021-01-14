/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXDiagnosticsService.h>

@interface PXMemoriesRelatedTapToRadarService : PXDiagnosticsService
+(BOOL)isServiceAvailableForProviders:(id)arg1 ;
-(id)_libraryStatDictionary;
-(id)_providerItemsSummary;
-(id)parseProviderItemsSummary:(id)arg1 error:(id*)arg2 ;
-(id)collectProviderItemsSummaryAndLibraryStat;
-(id)tapToRadarURLWithTitle:(id)arg1 descriptionString:(id)arg2 ;
-(id)writeGraphData:(id)arg1 errorsList:(id)arg2 ;
-(void)writeErrorsToErrorLog:(id)arg1 ;
-(id)writeGraphStatistics:(id)arg1 errorsList:(id)arg2 ;
-(id)writePeopleContactSuggestionsGraphStatistics:(id)arg1 errorsList:(id)arg2 ;
-(id)writeMemoriesSummary:(id)arg1 analysisClient:(id)arg2 errorsList:(id)arg3 ;
-(id)writeLibraryStatistics:(id)arg1 analysisClient:(id)arg2 errorsList:(id)arg3 ;
-(id)diagnosticFilesForPeopleContactSuggestionWithError:(id*)arg1 ;
-(id)snapshotMemoriesRelatedResults:(id)arg1 error:(id*)arg2 ;
-(id)contextualViewController;
-(BOOL)canProvideConsoleDescription;
-(id)consoleDescription;
-(BOOL)canProvideContextualViewController;
-(BOOL)canProvideSettingsViewController;
-(id)settingsViewController;
-(id)title;
@end

