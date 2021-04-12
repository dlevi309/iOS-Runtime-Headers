/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@class NSMutableDictionary, NSString, MapsSuggestionsQueue;

@interface MapsSuggestionsSuppressor : NSObject <MapsSuggestionsObject> {

	NSMutableDictionary* _suppressionEntries;
	NSString* _suppressionEntriesFilePath;
	MapsSuggestionsQueue* _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)defaultFilePath;
-(id)init;
-(void)purge;
-(id)initWithFilePath:(id)arg1 ;
-(NSString *)uniqueName;
-(BOOL)suppressEntry:(id)arg1 forTime:(double)arg2 ;
-(BOOL)isSuppressedEntry:(id)arg1 ;
-(id)test_dateUntilSuppressedEntry:(id)arg1 ;
-(void)test_deleteSuppressedEntriesFile;
-(BOOL)loadSuppressedEntries;
-(BOOL)_saveSuppressedEntries;
-(BOOL)saveSuppressedEntries;
-(BOOL)_loadSuppressedEntries;
@end

