/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMFoundInMailModelScore : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(void)trackEventWithScalar:(unsigned long long)arg1 model:(SGMFoundInMailModelType_)arg2 contactDetail:(SGMContactDetailType_)arg3 result:(SGMTypeSafeBool_)arg4 correct:(SGMTypeSafeBool_)arg5 mode:(SGFoundInMailModelMode_)arg6 supervision:(SGMFoundInMailSupervisionType_)arg7 ;
-(PETScalarEventTracker *)tracker;
@end

