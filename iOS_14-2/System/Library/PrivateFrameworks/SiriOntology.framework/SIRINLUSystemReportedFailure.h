/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/SIRINLUSystemDialogAct.h>

@class NSString, NSUUID, USOSerializedGraph;

@interface SIRINLUSystemReportedFailure : NSObject <SIRINLUSystemDialogAct> {

	NSString* renderedText;
	NSUUID* _taskId;
	USOSerializedGraph* _reason;
	USOSerializedGraph* _task;

}

@property (nonatomic,retain) NSUUID * taskId;                          //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,retain) USOSerializedGraph * reason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) USOSerializedGraph * task;                //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSString * renderedText; 
+(BOOL)supportsSecureCoding;
-(USOSerializedGraph *)task;
-(id)init;
-(NSUUID *)taskId;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTask:(USOSerializedGraph *)arg1 ;
-(id)description;
-(USOSerializedGraph *)reason;
-(void)setTaskId:(NSUUID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setReason:(USOSerializedGraph *)arg1 ;
-(NSString *)renderedText;
-(void)setRenderedText:(NSString *)arg1 ;
-(id)initWithTaskId:(id)arg1 reason:(id)arg2 task:(id)arg3 ;
@end

