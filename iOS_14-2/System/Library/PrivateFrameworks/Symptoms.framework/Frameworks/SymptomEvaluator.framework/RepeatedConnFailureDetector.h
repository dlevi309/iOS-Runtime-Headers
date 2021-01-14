/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSSet, NSMutableDictionary, NSDate;

@interface RepeatedConnFailureDetector : NSObject {

	NSSet* _whitelistedDaemons;
	NSMutableDictionary* _flowRecords;
	NSMutableDictionary* _reportDampeners;
	NSDate* _lastFlush;

}
-(void)noteSuspectFlow:(id)arg1 withOwner:(id)arg2 ;
-(id)init;
-(void)_excessiveConnFailuresDetectedOn:(id)arg1 owner:(id)arg2 ;
-(void)invalidate;
-(void)_flush;
-(void)dealloc;
@end

