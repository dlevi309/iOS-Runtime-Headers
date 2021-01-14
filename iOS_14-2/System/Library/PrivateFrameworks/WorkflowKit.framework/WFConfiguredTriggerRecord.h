/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRecord.h>

@class NSData;

@interface WFConfiguredTriggerRecord : WFRecord {

	BOOL _shouldPrompt;
	BOOL _enabled;
	int _source;
	NSData* _triggerData;
	NSData* _suggestionData;

}

@property (nonatomic,copy) NSData * triggerData;                         //@synthesize triggerData=_triggerData - In the implementation block
@property (assign,nonatomic) BOOL shouldPrompt;                          //@synthesize shouldPrompt=_shouldPrompt - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int source;                                 //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSData * suggestionData;                      //@synthesize suggestionData=_suggestionData - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSource:(int)arg1 ;
-(BOOL)isEnabled;
-(int)source;
-(void)setShouldPrompt:(BOOL)arg1 ;
-(BOOL)shouldPrompt;
-(NSData *)suggestionData;
-(NSData *)triggerData;
-(void)setTriggerData:(NSData *)arg1 ;
-(void)setSuggestionData:(NSData *)arg1 ;
@end

