/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <AVFoundation/AVCaptureMovieFileOutput.h>
#import <libobjc.A.dylib/AVCaptureFileOutputRecordingDelegate.h>

@protocol OS_dispatch_queue, AVCaptureFileOutputRecordingDelegate;
@class CAMCaptureEngine, NSObject, NSMutableDictionary, NSMutableArray, NSDictionary, NSString;

@interface CAMCaptureMovieFileOutput : AVCaptureMovieFileOutput <AVCaptureFileOutputRecordingDelegate> {

	CAMCaptureEngine* __captureEngine;
	NSObject*<OS_dispatch_queue> __userInfoQueue;
	NSMutableDictionary* __userInfoBySettingsID;
	NSMutableArray* __removeOnCompletionSettingsIDs;
	NSDictionary* _currentUserInfo;
	NSDictionary* _userInfoForNextCapture;
	id<AVCaptureFileOutputRecordingDelegate> _wrappedDelegate;

}

@property (nonatomic,__weak,readonly) CAMCaptureEngine * _captureEngine;                                   //@synthesize _captureEngine=__captureEngine - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _userInfoQueue;                                //@synthesize _userInfoQueue=__userInfoQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _userInfoBySettingsID;                                //@synthesize _userInfoBySettingsID=__userInfoBySettingsID - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _removeOnCompletionSettingsIDs;                            //@synthesize _removeOnCompletionSettingsIDs=__removeOnCompletionSettingsIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * currentUserInfo;                                                 //@synthesize currentUserInfo=_currentUserInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfoForNextCapture;                                          //@synthesize userInfoForNextCapture=_userInfoForNextCapture - In the implementation block
@property (assign,nonatomic,__weak) id<AVCaptureFileOutputRecordingDelegate> wrappedDelegate;              //@synthesize wrappedDelegate=_wrappedDelegate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)initWithEngine:(id)arg1 ;
-(void)stopRecording;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(CAMCaptureEngine *)_captureEngine;
-(void)setWrappedDelegate:(id<AVCaptureFileOutputRecordingDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)_userInfoQueue;
-(NSDictionary *)currentUserInfo;
-(void)setCurrentUserInfo:(NSDictionary *)arg1 ;
-(void)setUserInfoForNextCapture:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfoForNextCapture;
-(NSMutableDictionary *)_userInfoBySettingsID;
-(NSMutableArray *)_removeOnCompletionSettingsIDs;
-(id<AVCaptureFileOutputRecordingDelegate>)wrappedDelegate;
@end

