/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <AVKit/AVPlayerViewController.h>
#import <libobjc.A.dylib/JFXAVPlayerViewer.h>

@class AVPlayer, NSString;

@interface JFXAVPlayerViewController : AVPlayerViewController <JFXAVPlayerViewer>

@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGSize displaySize; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(CGSize)displaySize;
-(void)configureDisplayAttributesForColorSpace:(id)arg1 ;
@end

