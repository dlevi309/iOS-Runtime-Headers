/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PETScalarEventTracker;

@interface PPMTopicsScoredForMapping : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(PETScalarEventTracker *)tracker;
-(void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 mappingId:(id)arg3 resultSizeLog10:(unsigned long long)arg4 timeLimited:(PPMTypeSafeBool_)arg5 exclusionSpec:(PPMTypeSafeBool_)arg6 error:(PPMTypeSafeBool_)arg7 ;
@end

