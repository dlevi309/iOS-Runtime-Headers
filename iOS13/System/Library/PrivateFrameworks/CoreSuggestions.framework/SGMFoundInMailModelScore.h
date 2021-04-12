/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMFoundInMailModelScore : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(PETScalarEventTracker *)tracker;
-(void)trackEventWithScalar:(unsigned long long)arg1 model:(SGMFoundInMailModelType_)arg2 contactDetail:(SGMContactDetailType_)arg3 result:(SGMTypeSafeBool_)arg4 correct:(SGMTypeSafeBool_)arg5 mode:(SGFoundInMailModelMode_)arg6 supervision:(SGMFoundInMailSupervisionType_)arg7 ;
@end

