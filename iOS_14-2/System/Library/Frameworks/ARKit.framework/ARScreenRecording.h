/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <libobjc.A.dylib/RPScreenRecorderDelegate.h>

@class RPScreenRecorder, NSString;

@interface ARScreenRecording : NSObject <RPScreenRecorderDelegate> {

	BOOL _startRecordingRequested;
	BOOL _saveInPhotosLibrary;
	RPScreenRecorder* _recorder;

}

@property (nonatomic,retain) RPScreenRecorder * recorder;              //@synthesize recorder=_recorder - In the implementation block
@property (assign,nonatomic) BOOL saveInPhotosLibrary;                 //@synthesize saveInPhotosLibrary=_saveInPhotosLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setRecorder:(RPScreenRecorder *)arg1 ;
-(void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(RPScreenRecorder *)recorder;
-(void)startRecordingWithHandler:(/*^block*/id)arg1 ;
-(BOOL)saveInPhotosLibrary;
-(void)screenRecorderDidChangeAvailability:(id)arg1 ;
-(void)stopRecordingWithHandler:(/*^block*/id)arg1 ;
-(void)setSaveInPhotosLibrary:(BOOL)arg1 ;
@end

