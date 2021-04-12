/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNTask.h>

@class NSArray;

@interface _CNAggregateTask : CNTask {

	NSArray* _tasks;

}

@property (nonatomic,readonly) NSArray * tasks;              //@synthesize tasks=_tasks - In the implementation block
-(id)description;
-(BOOL)cancel;
-(NSArray *)tasks;
-(id)run:(id*)arg1 ;
-(id)initWithName:(id)arg1 tasks:(id)arg2 ;
-(id)runSubtask:(id)arg1 error:(id*)arg2 ;
-(void)cancelSubtasks;
@end

