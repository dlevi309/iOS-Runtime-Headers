/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PETScalarEventTracker;

@interface PPMTopicsScored : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(PETScalarEventTracker *)tracker;
-(void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 resultSizeLog10:(unsigned long long)arg3 limitHit:(PPMTypeSafeBool_)arg4 timeSpec:(PPMTypeSafeBool_)arg5 timeLimited:(PPMTypeSafeBool_)arg6 exclusionSpec:(PPMTypeSafeBool_)arg7 error:(PPMTypeSafeBool_)arg8 ;
@end

