/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/_DPCMSSequenceRecord.h>

@interface _DPHCMSSequenceRecord : _DPCMSSequenceRecord {

	int _sequenceBitIndex;

}

@property (assign,nonatomic) int sequenceBitIndex;              //@synthesize sequenceBitIndex=_sequenceBitIndex - In the implementation block
+(id)entityName;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)jsonString;
-(id)description;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(int)sequenceBitIndex;
-(void)setSequenceBitIndex:(int)arg1 ;
-(id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 sequenceBitIndex:(unsigned)arg5 creationDate:(double)arg6 submitted:(BOOL)arg7 objectId:(id)arg8 ;
@end

