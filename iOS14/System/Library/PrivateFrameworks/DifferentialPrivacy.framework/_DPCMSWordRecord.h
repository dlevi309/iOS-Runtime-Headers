/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/_DPCMSSequenceRecord.h>

@class NSData, NSString;

@interface _DPCMSWordRecord : _DPCMSSequenceRecord {

	short _fragmentPosition;
	short _fragmentHashIndex;
	NSData* _fragment;
	NSString* _plainFragment;

}

@property (nonatomic,retain) NSData * fragment;                    //@synthesize fragment=_fragment - In the implementation block
@property (assign,nonatomic) short fragmentPosition;               //@synthesize fragmentPosition=_fragmentPosition - In the implementation block
@property (assign,nonatomic) short fragmentHashIndex;              //@synthesize fragmentHashIndex=_fragmentHashIndex - In the implementation block
@property (nonatomic,copy) NSString * plainFragment;               //@synthesize plainFragment=_plainFragment - In the implementation block
+(id)entityName;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(NSData *)fragment;
-(id)jsonString;
-(void)setFragment:(NSData *)arg1 ;
-(id)description;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(NSString *)plainFragment;
-(void)setPlainFragment:(NSString *)arg1 ;
-(short)fragmentPosition;
-(void)setFragmentPosition:(short)arg1 ;
-(short)fragmentHashIndex;
-(void)setFragmentHashIndex:(short)arg1 ;
-(id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 plainFragment:(id)arg5 fragment:(id)arg6 fragmentHashIndex:(unsigned short)arg7 fragmentPosition:(unsigned short)arg8 creationDate:(double)arg9 submitted:(BOOL)arg10 objectId:(id)arg11 ;
@end

