/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMContactConfirmed : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(PETScalarEventTracker *)tracker;
-(void)trackEventWithScalar:(unsigned long long)arg1 app:(SGMBannerDisplayApp_)arg2 firstNameAdj:(SGMTypeSafeBool_)arg3 lastNameAdj:(SGMTypeSafeBool_)arg4 middleNameAdj:(SGMTypeSafeBool_)arg5 isUpdate:(SGMTypeSafeBool_)arg6 extracted:(SGMBannerExtractionType_)arg7 extractionModelVersion:(unsigned long long)arg8 selfId:(SGMTypeSafeBool_)arg9 contactDetail:(SGMContactDetailType_)arg10 ;
@end

