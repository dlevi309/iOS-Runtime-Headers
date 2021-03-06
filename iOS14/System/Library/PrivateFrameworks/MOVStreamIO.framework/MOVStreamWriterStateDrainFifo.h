/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/

#import <MOVStreamIO/MOVStreamWriterState.h>

@class NSString;

@interface MOVStreamWriterStateDrainFifo : NSObject <MOVStreamWriterState>

@property (readonly) NSString * name; 
@property (readonly) long long writerStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(void)activateWithContext:(id)arg1 ;
-(id)prepareRecording:(id)arg1 ;
-(BOOL)canAppendData:(id)arg1 ;
-(BOOL)canConfigure:(id)arg1 ;
-(BOOL)canWriteData:(id)arg1 ;
-(BOOL)stopWriterWhenFifosAreEmpty:(id)arg1 ;
-(BOOL)canFinishRecording:(id)arg1 ;
-(id)prepareFinished:(id)arg1 ;
-(id)finishRecording:(id)arg1 ;
-(id)forceFinishRecording:(id)arg1 ;
-(id)nextFinishStep:(id)arg1 ;
-(id)cancelRecording:(id)arg1 ;
-(id)finishedCancelRecording:(id)arg1 ;
-(id)criticalErrorOccurred:(id)arg1 context:(id)arg2 ;
-(long long)writerStatus;
@end

