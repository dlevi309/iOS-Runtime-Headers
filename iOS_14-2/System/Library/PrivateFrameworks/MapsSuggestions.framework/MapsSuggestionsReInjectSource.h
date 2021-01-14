/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@class NSString;

@interface MapsSuggestionsReInjectSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {

	NSString* _path;

}

@property (nonatomic,retain) NSString * path;                                                //@synthesize path=_path - In the implementation block
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_entriesFromMultilineString:(id)arg1 ;
+(unsigned long long)disposition;
+(BOOL)isEnabled;
-(void)start;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(void)stop;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
@end

