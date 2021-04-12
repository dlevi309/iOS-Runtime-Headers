/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/

#import <MOVStreamIO/MOVStreamWriterState.h>

@class NSString;

@interface MOVStreamWriterStateFinished : NSObject <MOVStreamWriterState>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long writerStatus; 
-(void)activateWithContext:(id)arg1 ;
-(id)prepareRecording:(id)arg1 ;
-(BOOL)canConfigure:(id)arg1 ;
-(BOOL)canAppendData:(id)arg1 ;
-(BOOL)canWriteData:(id)arg1 ;
-(BOOL)stopWriterWhenFifosAreEmpty:(id)arg1 ;
-(id)prepareFinished:(id)arg1 ;
-(id)finishRecording:(id)arg1 ;
-(id)forceFinishRecording:(id)arg1 ;
-(id)nextFinishStep:(id)arg1 ;
-(id)cancelRecording:(id)arg1 ;
-(id)finishedCancelRecording:(id)arg1 ;
-(id)criticalErrorOccurred:(id)arg1 context:(id)arg2 ;
-(long long)writerStatus;
@end

