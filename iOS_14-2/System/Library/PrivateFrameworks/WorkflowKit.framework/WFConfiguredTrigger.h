/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSString, WFTrigger, NSData;

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor {

	BOOL _shouldPrompt;
	BOOL _enabled;
	int _source;
	NSString* _workflowID;
	WFTrigger* _trigger;
	NSData* _suggestionData;

}

@property (nonatomic,readonly) NSString * workflowID;                      //@synthesize workflowID=_workflowID - In the implementation block
@property (nonatomic,readonly) WFTrigger * trigger;                        //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) BOOL shouldPrompt;                          //@synthesize shouldPrompt=_shouldPrompt - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) int source;                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSData * suggestionData;                        //@synthesize suggestionData=_suggestionData - In the implementation block
-(WFTrigger *)trigger;
-(unsigned long long)hash;
-(BOOL)isEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(int)source;
-(BOOL)shouldPrompt;
-(NSData *)suggestionData;
-(NSString *)workflowID;
-(id)initWithIdentifier:(id)arg1 workflowID:(id)arg2 trigger:(id)arg3 shouldPrompt:(BOOL)arg4 enabled:(BOOL)arg5 ;
-(id)initWithIdentifier:(id)arg1 workflowID:(id)arg2 trigger:(id)arg3 shouldPrompt:(BOOL)arg4 enabled:(BOOL)arg5 triggerSource:(int)arg6 suggestionData:(id)arg7 ;
-(void)setSuggestionData:(NSData *)arg1 ;
@end

