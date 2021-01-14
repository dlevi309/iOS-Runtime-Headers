/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@interface SNDSPGraphUtilities : NSObject
+(BOOL)stopRecordingBoxesInGraph:(id)arg1 ;
+(BOOL)startRecordingFirstBoxInGraph:(id)arg1 toDirectory:(id)arg2 withFileName:(id)arg3 error:(id*)arg4 ;
+(BOOL)startRecordingWithBoxRecordingInfos:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id*)arg4 ;
+(BOOL)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id*)arg4 ;
+(BOOL)startInjectingBoxes:(id)arg1 inGraph:(id)arg2 error:(id*)arg3 ;
+(BOOL)stopInjectingBoxesInGraph:(id)arg1 ;
@end

