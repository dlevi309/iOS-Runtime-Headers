/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseLocationUpdater.h>
#import <MapsSuggestions/MapsSuggestionsLocationUpdater.h>

@class NSString;

@interface MapsSuggestionsFakeLocationUpdater : MapsSuggestionsBaseLocationUpdater <MapsSuggestionsLocationUpdater> {

	BOOL _isRunning;
	unsigned long long _calledStartImplementation;
	unsigned long long _calledStopImplementation;

}

@property (nonatomic,readonly) unsigned long long calledStartImplementation;              //@synthesize calledStartImplementation=_calledStartImplementation - In the implementation block
@property (nonatomic,readonly) unsigned long long calledStopImplementation;               //@synthesize calledStopImplementation=_calledStopImplementation - In the implementation block
@property (nonatomic,readonly) BOOL isRunning;                                            //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isRunning;
-(void)sendLocation:(id)arg1 ;
-(void)sendVisit:(id)arg1 ;
-(void)onStartImplementation;
-(void)onStopImplementation;
-(unsigned long long)calledStartImplementation;
-(unsigned long long)calledStopImplementation;
@end

