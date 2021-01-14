/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@class NSMutableDictionary, NSString, MapsSuggestionsQueue;

@interface MapsSuggestionsSuppressor : NSObject <MapsSuggestionsObject> {

	NSMutableDictionary* _suppressionEntries;
	NSString* _suppressionEntriesFilePath;
	MapsSuggestionsQueue* _queue;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)test_dateUntilSuppressedEntry:(id)arg1 ;
-(BOOL)isSuppressedEntry:(id)arg1 ;
-(BOOL)saveSuppressedEntries;
-(id)init;
-(NSString *)uniqueName;
-(BOOL)suppressEntry:(id)arg1 forTime:(double)arg2 ;
-(void)test_deleteSuppressedEntriesFile;
-(void)awaitQueue;
-(id)initWithFilePath:(id)arg1 ;
-(void)purge;
-(BOOL)loadSuppressedEntries;
@end

