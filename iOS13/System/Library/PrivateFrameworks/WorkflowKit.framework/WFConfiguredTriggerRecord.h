/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFRecord.h>

@class NSData;

@interface WFConfiguredTriggerRecord : WFRecord {

	BOOL _shouldPrompt;
	BOOL _enabled;
	NSData* _triggerData;

}

@property (nonatomic,copy) NSData * triggerData;                         //@synthesize triggerData=_triggerData - In the implementation block
@property (assign,nonatomic) BOOL shouldPrompt;                          //@synthesize shouldPrompt=_shouldPrompt - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)shouldPrompt;
-(NSData *)triggerData;
-(void)setShouldPrompt:(BOOL)arg1 ;
-(void)setTriggerData:(NSData *)arg1 ;
@end

