/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/

#import <ProximityUI/PRDataRecorderBase.h>
#import <libobjc.A.dylib/PRItemLocalizerDataRecorder.h>

@interface PRDataRecorder : PRDataRecorderBase <PRItemLocalizerDataRecorder>
-(id)init;
-(void)start;
-(void)stopAndDiscard;
-(id)stopAndSave;
-(id)writeToURL;
-(void)discardRecording;
-(void)saveScreenRecordingToURL:(id)arg1 ;
@end

