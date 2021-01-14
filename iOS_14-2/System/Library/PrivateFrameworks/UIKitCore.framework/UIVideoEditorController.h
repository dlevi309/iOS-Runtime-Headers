/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_properties;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_videoURL;
-(NSString *)videoPath;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(void)viewWillUnload;
-(void)_initializeProperties;
-(void)_setVideoURL:(id)arg1 ;
-(void)setVideoPath:(NSString *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_valueForProperty:(id)arg1 ;
-(void)_autoDismiss;
-(long long)videoQuality;
-(id)_createInitialController;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)editVideoViewControllerDidCancel:(id)arg1 ;
-(void)_setProperties:(id)arg1 ;
-(void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2 ;
-(void)editVideoViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)_didRevertStatusBar;
-(void)_removeAllChildren;
-(double)videoMaximumDuration;
-(void)setVideoMaximumDuration:(double)arg1 ;
-(void)_setupControllers;
-(void)setVideoQuality:(long long)arg1 ;
@end

