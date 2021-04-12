/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@protocol MapsSuggestionsSource <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@required
+(BOOL)isEnabled;
+(unsigned long long)disposition;
-(id)init;
-(id<MapsSuggestionsSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)stop;
-(void)start;
-(id)initWithDelegate:(id)arg1;
-(double)updateSuggestionEntriesOfType:(long long)arg1;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2;
-(BOOL)canProduceEntriesOfType:(long long)arg1;
-(double)updateSuggestionEntries;

@end

