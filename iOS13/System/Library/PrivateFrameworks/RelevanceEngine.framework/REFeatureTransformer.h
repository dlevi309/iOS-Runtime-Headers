/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)functionName;
+(BOOL)supportsPersistence;
+(BOOL)supportsInvalidation;
+(id)maskAndShiftTransformWithStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2 ;
+(id)bucketTransformerWithCount:(unsigned long long)arg1 minValue:(id)arg2 maxValue:(id)arg3 ;
+(id)changedTransformWithImpulseDuration:(double)arg1 ;
+(id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
+(id)customTransformerWithName:(id)arg1 outputType:(unsigned long long)arg2 featureCount:(unsigned long long)arg3 transformation:(/*^block*/id)arg4 ;
+(id)featureTransformerClasses;
+(id)bucketTransformerWithBitWidth:(unsigned long long)arg1 ;
+(id)logTransformerWithBase:(id)arg1 ;
+(id)binaryTransformerWithThreshold:(id)arg1 ;
+(id)roundTransformer;
+(id)hashTransform;
+(id)maskTransformWithWidth:(unsigned long long)arg1 ;
+(id)changedTransform;
+(id)recentTransformerWithCount:(unsigned long long)arg1 ;
+(id)customCategoricalTransformerWithName:(id)arg1 block:(/*^block*/id)arg2 ;
+(id)customCategoricalTransformerWithName:(id)arg1 featureCount:(unsigned long long)arg2 transformation:(/*^block*/id)arg3 ;
-(id)init;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_invalidate;
-(void)setName:(NSString *)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)readFromURL:(id)arg1 error:(id*)arg2 ;
-(void)invalidateWithContext:(id)arg1 ;
-(void)configureWithInvocation:(id)arg1 ;
-(id)_invalidationQueue;
-(void)_invalidationQueue_scheduleInvalidation:(id)arg1 ;
-(void)_performAndScheduleTimer;
-(void)setInvalidationDelegate:(id)arg1 ;
-(id)invalidationDelegate;
@end

