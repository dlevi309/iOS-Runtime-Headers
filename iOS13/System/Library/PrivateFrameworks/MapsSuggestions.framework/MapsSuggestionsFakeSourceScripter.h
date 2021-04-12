/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, _MapsSuggestionsFakeSourceScripterStep, NSObject, MapsSuggestionsFakePullSource, NSString;

@interface MapsSuggestionsFakeSourceScripter : NSObject <MapsSuggestionsObject> {

	NSMutableArray* _steps;
	_MapsSuggestionsFakeSourceScripterStep* _previousStep;
	NSObject*<OS_dispatch_queue> _queue;
	MapsSuggestionsFakePullSource* _fakeSource;

}

@property (nonatomic,retain) MapsSuggestionsFakePullSource * fakeSource;              //@synthesize fakeSource=_fakeSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(NSString *)uniqueName;
-(MapsSuggestionsFakePullSource *)fakeSource;
-(void)setFakeSource:(MapsSuggestionsFakePullSource *)arg1 ;
-(id)initWithFakeSource:(id)arg1 ;
-(void)addEntriesToAdd:(id)arg1 ;
-(void)sendNextNow;
-(void)sendNextAfterSeconds:(double)arg1 ;
-(void)_sendStep:(id)arg1 ;
-(void)resendSameNow;
-(void)resendSameAfterSeconds:(double)arg1 ;
@end

