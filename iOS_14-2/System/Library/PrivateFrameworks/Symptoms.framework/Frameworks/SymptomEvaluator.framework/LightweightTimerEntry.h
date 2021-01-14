/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@interface LightweightTimerEntry : NSObject {

	unsigned _seqNo;
	id _userParam;
	unsigned long long _slotNum;

}

@property (nonatomic,retain) id userParam;                            //@synthesize userParam=_userParam - In the implementation block
@property (assign,nonatomic) unsigned long long slotNum;              //@synthesize slotNum=_slotNum - In the implementation block
@property (assign,nonatomic) unsigned seqNo;                          //@synthesize seqNo=_seqNo - In the implementation block
-(void)setUserParam:(id)arg1 ;
-(void)setSlotNum:(unsigned long long)arg1 ;
-(void)setSeqNo:(unsigned)arg1 ;
-(id)userParam;
-(unsigned)seqNo;
-(id)description;
-(unsigned long long)slotNum;
@end

