/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class DecisionDetails;

@interface ManagedEvent : NSObject {

	unsigned long long _id_number;
	DecisionDetails* _details;

}

@property (assign,nonatomic) unsigned long long id_number;              //@synthesize id_number=_id_number - In the implementation block
@property (nonatomic,retain) DecisionDetails * details;                 //@synthesize details=_details - In the implementation block
-(id)description;
-(DecisionDetails *)details;
-(void)setDetails:(DecisionDetails *)arg1 ;
-(id)initWithId:(unsigned long long)arg1 details:(id)arg2 ;
-(void)serializeToXPCObject:(id)arg1 ;
-(unsigned long long)id_number;
-(void)setId_number:(unsigned long long)arg1 ;
@end

