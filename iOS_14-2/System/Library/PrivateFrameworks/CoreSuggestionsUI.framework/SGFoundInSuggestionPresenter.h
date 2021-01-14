/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
*/

#import <CoreSuggestionsUI/SGSuggestionPresenter.h>

@protocol NSObject;
@class NSArray;

@interface SGFoundInSuggestionPresenter : SGSuggestionPresenter {

	/*^block*/id _filterBlock;
	NSArray* _searchableItems;
	unsigned long long _contentOptions;
	id<NSObject> _contactStoreObserverToken;
	BOOL _loadScheduled;

}

@property (copy) NSArray * realtimeSuggestions; 
-(void)addSuggestionsFromSearchableItems:(id)arg1 options:(unsigned long long)arg2 filter:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)setRealtimeSuggestions:(NSArray *)arg1 ;
-(NSArray *)realtimeSuggestions;
-(void)reloadSuggestionsFromSearchableItems;
-(void)_setNeedsToReloadSuggestionsAfter:(double)arg1 ;
-(void)_loadSuggestions;
-(void)_loadedRealtimeSuggestions:(id)arg1 ;
-(id)formatMixedCategoriesTitle:(id)arg1 ;
@end

