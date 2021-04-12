/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <AVKit/AVPlayerViewController.h>
#import <libobjc.A.dylib/JTAVPlayerViewer.h>

@protocol JTAVPlayerViewerDelegate;
@class AVPlayer, NSString;

@interface JTAVPlayerViewController : AVPlayerViewController <JTAVPlayerViewer> {

	id<JTAVPlayerViewerDelegate> playerViewDelegate;

}

@property (assign,nonatomic,__weak) id<JTAVPlayerViewerDelegate> playerViewDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGSize displaySize; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLoad;
-(CGSize)displaySize;
-(id<JTAVPlayerViewerDelegate>)playerViewDelegate;
-(void)setPlayerViewDelegate:(id<JTAVPlayerViewerDelegate>)arg1 ;
@end

