/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <libobjc.A.dylib/SFFeedbackListener.h>

@protocol ATXSearchFeedbackListenerTarget;
@class NSObject, NSArray, NSString, PETGoalConversionEventTracker, SFSearchResult, NSMutableArray;

@interface ATXSearchFeedbackListener : NSObject <SFFeedbackListener> {

	NSObject*<ATXSearchFeedbackListenerTarget> _target;
	NSArray* _currentZKWItems;
	NSString* _query;
	unsigned char _appConsumerSubType;
	unsigned char _actionConsumerSubType;
	PETGoalConversionEventTracker* _apAppPredictionsShownTracker;
	BOOL _waitingForPredictedAppFeedback;
	BOOL _waitingForPredictedActionFeedback;
	SFSearchResult* _engagedResult;
	NSMutableArray* _explicitlyDismissedActions;
	BOOL _cardWasEngaged;
	SCD_Struct_AT3 _debounce;
	BOOL _shouldDebounce;

}

@property (assign,nonatomic) BOOL shouldDebounce;                   //@synthesize shouldDebounce=_shouldDebounce - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mergeNewSearchResults:(id)arg1 intoExistingResults:(id)arg2 ;
-(id)init;
-(void)_setQuery:(id)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)searchViewDidAppear:(id)arg1 ;
-(void)searchViewDidDisappear:(id)arg1 ;
-(void)cardViewDidDisappear:(id)arg1 ;
-(void)didStartSearch:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(void)_resetState;
-(BOOL)_isDuplicateEventWithState:(SCD_Struct_AT2*)arg1 timestamp:(unsigned long long)arg2 method:(SEL)arg3 ;
-(void)_setAppConsumerSubType:(unsigned char)arg1 actionConsumerSubType:(unsigned char)arg2 ;
-(void)_zkwItemsDidAppear:(id)arg1 ;
-(void)_sendFeedbackForEngagement:(BOOL)arg1 actionExecutedInBackground:(BOOL)arg2 ;
-(void)_sendActionFeedback:(id)arg1 searchedActionType:(unsigned long long)arg2 engagedAppString:(id)arg3 searchResults:(id)arg4 executedInBackground:(BOOL)arg5 ;
-(void)_sendAppFeedback:(id)arg1 searchResults:(id)arg2 ;
-(BOOL)shouldDebounce;
-(void)setShouldDebounce:(BOOL)arg1 ;
@end

