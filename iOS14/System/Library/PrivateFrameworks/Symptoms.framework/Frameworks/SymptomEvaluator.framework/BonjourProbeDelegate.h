/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol BonjourProbeDelegate <NSObject>
@optional
-(void)bonjourServiceAdded:(id)arg1 isUpdatedService:(BOOL)arg2;
-(void)bonjourServiceRemoved:(id)arg1;
-(void)bonjourProbeComplete:(id)arg1 status:(unsigned)arg2;

@end

