/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFRecordAudioAction : WFAction

@property (nonatomic,readonly) long long outputFormat; 
@property (nonatomic,readonly) BOOL startImmediately; 
@property (nonatomic,readonly) double recordingDuration; 
+(id)fileTypeForFormat:(long long)arg1 ;
+(id)datedFilenameForFormat:(long long)arg1 ;
-(long long)outputFormat;
-(double)recordingDuration;
-(BOOL)startImmediately;
@end

