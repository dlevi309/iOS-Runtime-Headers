/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMContactDetailExtraction : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(PETScalarEventTracker *)tracker;
-(void)trackEventWithScalar:(unsigned long long)arg1 source:(SGMDocumentType_)arg2 signature:(SGMTypeSafeBool_)arg3 detail:(SGMContactDetailType_)arg4 outcome:(SGMContactDetailExtractionOutcome_)arg5 foundInSenderCNContact:(SGMContactDetailOwner_)arg6 extractionModelVersion:(unsigned long long)arg7 isUnlikelyPhone:(SGMTypeSafeBool_)arg8 signatureExtractionSource:(SGMContactDetailExtractionSignatureSource_)arg9 ;
@end

