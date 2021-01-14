/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSDate, NSIndexSet, NSDictionary;

@interface PGSuggestionOptions : NSObject {

	BOOL _allowNotification;
	BOOL _shouldProcessExistingSuggestions;
	BOOL _discardGeneratedSuggestions;
	BOOL _ignoreCollisionsWithExistingSuggestions;
	BOOL _ignoreCollisionsWithSameBatchSuggestions;
	BOOL _generatesInvalidSuggestions;
	BOOL _computesReasons;
	BOOL _clearFeaturedSuggestions;
	NSDate* _localToday;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;
	NSDate* _universalEndDateForWholeLibrarySuggestions;
	unsigned long long _maximumNumberOfSuggestions;
	NSIndexSet* _suggestionTypeWhitelist;
	NSIndexSet* _suggestionSubtypeWhitelist;
	NSIndexSet* _suggestionTypeBlacklist;
	NSIndexSet* _suggestionSubtypeBlacklist;
	NSDictionary* _additionalOptions;

}

@property (nonatomic,retain) NSDate * localToday;                                              //@synthesize localToday=_localToday - In the implementation block
@property (nonatomic,retain) NSDate * universalStartDate;                                      //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (nonatomic,retain) NSDate * universalEndDate;                                        //@synthesize universalEndDate=_universalEndDate - In the implementation block
@property (nonatomic,retain) NSDate * universalEndDateForWholeLibrarySuggestions;              //@synthesize universalEndDateForWholeLibrarySuggestions=_universalEndDateForWholeLibrarySuggestions - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfSuggestions;                    //@synthesize maximumNumberOfSuggestions=_maximumNumberOfSuggestions - In the implementation block
@property (assign,nonatomic) BOOL allowNotification;                                           //@synthesize allowNotification=_allowNotification - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessExistingSuggestions;                            //@synthesize shouldProcessExistingSuggestions=_shouldProcessExistingSuggestions - In the implementation block
@property (assign,nonatomic) BOOL discardGeneratedSuggestions;                                 //@synthesize discardGeneratedSuggestions=_discardGeneratedSuggestions - In the implementation block
@property (assign,nonatomic) BOOL clearFeaturedSuggestions;                                    //@synthesize clearFeaturedSuggestions=_clearFeaturedSuggestions - In the implementation block
@property (assign,nonatomic) BOOL ignoreCollisionsWithExistingSuggestions;                     //@synthesize ignoreCollisionsWithExistingSuggestions=_ignoreCollisionsWithExistingSuggestions - In the implementation block
@property (assign,nonatomic) BOOL ignoreCollisionsWithSameBatchSuggestions;                    //@synthesize ignoreCollisionsWithSameBatchSuggestions=_ignoreCollisionsWithSameBatchSuggestions - In the implementation block
@property (nonatomic,retain) NSIndexSet * suggestionTypeWhitelist;                             //@synthesize suggestionTypeWhitelist=_suggestionTypeWhitelist - In the implementation block
@property (nonatomic,retain) NSIndexSet * suggestionSubtypeWhitelist;                          //@synthesize suggestionSubtypeWhitelist=_suggestionSubtypeWhitelist - In the implementation block
@property (nonatomic,retain) NSIndexSet * suggestionTypeBlacklist;                             //@synthesize suggestionTypeBlacklist=_suggestionTypeBlacklist - In the implementation block
@property (nonatomic,retain) NSIndexSet * suggestionSubtypeBlacklist;                          //@synthesize suggestionSubtypeBlacklist=_suggestionSubtypeBlacklist - In the implementation block
@property (assign,nonatomic) BOOL generateInvalidSuggestions;                                  //@synthesize generatesInvalidSuggestions=_generatesInvalidSuggestions - In the implementation block
@property (assign,nonatomic) BOOL computeReasons;                                              //@synthesize computesReasons=_computesReasons - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalOptions;                                 //@synthesize additionalOptions=_additionalOptions - In the implementation block
-(void)setUniversalEndDate:(NSDate *)arg1 ;
-(NSDate *)universalEndDate;
-(id)init;
-(NSDate *)universalStartDate;
-(void)setUniversalStartDate:(NSDate *)arg1 ;
-(unsigned long long)maximumNumberOfSuggestions;
-(void)setMaximumNumberOfSuggestions:(unsigned long long)arg1 ;
-(NSDate *)localToday;
-(void)setLocalToday:(NSDate *)arg1 ;
-(void)setDefaultStartAndEndDatesIfNeeded;
-(void)setDefaultStartAndEndDatesIfNeededWithNumberOfDays:(long long)arg1 ;
-(NSDate *)universalEndDateForWholeLibrarySuggestions;
-(void)setUniversalEndDateForWholeLibrarySuggestions:(NSDate *)arg1 ;
-(BOOL)allowNotification;
-(void)setAllowNotification:(BOOL)arg1 ;
-(BOOL)shouldProcessExistingSuggestions;
-(void)setShouldProcessExistingSuggestions:(BOOL)arg1 ;
-(BOOL)discardGeneratedSuggestions;
-(void)setDiscardGeneratedSuggestions:(BOOL)arg1 ;
-(BOOL)ignoreCollisionsWithExistingSuggestions;
-(void)setIgnoreCollisionsWithExistingSuggestions:(BOOL)arg1 ;
-(BOOL)ignoreCollisionsWithSameBatchSuggestions;
-(void)setIgnoreCollisionsWithSameBatchSuggestions:(BOOL)arg1 ;
-(NSIndexSet *)suggestionTypeWhitelist;
-(void)setSuggestionTypeWhitelist:(NSIndexSet *)arg1 ;
-(NSIndexSet *)suggestionSubtypeWhitelist;
-(void)setSuggestionSubtypeWhitelist:(NSIndexSet *)arg1 ;
-(NSIndexSet *)suggestionTypeBlacklist;
-(void)setSuggestionTypeBlacklist:(NSIndexSet *)arg1 ;
-(NSIndexSet *)suggestionSubtypeBlacklist;
-(void)setSuggestionSubtypeBlacklist:(NSIndexSet *)arg1 ;
-(BOOL)generateInvalidSuggestions;
-(void)setGenerateInvalidSuggestions:(BOOL)arg1 ;
-(BOOL)computeReasons;
-(void)setComputeReasons:(BOOL)arg1 ;
-(NSDictionary *)additionalOptions;
-(void)setAdditionalOptions:(NSDictionary *)arg1 ;
-(BOOL)clearFeaturedSuggestions;
-(void)setClearFeaturedSuggestions:(BOOL)arg1 ;
@end

