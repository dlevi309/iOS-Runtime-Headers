/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFTrigger, NSString, NSData, WFWorkflow;

@interface WFAutomationSuggestion : NSObject <NSCopying> {

	WFTrigger* _trigger;
	NSString* _bundleIdentifier;
	NSData* _serializedSuggestion;
	WFWorkflow* _workflow;
	NSString* _activityType;
	NSString* _intentType;
	NSString* _trialID;

}

@property (nonatomic,readonly) WFTrigger * trigger;                        //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * serializedSuggestion;              //@synthesize serializedSuggestion=_serializedSuggestion - In the implementation block
@property (nonatomic,readonly) WFWorkflow * workflow;                      //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) NSString * activityType;                    //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSString * intentType;                      //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,readonly) NSString * trialID;                         //@synthesize trialID=_trialID - In the implementation block
+(id)generateTestSuggestions;
-(WFTrigger *)trigger;
-(NSString *)activityType;
-(NSString *)bundleIdentifier;
-(NSString *)trialID;
-(WFWorkflow *)workflow;
-(NSString *)intentType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIntent:(id)arg1 trigger:(id)arg2 bundleIdentifier:(id)arg3 serializedSuggestion:(id)arg4 trialID:(id)arg5 ;
-(id)initWithUserActivity:(id)arg1 trigger:(id)arg2 bundleIdentifier:(id)arg3 serializedSuggestion:(id)arg4 trialID:(id)arg5 ;
-(id)initWithShortcut:(id)arg1 trigger:(id)arg2 bundleIdentifier:(id)arg3 serializedSuggestion:(id)arg4 trialID:(id)arg5 ;
-(NSData *)serializedSuggestion;
@end

