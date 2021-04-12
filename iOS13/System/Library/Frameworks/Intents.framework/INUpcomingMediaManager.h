/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class CSSearchableIndex;

@interface INUpcomingMediaManager : NSObject {

	CSSearchableIndex* _index;

}

@property (nonatomic,readonly) CSSearchableIndex * index;              //@synthesize index=_index - In the implementation block
+(id)sharedManager;
+(id)mediaQueue;
-(CSSearchableIndex *)index;
-(id)initWithSearchableIndex:(id)arg1 ;
-(void)setSuggestedMediaIntents:(id)arg1 ;
-(void)_setSuggestedMediaIntents:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_replaceMediaIntents:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)setPredictionMode:(long long)arg1 forType:(long long)arg2 ;
-(long long)_predictionModeForBundleId:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)keyWithMediaItemTypeName:(id)arg1 bundleId:(id)arg2 ;
@end

