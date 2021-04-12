/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol REFeatureTransformerInvalidationDelegate;
@class REPriorityQueue, REUpNextTimer, NSString;

@interface REFeatureTransformer : NSObject <NSCopying> {

	REPriorityQueue* _scheduledUpdates;
	REUpNextTimer* _updateTimer;
	id<REFeatureTransformerInvalidationDelegate> _invalidationDelegate;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
+(BOOL)supportsInvalidation;
+(id)functionName;
+(id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
+(id)hashTransform;
+(id)maskTransformWithWidth:(unsigned long long)arg1 ;
+(id)bucketTransformerWithCount:(unsigned long long)arg1 minValue:(id)arg2 maxValue:(id)arg3 ;
+(BOOL)supportsPersistence;
+(id)maskAndShiftTransformWithStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2 ;
+(id)changedTransformWithImpulseDuration:(double)arg1 ;
+(id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 featureCount:(unsigned long long)arg3 transformation:(/*^block*/id)arg4 ;
+(id)featureTransformerClasses;
+(id)bucketTransformerWithBitWidth:(unsigned long long)arg1 ;
+(id)logTransformerWithBase:(id)arg1 ;
+(id)binaryTransformerWithThreshold:(id)arg1 ;
+(id)roundTransformer;
+(id)changedTransform;
+(id)recentTransformerWithCount:(unsigned long long)arg1 ;
+(id)customCategoricalTransformerWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)customCategoricalTransformerWithName:(id)arg1 featureCount:(unsigned long long)arg2 transformation:(/*^block*/id)arg3 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(void)_invalidate;
-(id)init;
-(NSString *)name;
-(void)setInvalidationDelegate:(id)arg1 ;
-(id)_invalidationQueue;
-(void)setName:(NSString *)arg1 ;
-(id)invalidationDelegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)readFromURL:(id)arg1 error:(id*)arg2 ;
-(void)invalidateWithContext:(id)arg1 ;
-(void)configureWithInvocation:(id)arg1 ;
-(void)_invalidationQueue_scheduleInvalidation:(id)arg1 ;
-(void)_performAndScheduleTimer;
@end

