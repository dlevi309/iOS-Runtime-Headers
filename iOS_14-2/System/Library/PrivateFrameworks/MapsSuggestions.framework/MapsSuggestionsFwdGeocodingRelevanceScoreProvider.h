/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsRelevanceScoreProvider.h>

@protocol MapsSuggestionsNetworkRequester, MapsSuggestionsRelevanceScoreProvider;
@class NSString;

@interface MapsSuggestionsFwdGeocodingRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {

	id<MapsSuggestionsNetworkRequester> _networkRequester;
	id<MapsSuggestionsRelevanceScoreProvider> _wrappedScoreProvider;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(id)initDecoratingRelevanceScoreProvider:(id)arg1 networkRequester:(id)arg2 ;
-(BOOL)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)preLoad;
@end

