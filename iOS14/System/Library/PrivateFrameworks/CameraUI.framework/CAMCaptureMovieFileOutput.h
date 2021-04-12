/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <AVFCapture/AVCaptureMovieFileOutput.h>
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
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)stopRecording;
-(NSMutableArray *)_removeOnCompletionSettingsIDs;
-(NSDictionary *)userInfo;
-(NSObject*<OS_dispatch_queue>)_userInfoQueue;
-(id<AVCaptureFileOutputRecordingDelegate>)wrappedDelegate;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
-(NSDictionary *)currentUserInfo;
-(CAMCaptureEngine *)_captureEngine;
-(void)setWrappedDelegate:(id<AVCaptureFileOutputRecordingDelegate>)arg1 ;
-(id)initWithEngine:(id)arg1 ;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(NSDictionary *)userInfoForNextCapture;
-(NSMutableDictionary *)_userInfoBySettingsID;
-(void)setCurrentUserInfo:(NSDictionary *)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)setUserInfoForNextCapture:(NSDictionary *)arg1 ;
@end

