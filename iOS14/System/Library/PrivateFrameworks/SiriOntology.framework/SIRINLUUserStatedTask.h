/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/SIRINLUUserDialogAct.h>

@class USOSerializedGraph;

@interface SIRINLUUserStatedTask : NSObject <SIRINLUUserDialogAct> {

	USOSerializedGraph* _task;
	USOSerializedGraph* _goal;

}

@property (nonatomic,retain) USOSerializedGraph * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) USOSerializedGraph * goal;              //@synthesize goal=_goal - In the implementation block
+(BOOL)supportsSecureCoding;
-(USOSerializedGraph *)goal;
-(id)initWithTask:(id)arg1 ;
-(USOSerializedGraph *)task;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTask:(USOSerializedGraph *)arg1 ;
-(void)setGoal:(USOSerializedGraph *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithGoal:(id)arg1 ;
@end

