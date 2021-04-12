/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class WFWorkflowReference, NSString, NSDate;

@interface WFWorkflowRunEvent : WFDatabaseObjectDescriptor {

	WFWorkflowReference* _workflow;
	NSString* _source;
	NSDate* _date;
	NSString* _triggerID;
	long long _outcome;

}

@property (readonly,nonatomic) NSString * displayName; 
@property (nonatomic,readonly) WFWorkflowReference * workflow;              //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) NSString * source;                           //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * date;                               //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSString * triggerID;                   //@synthesize triggerID=_triggerID - In the implementation block
@property (nonatomic,readonly) long long outcome;                           //@synthesize outcome=_outcome - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)displayName;
-(long long)outcome;
-(void)encodeWithCoder:(id)arg1 ;
-(WFWorkflowReference *)workflow;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)source;
-(NSString *)triggerID;
-(id)initWithIdentifier:(id)arg1 workflow:(id)arg2 source:(id)arg3 date:(id)arg4 triggerID:(id)arg5 outcome:(long long)arg6 ;
@end

