/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/_DPOBHRecord.h>

@class NSString;

@interface _DPOBHSequenceRecord : _DPOBHRecord {

	BOOL _sequenceBitValue;
	long long _sequenceBitPosition;
	NSString* _plainSequence;

}

@property (assign,nonatomic) long long sequenceBitPosition;              //@synthesize sequenceBitPosition=_sequenceBitPosition - In the implementation block
@property (assign,nonatomic) BOOL sequenceBitValue;                      //@synthesize sequenceBitValue=_sequenceBitValue - In the implementation block
@property (nonatomic,retain) NSString * plainSequence;                   //@synthesize plainSequence=_plainSequence - In the implementation block
+(id)entityName;
+(id)recordWithKey:(id)arg1 sequence:(id)arg2 bitPosition:(long long)arg3 bitValue:(BOOL)arg4 creationDate:(double)arg5 submitted:(BOOL)arg6 objectId:(id)arg7 ;
-(id)description;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)jsonString;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(id)initWithKey:(id)arg1 sequence:(id)arg2 bitPosition:(long long)arg3 bitValue:(BOOL)arg4 creationDate:(double)arg5 submitted:(BOOL)arg6 objectId:(id)arg7 ;
-(NSString *)plainSequence;
-(void)setPlainSequence:(NSString *)arg1 ;
-(long long)sequenceBitPosition;
-(void)setSequenceBitPosition:(long long)arg1 ;
-(BOOL)sequenceBitValue;
-(void)setSequenceBitValue:(BOOL)arg1 ;
@end

