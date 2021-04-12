/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class PETScalarEventTracker;

@interface SGMContactDetailExtraction : NSObject {

	PETScalarEventTracker* _tracker;

}

@property (nonatomic,readonly) PETScalarEventTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(id)init;
-(void)trackEventWithScalar:(unsigned long long)arg1 source:(SGMDocumentType_)arg2 signature:(SGMTypeSafeBool_)arg3 detail:(SGMContactDetailType_)arg4 outcome:(SGMContactDetailExtractionOutcome_)arg5 foundInSenderCNContact:(SGMContactDetailOwner_)arg6 extractionModelVersion:(unsigned long long)arg7 isUnlikelyPhone:(SGMTypeSafeBool_)arg8 signatureExtractionSource:(SGMContactDetailExtractionSignatureSource_)arg9 ;
-(PETScalarEventTracker *)tracker;
@end

