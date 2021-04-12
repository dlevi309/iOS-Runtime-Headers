/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ATXHistogramData : NSObject <NSSecureCoding> {

	HDGuardedData* _private_unsafeGuardedData;
	unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>, std::__1::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> > >* _guardedData;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)clear;
-(void)enumerate:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)decayByFactor:(float)arg1 ;
-(void)decayWithHalfLifeInDays:(float)arg1 ;
-(void)add:(float)arg1 a:(unsigned short)arg2 b:(unsigned short)arg3 ;
-(float)lookupUnsmoothedA:(unsigned short)arg1 b:(unsigned short)arg2 ;
-(float)lookupSmoothedWithBucketCount:(unsigned short)arg1 distanceScale:(float)arg2 a:(unsigned short)arg3 b:(unsigned short)arg4 ;
-(float)entropyWhereA:(unsigned short)arg1 b:(unsigned short)arg2 ;
-(int)countWhereA:(unsigned short)arg1 b:(unsigned short)arg2 ;
-(void)deleteWhereA:(unsigned short)arg1 b:(unsigned short)arg2 ;
-(id)aSet;
-(id)bSet;
-(id)initWithTimeHistogram:(id)arg1 ;
-(id)initWithCategoricalHistogram:(id)arg1 ;
-(void)applyPermutationToA:(id)arg1 ;
@end

