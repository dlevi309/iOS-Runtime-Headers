/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<EDMailboxPredictor>)predictor;
-(void)setPredictor:(id<EDMailboxPredictor>)arg1 ;
-(NSCache *)cache;
-(void)setCache:(NSCache *)arg1 ;
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

