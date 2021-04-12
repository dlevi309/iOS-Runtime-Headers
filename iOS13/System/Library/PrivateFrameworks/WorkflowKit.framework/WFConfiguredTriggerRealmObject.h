/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/RLMObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSData;

@interface WFConfiguredTriggerRealmObject : RLMObject <WFRecordStorage> {

	BOOL _shouldPrompt;
	BOOL _enabled;
	NSString* _triggerID;
	NSString* _workflowID;
	NSData* _triggerData;

}

@property (nonatomic,copy) NSString * triggerID;                         //@synthesize triggerID=_triggerID - In the implementation block
@property (nonatomic,copy) NSString * workflowID;                        //@synthesize workflowID=_workflowID - In the implementation block
@property (nonatomic,copy) NSData * triggerData;                         //@synthesize triggerData=_triggerData - In the implementation block
@property (assign,nonatomic) BOOL shouldPrompt;                          //@synthesize shouldPrompt=_shouldPrompt - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)primaryKey;
+(id)requiredProperties;
+(id)defaultPropertyValues;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)descriptor;
-(id)trigger;
-(void)setTriggerID:(NSString *)arg1 ;
-(NSString *)workflowID;
-(void)setWorkflowID:(NSString *)arg1 ;
-(void)coordinatePropertyUpdatesForRecord:(id)arg1 duringBlock:(/*^block*/id)arg2 ;
-(NSString *)triggerID;
-(BOOL)shouldPrompt;
-(NSData *)triggerData;
-(void)setShouldPrompt:(BOOL)arg1 ;
-(void)setTriggerData:(NSData *)arg1 ;
@end

