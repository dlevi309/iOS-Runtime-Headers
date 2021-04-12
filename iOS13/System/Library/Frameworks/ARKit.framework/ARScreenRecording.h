/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class UIViewController, RPScreenRecorder;

@interface ARScreenRecording : NSObject {

	BOOL _saveInPhotosLibrary;
	UIViewController* _parentViewController;
	RPScreenRecorder* _recorder;

}

@property (nonatomic,retain) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) RPScreenRecorder * recorder;                          //@synthesize recorder=_recorder - In the implementation block
@property (assign,nonatomic) BOOL saveInPhotosLibrary;                             //@synthesize saveInPhotosLibrary=_saveInPhotosLibrary - In the implementation block
-(RPScreenRecorder *)recorder;
-(void)setRecorder:(RPScreenRecorder *)arg1 ;
-(UIViewController *)parentViewController;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(id)initWith:(id)arg1 ;
-(void)startRecordingWithHandler:(/*^block*/id)arg1 ;
-(void)stopRecordingWithHandler:(/*^block*/id)arg1 ;
-(BOOL)saveInPhotosLibrary;
-(void)setSaveInPhotosLibrary:(BOOL)arg1 ;
@end

