/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
*/

#import <PhotosFormats/PhotosFormats-Structs.h>
#import <libobjc.A.dylib/FigCameraViewfinderDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderSessionDelegate.h>

@protocol PFCameraViewfinderSessionWatcherDelegate;
@class FigCameraViewfinder, NSString;

@interface PFCameraViewfinderSessionWatcher : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {

	FigCameraViewfinder* _viewFinder;
	BOOL _isCameraRunning;
	id<PFCameraViewfinderSessionWatcherDelegate> _delegate;

}

@property (readonly) BOOL isCameraRunning; 
@property (__weak,readonly) id<PFCameraViewfinderSessionWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PFCameraViewfinderSessionWatcherDelegate>)delegate;
-(BOOL)isCameraRunning;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2 ;
-(id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2 ;
@end

