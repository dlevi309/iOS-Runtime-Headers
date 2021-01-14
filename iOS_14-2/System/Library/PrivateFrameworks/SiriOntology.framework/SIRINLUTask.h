/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class USOSerializedGraph;

@interface SIRINLUTask : NSObject <NSSecureCoding> {

	USOSerializedGraph* _task;
	double _score;

}

@property (nonatomic,retain) USOSerializedGraph * task;              //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) double score;                           //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(USOSerializedGraph *)task;
-(double)score;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setTask:(USOSerializedGraph *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTask:(id)arg1 score:(double)arg2 ;
@end

