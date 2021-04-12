/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@class NSDate, NSIndexSet;

@interface PGSuggestionOptions : NSObject {

	BOOL _allowNotification;
	BOOL _shouldProcessExistingSuggestions;
	BOOL _discardGeneratedSuggestions;
	BOOL _ignoreCollisionsWithExistingSuggestions;
	BOOL _ignoreCollisionsWithSameBatchSuggestions;
	BOOL _generatesInvalidSuggestions;
	BOOL _computesReasons;
	NSDate* _localToday;
	NSDate* _universalStartDate;
	NSDate* _universalEndDate;
	NSDate* _universalEndDateForWholeLibrarySuggestions;
	unsigned long long _maximumNumberOfSuggestions;
	NSIndexSet* _suggestionTypeWhitelist;
	NSIndexSet* _suggestionSubtypeWhitelist;
	NSIndexSet* _suggestionTypeBlacklist;
	NSIndexSet* _suggestionSubtypeBlacklist;

}

@property (nonatomic,retain) NSDate * localToday;                                              //@synthesize localToday=_localToday - In the implementation block
@property (nonatomic,retain) NSDate * universalStartDate;                                      //@synthesize universalStartDate=_universalStartDate - In the implementation block
@property (nonatomic,retain) NSDate * universalEndDate;                                        //@synthesize universalEndDate=_universalEndDate - In the implementation block
@property (nonatomic,retain) NSDate * universalEndDateForWholeLibrarySuggestions;              //@synthesize universalEndDateForWholeLibrarySuggestions=_universalEndDateForWholeLibrarySuggestions - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfSuggestions;                    //@synthesize maximumNumberOfSuggestions=_maximumNumberOfSuggestions - In the implementation block
@property (assign,nonatomic) BOOL allowNotification;                                           //@synthesize allowNotification=_allowNotification - In the implementation block
@property (assign,nonatomic) BOOL shouldProcessExistingSuggestions;                            //@synthesize shouldProcessExistingSuggestions=_shouldProcessExistingSuggestions - In the implementation block
@property (assign,nonatomic) BOOL discardGeneratedSuggestions;                                 //@synthesize discardGeneratedSuggestions=_discardGeneratedSuggestions - In the implementation block
@property (assign,nonatomic) BOOL ignoreCollisionsWithExistingSuggestions;                     //@synthesize ignoreCollisionsWithExistingSuggestions=_ignoreCollisionsWithExistingSuggestions - In the implementation block
@property (assign,nonatomic) BOOL ignoreCollisionsWithSameBatchSuggestions;                    //@synthesize ignoreCollisionsWithSameBatchSuggestions=_ignoreCollisionsWithSameBatchSuggestions - In the implementation block
@property (nonatomic,retain) NSIndexSet * suggestionTypeWhitelist;                             //@synthesize suggestionTypeWhitelist=_suggestionTypeWhitelist - In the implementation block
@property (nonatomic,retain) NSIndexSet * suggestionSubtypeWhitelist;                          //@synthesize suggestionSubtypeWhitelist=_suggestionSubtypeWhitelist - In the implementation block
@property (nonatomic,retain) NSIndexSet * suggestionTypeBlacklist;                             //@synthesize suggestionTypeBlacklist=_suggestionTypeBlacklist - In the implementation block
@property (nonatomic,retain) NSIndexSet * suggestionSubtypeBlacklist;                          //@synthesize suggestionSubtypeBlacklist=_suggestionSubtypeBlacklist - In the implementation block
@property (assign,nonatomic) BOOL generateInvalidSuggestions;                                  //@synthesize generatesInvalidSuggestions=_generatesInvalidSuggestions - In the implementation block
@property (assign,nonatomic) BOOL computeReasons;                                              //@synthesize computesReasons=_computesReasons - In the implementation block
-(void)setDefaultStartAndEndDatesIfNeeded;
-(id)init;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(void)setMaximumNumberOfSuggestions:(unsigned long long)arg1 ;
-(unsigned long long)maximumNumberOfSuggestions;
-(void)setUniversalEndDate:(NSDate *)arg1 ;
-(void)setUniversalStartDate:(NSDate *)arg1 ;
-(void)setLocalToday:(NSDate *)arg1 ;
-(void)setAllowNotification:(BOOL)arg1 ;
-(void)setDiscardGeneratedSuggestions:(BOOL)arg1 ;
-(void)setShouldProcessExistingSuggestions:(BOOL)arg1 ;
-(void)setIgnoreCollisionsWithSameBatchSuggestions:(BOOL)arg1 ;
-(void)setIgnoreCollisionsWithExistingSuggestions:(BOOL)arg1 ;
-(void)setComputeReasons:(BOOL)arg1 ;
-(void)setGenerateInvalidSuggestions:(BOOL)arg1 ;
-(void)setSuggestionSubtypeWhitelist:(NSIndexSet *)arg1 ;
-(void)setSuggestionTypeWhitelist:(NSIndexSet *)arg1 ;
-(NSDate *)localToday;
-(BOOL)discardGeneratedSuggestions;
-(BOOL)shouldProcessExistingSuggestions;
-(NSDate *)universalEndDateForWholeLibrarySuggestions;
-(void)setUniversalEndDateForWholeLibrarySuggestions:(NSDate *)arg1 ;
-(void)setSuggestionTypeBlacklist:(NSIndexSet *)arg1 ;
-(BOOL)allowNotification;
-(BOOL)ignoreCollisionsWithExistingSuggestions;
-(BOOL)ignoreCollisionsWithSameBatchSuggestions;
-(NSIndexSet *)suggestionTypeWhitelist;
-(NSIndexSet *)suggestionSubtypeWhitelist;
-(NSIndexSet *)suggestionTypeBlacklist;
-(NSIndexSet *)suggestionSubtypeBlacklist;
-(void)setSuggestionSubtypeBlacklist:(NSIndexSet *)arg1 ;
-(BOOL)generateInvalidSuggestions;
-(BOOL)computeReasons;
@end

