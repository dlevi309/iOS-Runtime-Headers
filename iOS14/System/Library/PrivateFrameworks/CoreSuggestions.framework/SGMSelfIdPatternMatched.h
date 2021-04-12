/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMSelfIdPatternMatched : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(void)trackEventWithScalar:(unsigned long long)arg1 patternType:(SGMSIPatternType_)arg2 patternHash:(id)arg3 nameTokens:(unsigned long long)arg4 nameClass:(SGMSINameClassification_)arg5 messageIndex:(unsigned long long)arg6 ;
-(PETScalarEventTracker *)tracker;
@end

