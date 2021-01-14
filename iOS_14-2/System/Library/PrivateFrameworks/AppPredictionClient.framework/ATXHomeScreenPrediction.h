/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSDictionary, NSString, NSArray;

@interface ATXHomeScreenPrediction : NSObject {

	NSDictionary* _suggestions;
	NSString* _blendingCacheId;
	NSArray* _stacksAffectedByDebugRotation;

}

@property (nonatomic,readonly) NSString * blendingCacheId;                           //@synthesize blendingCacheId=_blendingCacheId - In the implementation block
@property (nonatomic,readonly) NSArray * stacksAffectedByDebugRotation;              //@synthesize stacksAffectedByDebugRotation=_stacksAffectedByDebugRotation - In the implementation block
-(id)init;
-(id)suggestionForStackIdentifier:(id)arg1 ;
-(id)suggestionsForAllStacks;
-(NSString *)blendingCacheId;
-(NSArray *)stacksAffectedByDebugRotation;
-(id)initWithBlendingCacheIdentifier:(id)arg1 widgetSuggestions:(id)arg2 stacksAffectedByDebugRotation:(id)arg3 ;
@end

