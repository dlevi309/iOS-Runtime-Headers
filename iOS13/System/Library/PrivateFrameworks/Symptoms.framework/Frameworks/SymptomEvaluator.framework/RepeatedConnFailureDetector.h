/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSSet, NSMutableDictionary, NSDate;

@interface RepeatedConnFailureDetector : NSObject {

	NSSet* _whitelistedDaemons;
	NSMutableDictionary* _flowRecords;
	NSMutableDictionary* _reportDampeners;
	NSDate* _lastFlush;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_flush;
-(void)noteSuspectFlow:(id)arg1 withOwner:(id)arg2 ;
-(void)_excessiveConnFailuresDetectedOn:(id)arg1 owner:(id)arg2 ;
@end

