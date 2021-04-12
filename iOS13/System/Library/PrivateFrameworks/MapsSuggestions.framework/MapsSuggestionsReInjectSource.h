/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@class NSString;

@interface MapsSuggestionsReInjectSource : MapsSuggestionsBaseSource <MapsSuggestionsSource> {

	NSString* _path;

}

@property (nonatomic,retain) NSString * path;                                                //@synthesize path=_path - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
+(BOOL)isEnabled;
+(unsigned long long)disposition;
+(id)_entriesFromMultilineString:(id)arg1 ;
+(id)_entriesFromFileAtPath:(id)arg1 ;
-(void)stop;
-(NSString *)path;
-(void)start;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(double)updateSuggestionEntries;
-(void)_processFileAtPath:(id)arg1 ;
@end

