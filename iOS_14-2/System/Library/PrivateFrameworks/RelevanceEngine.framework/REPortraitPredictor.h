/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)update;
-(id)_init;
-(void)dealloc;
-(float)userAffinityToContent:(id)arg1 ;
-(void)_loadStoreIfNeeded;
-(NSDictionary *)namedEntityScores;
@end

