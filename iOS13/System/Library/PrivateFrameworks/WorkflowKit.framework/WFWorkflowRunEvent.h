/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRecord.h>

@class NSString, NSDate;

@interface WFWorkflowRunEvent : WFRecord {

	NSString* _source;
	NSDate* _date;
	NSString* _triggerID;
	long long _outcome;

}

@property (nonatomic,readonly) NSString * source;                      //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * date;                          //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSString * triggerID;              //@synthesize triggerID=_triggerID - In the implementation block
@property (nonatomic,readonly) long long outcome;                      //@synthesize outcome=_outcome - In the implementation block
-(NSDate *)date;
-(NSString *)source;
-(long long)outcome;
-(NSString *)triggerID;
@end

