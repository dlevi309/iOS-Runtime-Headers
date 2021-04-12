/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/RLMObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, WFRealmWorkflow, NSDate;

@interface WFRealmWorkflowRunEvent : RLMObject <WFRecordStorage> {

	NSString* _identifier;
	WFRealmWorkflow* _workflow;
	NSDate* _date;
	NSString* _source;
	NSString* _triggerID;
	long long _outcome;

}

@property (retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (retain) WFRealmWorkflow * workflow;                      //@synthesize workflow=_workflow - In the implementation block
@property (retain) NSDate * date;                                   //@synthesize date=_date - In the implementation block
@property (assign) NSString * source;                               //@synthesize source=_source - In the implementation block
@property (copy) NSString * triggerID;                              //@synthesize triggerID=_triggerID - In the implementation block
@property (assign) long long outcome;                               //@synthesize outcome=_outcome - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)className;
+(id)primaryKey;
+(id)requiredProperties;
+(id)defaultPropertyValues;
-(void)setSource:(NSString *)arg1 ;
-(NSDate *)date;
-(NSString *)identifier;
-(NSString *)source;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)outcome;
-(void)setOutcome:(long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)descriptor;
-(WFRealmWorkflow *)workflow;
-(void)setWorkflow:(WFRealmWorkflow *)arg1 ;
-(void)setTriggerID:(NSString *)arg1 ;
-(NSString *)triggerID;
@end

