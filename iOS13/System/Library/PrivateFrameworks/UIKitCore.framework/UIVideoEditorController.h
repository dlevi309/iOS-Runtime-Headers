/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UINavigationController.h>

@class NSMutableDictionary, NSString;

@interface UIVideoEditorController : UINavigationController {

	int _previousStatusBarStyle;
	NSMutableDictionary* _properties;
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned didRevertStatusBar : 1;
	}  _flags;

}

@property (assign,nonatomic) id<UINavigationControllerDelegate><UIVideoEditorControllerDelegate> delegate; 
@property (nonatomic,copy) NSString * videoPath; 
@property (assign,nonatomic) double videoMaximumDuration; 
@property (assign,nonatomic) long long videoQuality; 
+(BOOL)canEditVideoAtPath:(id)arg1 ;
-(id)init;
-(id)_properties;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillUnload;
-(id)_valueForProperty:(id)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_initializeProperties;
-(void)_removeAllChildren;
-(void)_autoDismiss;
-(double)videoMaximumDuration;
-(void)setVideoMaximumDuration:(double)arg1 ;
-(long long)videoQuality;
-(void)setVideoQuality:(long long)arg1 ;
-(void)_setProperties:(id)arg1 ;
-(BOOL)_didRevertStatusBar;
-(void)_setupControllers;
-(id)_createInitialController;
-(void)editVideoViewControllerDidCancel:(id)arg1 ;
-(id)_videoURL;
-(void)_setVideoURL:(id)arg1 ;
-(void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2 ;
-(void)editVideoViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(NSString *)videoPath;
-(void)setVideoPath:(NSString *)arg1 ;
@end

