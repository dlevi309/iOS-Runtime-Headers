/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PETScalarEventTracker;

@interface PPMFeedbackRegistered : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(PETScalarEventTracker *)tracker;
-(void)trackEventWithScalar:(unsigned long long)arg1 client_id:(id)arg2 variant_name:(id)arg3 type:(PPMPortraitFeedbackType_)arg4 component:(PPMPortraitComponent_)arg5 mapping_id:(id)arg6 from_portrait:(PPMTypeSafeBool_)arg7 ;
@end

