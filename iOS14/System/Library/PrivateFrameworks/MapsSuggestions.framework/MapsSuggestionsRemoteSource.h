/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(unsigned long long)disposition;
+(BOOL)isEnabled;
-(void)feedbackForEntry:(id)arg1 action:(long long)arg2 ;
-(void)addOrUpdateSuggestionEntriesData:(id)arg1 sourceNameData:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)feedbackForContact:(id)arg1 action:(long long)arg2 ;
-(void)start;
-(void)feedbackForMapItem:(id)arg1 action:(long long)arg2 ;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(void)stop;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(double)updateSuggestionEntriesOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)Debug_updateGraph;
-(void)dealloc;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
@end

