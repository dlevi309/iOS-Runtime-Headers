/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class DecisionDetails;

@interface ManagedEvent : NSObject {

	unsigned long long _id_number;
	DecisionDetails* _details;

}

@property (assign,nonatomic) unsigned long long id_number;              //@synthesize id_number=_id_number - In the implementation block
@property (nonatomic,retain) DecisionDetails * details;                 //@synthesize details=_details - In the implementation block
-(void)setDetails:(DecisionDetails *)arg1 ;
-(unsigned long long)id_number;
-(id)description;
-(void)setId_number:(unsigned long long)arg1 ;
-(DecisionDetails *)details;
-(id)initWithId:(unsigned long long)arg1 details:(id)arg2 ;
-(void)serializeToXPCObject:(id)arg1 ;
@end

