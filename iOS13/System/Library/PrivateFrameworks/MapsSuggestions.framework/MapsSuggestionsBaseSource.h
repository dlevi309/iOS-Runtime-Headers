/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsSource.h>

@protocol MapsSuggestionsSourceDelegate;
@class NSString;

@interface MapsSuggestionsBaseSource : NSObject <MapsSuggestionsSource> {

	id<MapsSuggestionsSourceDelegate> _delegate;
	NSString* _uniqueName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName;                                        //@synthesize uniqueName=_uniqueName - In the implementation block
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
+(BOOL)isEnabled;
+(unsigned long long)disposition;
-(id<MapsSuggestionsSourceDelegate>)delegate;
-(void)setDelegate:(id<MapsSuggestionsSourceDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(id)initWithDelegate:(id)arg1 ;
-(NSString *)uniqueName;
-(double)updateSuggestionEntriesOfType:(long long)arg1 ;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(double)updateSuggestionEntries;
-(unsigned long long)addOrUpdateMySuggestionEntries:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 name:(id)arg2 ;
@end

