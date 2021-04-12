/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
*/

#import <libobjc.A.dylib/CNAutocompleteUsageMonitorProbe.h>

@class NSMutableDictionary, NSNumber, NSString;

@interface CNAutocompleteCoreAnalyticsUsageMonitorProbe : NSObject <CNAutocompleteUsageMonitorProbe> {

	NSMutableDictionary* _coreAnalyticsDictionary;
	NSNumber* _selectedIndex;
	NSNumber* _selectedPredictionIndex;
	NSNumber* _lengthOfSearchString;
	NSNumber* _sourceType;

}

@property (nonatomic,retain) NSMutableDictionary * coreAnalyticsDictionary;              //@synthesize coreAnalyticsDictionary=_coreAnalyticsDictionary - In the implementation block
@property (nonatomic,retain) NSNumber * selectedIndex;                                   //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) NSNumber * selectedPredictionIndex;                         //@synthesize selectedPredictionIndex=_selectedPredictionIndex - In the implementation block
@property (nonatomic,retain) NSNumber * lengthOfSearchString;                            //@synthesize lengthOfSearchString=_lengthOfSearchString - In the implementation block
@property (nonatomic,retain) NSNumber * sourceType;                                      //@synthesize sourceType=_sourceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)sourceType;
-(id)init;
-(void)setSourceType:(NSNumber *)arg1 ;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(NSNumber *)selectedIndex;
-(void)sendData;
-(void)recordDuetReturnedResults:(BOOL)arg1 ;
-(void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1 ;
-(void)recordUserSelectedIndex:(unsigned long long)arg1 ;
-(void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1 ;
-(void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1 ;
-(void)recordUserIgnoredPredictionAfterDelay:(double)arg1 ;
-(void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2 ;
-(void)recordUserSawPredictions;
-(void)recordUserSawResultsConsideredSuggestion:(unsigned long long)arg1 ;
-(void)recordUserSawCuratedResults:(unsigned long long)arg1 ;
-(id)bundleIdentifierOfCurrentProcess;
-(id)makeBundleIdentifierOfCurrentProcess;
-(NSMutableDictionary *)coreAnalyticsDictionary;
-(void)setLengthOfSearchString:(NSNumber *)arg1 ;
-(void)setSelectedPredictionIndex:(NSNumber *)arg1 ;
-(NSNumber *)lengthOfSearchString;
-(id)sourceKeysForSourceType:(unsigned long long)arg1 ;
-(NSNumber *)selectedPredictionIndex;
-(void)setCoreAnalyticsDictionary:(NSMutableDictionary *)arg1 ;
@end

