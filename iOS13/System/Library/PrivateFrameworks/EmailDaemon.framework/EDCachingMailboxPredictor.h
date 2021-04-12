/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDMailboxPredictor.h>

@protocol EDMailboxPredictor;
@class NSCache, NSMutableDictionary, NSString;

@interface EDCachingMailboxPredictor : NSObject <EDMailboxPredictor> {

	id<EDMailboxPredictor> _predictor;
	NSCache* _cache;
	NSMutableDictionary* _cacheKeysByProperty;

}

@property (nonatomic,retain) id<EDMailboxPredictor> predictor;                       //@synthesize predictor=_predictor - In the implementation block
@property (nonatomic,retain) NSCache * cache;                                        //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cacheKeysByProperty;              //@synthesize cacheKeysByProperty=_cacheKeysByProperty - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCache:(NSCache *)arg1 ;
-(NSCache *)cache;
-(id<EDMailboxPredictor>)predictor;
-(void)setPredictor:(id<EDMailboxPredictor>)arg1 ;
-(void)setCacheKeysByProperty:(NSMutableDictionary *)arg1 ;
-(id)_cacheKeyForMessages:(id)arg1 ;
-(id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id*)arg3 ;
-(id)_propertyKeysForMessage:(id)arg1 ;
-(void)_trackCacheKey:(id)arg1 forPropertyKey:(id)arg2 ;
-(NSMutableDictionary *)cacheKeysByProperty;
-(id)initWithPredictor:(id)arg1 ;
-(void)invalidatePredictionsAffectedByMessage:(id)arg1 ;
-(void)removeAllPredictions;
@end

