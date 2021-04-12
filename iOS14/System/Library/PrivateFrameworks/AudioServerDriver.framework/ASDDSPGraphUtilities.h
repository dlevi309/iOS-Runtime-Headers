/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/


@interface ASDDSPGraphUtilities : NSObject
+(BOOL)stopRecordingBoxesInGraph:(id)arg1 ;
+(BOOL)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id*)arg4 ;
+(BOOL)startInjectingBoxes:(id)arg1 inGraph:(id)arg2 error:(id*)arg3 ;
+(BOOL)stopInjectingBoxesInGraph:(id)arg1 ;
+(BOOL)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 fromStream:(id)arg3 toDirectory:(id)arg4 withType:(long long)arg5 error:(id*)arg6 ;
+(BOOL)startRecordingAllBoxesInGraph:(id)arg1 fromStream:(id)arg2 toDirectory:(id)arg3 withType:(long long)arg4 error:(id*)arg5 ;
@end

