/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsSource.h>

@protocol MapsSuggestionsSourceDelegate;
@class NSString;

@interface MapsSuggestionsBaseSource : NSObject <MapsSuggestionsSource> {

	id<MapsSuggestionsSourceDelegate> _delegate;
	NSString* _uniqueName;

}

@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName;                                        //@synthesize uniqueName=_uniqueName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)disposition;
+(BOOL)isEnabled;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(NSString *)uniqueName;
-(id<MapsSuggestionsSourceDelegate>)delegate;
-(void)start;
-(id)initFromResourceDepot:(id)arg1 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(void)stop;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<MapsSuggestionsSourceDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 name:(id)arg2 ;
-(unsigned long long)addOrUpdateMySuggestionEntries:(id)arg1 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(double)updateSuggestionEntriesOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
@end

