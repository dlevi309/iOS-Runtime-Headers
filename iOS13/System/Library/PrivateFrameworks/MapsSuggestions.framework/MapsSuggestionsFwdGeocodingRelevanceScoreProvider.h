/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsRelevanceScoreProvider.h>

@protocol MapsSuggestionsNetworkRequester, MapsSuggestionsRelevanceScoreProvider;
@class NSString;

@interface MapsSuggestionsFwdGeocodingRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {

	id<MapsSuggestionsNetworkRequester> _networkRequester;
	id<MapsSuggestionsRelevanceScoreProvider> _wrappedScoreProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(NSString *)uniqueName;
-(BOOL)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)preLoad;
-(id)initDecoratingRelevanceScoreProvider:(id)arg1 networkRequester:(id)arg2 ;
@end

