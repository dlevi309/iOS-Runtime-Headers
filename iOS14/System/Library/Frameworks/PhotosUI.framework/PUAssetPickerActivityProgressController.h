/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class PUAssetPickerActivityProgressViewController, UIAlertController, UIView, NSString, NSProgress;

@interface PUAssetPickerActivityProgressController : NSObject {

	PUAssetPickerActivityProgressViewController* _progressViewController;
	UIAlertController* _alertController;
	UIView* _containerView;
	UIView* _progressContainerView;
	BOOL _isShowing;
	NSString* _title;
	NSString* _message;
	/*^block*/id _cancellationHandler;
	NSProgress* _progress;

}

@property (nonatomic,copy) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) id cancellationHandler;               //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,retain) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL isShowing;                     //@synthesize isShowing=_isShowing - In the implementation block
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSProgress *)progress;
-(id)init;
-(void)setIsShowing:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isShowing;
-(void)setCancellationHandler:(id)arg1 ;
-(void)showAnimated:(BOOL)arg1 sourceViewController:(id)arg2 ;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)_setupAlertController;
-(id)cancellationHandler;
-(NSString *)title;
@end

