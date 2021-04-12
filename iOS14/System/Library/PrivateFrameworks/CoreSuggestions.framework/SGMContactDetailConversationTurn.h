/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMContactDetailConversationTurn : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(void)trackEventWithScalar:(unsigned long long)arg1 detailExtraction:(SGMDetailExtractionType_)arg2 selfIdName:(SGMTypeSafeBool_)arg3 extractionModelVersion:(unsigned long long)arg4 receivedConverstationTurn:(SGMTypeSafeBool_)arg5 knownSuggestedContactDetail:(SGMTypeSafeBool_)arg6 curatedContactDetail:(SGMTypeSafeBool_)arg7 throughApp:(SGMContactDetailUsedApp_)arg8 contactDetailUsed:(SGMContactDetailType_)arg9 ;
-(id)init;
-(PETScalarEventTracker *)tracker;
@end

