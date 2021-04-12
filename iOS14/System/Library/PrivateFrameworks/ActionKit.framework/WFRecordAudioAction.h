/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFRecordAudioAction : WFAction

@property (nonatomic,readonly) long long outputFormat; 
@property (nonatomic,readonly) BOOL startImmediately; 
@property (nonatomic,readonly) double recordingDuration; 
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
+(id)fileTypeForFormat:(long long)arg1 ;
+(id)datedFilenameForFormat:(long long)arg1 ;
-(long long)outputFormat;
-(double)recordingDuration;
-(void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2 ;
-(BOOL)startImmediately;
@end

