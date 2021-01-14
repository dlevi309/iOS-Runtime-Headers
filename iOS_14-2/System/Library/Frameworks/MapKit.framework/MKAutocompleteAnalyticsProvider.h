/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCurrentState:(MKAutocompleteAnalyticsState *)arg1 ;
-(id)init;
-(MKAutocompleteAnalyticsState *)currentState;
-(void)setIsolationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)isolationQueue;
-(void)updateStateWithQuery:(id)arg1 queryTokens:(id)arg2 visibleSuggestionEntries:(id)arg3 ;
-(id)captureNewMetrics;
@end

