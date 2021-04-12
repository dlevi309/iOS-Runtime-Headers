/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

