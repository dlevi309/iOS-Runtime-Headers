/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BluetoothServicesUI.framework/BluetoothServicesUI
*/

#import <UIKitCore/UIView.h>

@class AVPlayerLooper, AVQueuePlayer;

@interface BTMediaPlayerView : UIView {

	AVPlayerLooper* _avLooper;
	AVQueuePlayer* _avPlayer;

}
+(Class)layerClass;
-(void)stop;
-(void)startMovieLoopWithPath:(id)arg1 ;
-(void)startMovieLoopWithPath:(id)arg1 assetType:(int)arg2 adjustmentsURL:(id)arg3 ;
@end

