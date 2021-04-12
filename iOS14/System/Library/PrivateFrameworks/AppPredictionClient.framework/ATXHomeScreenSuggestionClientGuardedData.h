/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@protocol OS_dispatch_source;
@class NSHashTable, NSObject, ATXHomeScreenCachedSuggestions, NSDictionary, NSMutableArray, NSString, ATXInformationStore;

@interface ATXHomeScreenSuggestionClientGuardedData : NSObject {

	NSHashTable* observers;
	NSObject*<OS_dispatch_source> rotationSuppressionTimer;
	ATXHomeScreenCachedSuggestions* suppressedSuggestions;
	NSDictionary* currentSuggestionWidgetLayouts;
	NSDictionary* currentAppPredictionPanelLayouts;
	NSDictionary* currentStackSuggestions;
	NSMutableArray* currentFallbacks;
	NSString* currentBlendingCacheId;
	NSMutableArray* stacksAffectedByDebugRotation;
	ATXInformationStore* store;

}
@end

