/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)jsonString;
-(id)description;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(id)initWithKey:(id)arg1 sequence:(id)arg2 bitPosition:(long long)arg3 bitValue:(BOOL)arg4 creationDate:(double)arg5 submitted:(BOOL)arg6 objectId:(id)arg7 ;
-(NSString *)plainSequence;
-(void)setPlainSequence:(NSString *)arg1 ;
-(long long)sequenceBitPosition;
-(void)setSequenceBitPosition:(long long)arg1 ;
-(BOOL)sequenceBitValue;
-(void)setSequenceBitValue:(BOOL)arg1 ;
@end

