/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKAutocompleteAnalyticsState.h>
#import <libobjc.A.dylib/MKAutocompleteAnalyticsProvider.h>

@protocol MKAutocompleteAnalyticsProvider
@required
-(id)captureNewMetrics;

@end


@protocol OS_dispatch_queue;
@class NSObject, MKAutocompleteAnalyticsState;

@interface MKAutocompleteAnalyticsProvider : NSObject <MKAutocompleteAnalyticsState, MKAutocompleteAnalyticsProvider> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	MKAutocompleteAnalyticsState* _currentState;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> isolationQueue;              //@synthesize isolationQueue=_isolationQueue - In the implementation block
@property (nonatomic,retain) MKAutocompleteAnalyticsState * currentState;              //@synthesize currentState=_currentState - In the implementation block
-(id)init;
-(MKAutocompleteAnalyticsState *)currentState;
-(void)setCurrentState:(MKAutocompleteAnalyticsState *)arg1 ;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)captureNewMetrics;
-(void)updateStateWithQuery:(id)arg1 queryTokens:(id)arg2 visibleSuggestionEntries:(id)arg3 ;
@end

