/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPFeedbackProcessing.h>

@class PPLocationStorage, PPLocationCache, PPMLocationScored, PPMLocationDonation, PPMObjectsDeletion, PPMFeedbackRegistered, PPM2FeedbackPortraitRegistered;

@interface PPLocalLocationStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {

	PPLocationStorage* _storage;
	PPLocationCache* _cache;
	PPMLocationScored* _adoptionTracker;
	PPMLocationDonation* _donationTracker;
	PPMObjectsDeletion* _deletionTracker;
	PPMFeedbackRegistered* _feedbackTracker;
	PPM2FeedbackPortraitRegistered* _feedbackTracker2;

}
+(id)defaultStore;
+(id)scoredLocationFromName:(id)arg1 category:(unsigned short)arg2 score:(double)arg3 sentimentScore:(double)arg4 ;
+(unsigned short)namedEntityCategoryToLocationCategory:(unsigned long long)arg1 ;
+(BOOL)isLocationRelevantNamedEntityCategory:(unsigned long long)arg1 ;
+(id)locationFromMapItemDictionary:(id)arg1 ;
+(void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2 ;
+(float)resolvedPerRecordDecayRateForRecord:(id)arg1 perRecordDecayRate:(float)arg2 ;
+(id)scoreLocations:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 ;
+(id)locationNamedEntityToPPScoredLocation:(id)arg1 ;
+(id)locationFromMapItem:(id)arg1 ;
+(unsigned short)poiCategoryToPPLocationCategory:(id)arg1 ;
+(unsigned short)routineLOITypeToLocationCategory:(long long)arg1 ;
-(id)init;
-(id)_init;
-(id)initWithStorage:(id)arg1 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 ;
-(BOOL)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(BOOL)arg5 decayRate:(double)arg6 error:(id*)arg7 ;
-(BOOL)iterRankedLocationsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)rankedLocationsWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterLocationRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)locationRecordsWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)processFeedback:(id)arg1 ;
-(id)sourceStatsExcludedAlgorithms:(id)arg1 ;
-(void)_petLoggingForQuery:(id)arg1 resultCount:(unsigned long long)arg2 hasError:(BOOL)arg3 ;
-(id)locationRecordOfCategory:(unsigned short)arg1 ;
-(id)locationForHome;
-(id)locationForWork;
-(id)homeOrWorkAddresses;
-(id)_unlimitedLocationRecordsWithQuery:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)deleteAllLocationsOlderThanDate:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3 ;
@end

