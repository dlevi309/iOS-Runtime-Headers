/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/REPredictor.h>
#import <libobjc.A.dylib/REPortraitPredictorProperties.h>

@class NSDictionary, PPNamedEntityStore, NSMutableDictionary;

@interface REPortraitPredictor : REPredictor <REPortraitPredictorProperties> {

	PPNamedEntityStore* _namedEntityStore;
	NSMutableDictionary* _namedEntityScores;

}

@property (nonatomic,readonly) NSDictionary * namedEntityScores; 
+(double)updateInterval;
-(void)dealloc;
-(id)_init;
-(void)update;
-(float)userAffinityToContent:(id)arg1 ;
-(void)_loadStoreIfNeeded;
-(NSDictionary *)namedEntityScores;
@end

