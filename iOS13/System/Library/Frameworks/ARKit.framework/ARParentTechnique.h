/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>
#import <ARKit/ARTechniqueDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, ARTechniqueParallelGatherContext, NSArray, NSString;

@interface ARParentTechnique : ARTechnique <ARTechniqueDelegate> {

	BOOL _parallelExecution;
	NSObject*<OS_dispatch_queue> _queue;
	ARTechniqueParallelGatherContext* _previousContext;
	os_unfair_lock_s _previousContext_lock;
	NSArray* __internalTechniques;

}

@property (copy) NSArray * techniques; 
@property (copy) NSArray * _internalTechniques;                     //@synthesize _internalTechniques=__internalTechniques - In the implementation block
@property (readonly) BOOL isParallel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parentTechniqueOfClass:(Class)arg1 inArray:(id)arg2 ;
+(id)techniquesByReplacingOriginalTechniques:(id)arg1 withReplacementTechniques:(id)arg2 passingTest:(/*^block*/id)arg3 ;
+(id)techinqueInArray:(id)arg1 passingTest:(/*^block*/id)arg2 ;
+(id)techniquesByForceReplacingTechniques:(id)arg1 withMatchingClassTechniques:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)processData:(id)arg1 ;
-(id)_fullDescription;
-(void)prepare:(BOOL)arg1 ;
-(void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(NSArray *)techniques;
-(unsigned long long)requiredSensorDataTypes;
-(id)recursiveChildTechniques;
-(void)technique:(id)arg1 didFailWithError:(id)arg2 ;
-(double)requiredTimeInterval;
-(id)resultDataClasses;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)reconfigureFrom:(id)arg1 ;
-(void)setPowerUsage:(unsigned long long)arg1 ;
-(id)processResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3 ;
-(id)initWithTechniques:(id)arg1 ;
-(id)initWithParallelTechniques:(id)arg1 ;
-(id)techniqueOfClass:(Class)arg1 ;
-(id)techniqueMatchingPredicate:(id)arg1 ;
-(void)siblingTechniquesDidChange:(id)arg1 ;
-(id)predictedResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)setBonusLatency:(double)arg1 ;
-(id)initWithTechniques:(id)arg1 delegate:(id)arg2 ;
-(NSArray *)_internalTechniques;
-(void)setTechniques:(NSArray *)arg1 ;
-(void)_submitResultsForTimestamp:(double)arg1 context:(id)arg2 ;
-(void)set_internalTechniques:(NSArray *)arg1 ;
-(void)reuseTechniques:(id)arg1 ;
-(BOOL)isParallel;
@end

