/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsSourceDelegateProxy.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSString;

@interface MapsSuggestionsRemoteSource : MapsSuggestionsBaseSource <MapsSuggestionsSourceDelegateProxy, MapsSuggestionsSource> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _started;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
+(BOOL)isEnabled;
+(unsigned long long)disposition;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id)initWithDelegate:(id)arg1 ;
-(void)_closeConnection;
-(BOOL)_openConnectionIfNecessary;
-(double)updateSuggestionEntriesOfType:(long long)arg1 ;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(double)updateSuggestionEntries;
-(void)addOrUpdateSuggestionEntriesData:(id)arg1 sourceNameData:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)Debug_updateGraph;
@end

