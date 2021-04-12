/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/FigCameraViewfinderDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderSessionDelegate.h>

@protocol PLBackgroundJobCameraWatcherDelegate;
@class FigCameraViewfinder, NSString;

@interface PLBackgroundJobCameraWatcher : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {

	FigCameraViewfinder* _viewFinder;
	BOOL _isCameraRunning;
	id<PLBackgroundJobCameraWatcherDelegate> _delegate;

}

@property (__weak,readonly) id<PLBackgroundJobCameraWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PLBackgroundJobCameraWatcherDelegate>)delegate;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2 ;
-(id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isCameraRunning;
@end

