/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/_DPCMSRecord.h>

@class NSData, NSString;

@interface _DPCMSSequenceRecord : _DPCMSRecord {

	short _sequenceHashIndex;
	NSData* _sequence;
	NSString* _plainSequence;

}

@property (nonatomic,retain) NSData * sequence;                    //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) short sequenceHashIndex;              //@synthesize sequenceHashIndex=_sequenceHashIndex - In the implementation block
@property (nonatomic,copy) NSString * plainSequence;               //@synthesize plainSequence=_plainSequence - In the implementation block
+(id)entityName;
-(id)description;
-(void)setSequence:(NSData *)arg1 ;
-(NSData *)sequence;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)jsonString;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(NSString *)plainSequence;
-(void)setPlainSequence:(NSString *)arg1 ;
-(id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 creationDate:(double)arg5 submitted:(BOOL)arg6 objectId:(id)arg7 ;
-(short)sequenceHashIndex;
-(void)setSequenceHashIndex:(short)arg1 ;
@end

