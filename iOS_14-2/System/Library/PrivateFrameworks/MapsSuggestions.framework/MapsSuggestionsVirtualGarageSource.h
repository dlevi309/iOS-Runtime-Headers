/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>
#import <MapsSuggestions/MapsSuggestionsVirtualGarageObserver.h>
#import <MapsSuggestions/MapsSuggestionsSource.h>

@protocol OS_dispatch_queue;
@class MapsSuggestionsVirtualGarage, NSObject, NSString;

@interface MapsSuggestionsVirtualGarageSource : MapsSuggestionsBaseSource <MapsSuggestionsVirtualGarageObserver, MapsSuggestionsSource> {

	MapsSuggestionsVirtualGarage* _virtualGarage;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MapsSuggestionsSourceDelegate> delegate; 
+(unsigned long long)disposition;
+(BOOL)isEnabled;
-(void)start;
-(BOOL)canProduceEntriesOfType:(long long)arg1 ;
-(void)stop;
-(BOOL)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)unpairedVehiclesChangedInVirtualGarage:(id)arg1 ;
-(id)initWithVirtualGarage:(id)arg1 delegate:(id)arg2 name:(id)arg3 ;
-(double)updateSuggestionEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)initFromResourceDepot:(id)arg1 name:(id)arg2 ;
@end

