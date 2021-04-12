/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNTask.h>

@class NSArray;

@interface _CNAggregateTask : CNTask {

	NSArray* _tasks;

}

@property (nonatomic,readonly) NSArray * tasks;              //@synthesize tasks=_tasks - In the implementation block
-(NSArray *)tasks;
-(id)description;
-(id)initWithName:(id)arg1 tasks:(id)arg2 ;
-(id)runSubtask:(id)arg1 error:(id*)arg2 ;
-(void)cancelSubtasks;
-(id)run:(id*)arg1 ;
-(BOOL)cancel;
@end

