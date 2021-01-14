/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSuggestionsSource <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@required
+(id)new;
+(unsigned long long)disposition;
+(BOOL)isEnabled;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2;
-(id)init;
-(id<MapsSuggestionsSourceDelegate>)delegate;
-(void)start;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
-(BOOL)canProduceEntriesOfType:(long long)arg1;
-(void)stop;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3;
-(void)setDelegate:(id)arg1;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1;
-(double)updateSuggestionEntriesOfType:(long long)arg1 handler:(/*^block*/id)arg2;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2;

@end

