/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(BOOL)isRunning;
-(void)sendLocation:(id)arg1 ;
-(void)startImplemention;
-(void)stopImplementation;
-(void)sendVisit:(id)arg1 ;
-(unsigned long long)calledStartImplementation;
-(unsigned long long)calledStopImplementation;
@end

