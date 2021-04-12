/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMContactDetailConversationTurn : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(PETScalarEventTracker *)tracker;
-(void)trackEventWithScalar:(unsigned long long)arg1 detailExtraction:(SGMDetailExtractionType_)arg2 selfIdName:(SGMTypeSafeBool_)arg3 extractionModelVersion:(unsigned long long)arg4 receivedConverstationTurn:(SGMTypeSafeBool_)arg5 knownSuggestedContactDetail:(SGMTypeSafeBool_)arg6 curatedContactDetail:(SGMTypeSafeBool_)arg7 throughApp:(SGMContactDetailUsedApp_)arg8 contactDetailUsed:(SGMContactDetailType_)arg9 ;
@end

