/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>

@class QLFileIconImageView, UIStackView, UIButton, UIView, NSString, QLDetailItemViewControllerState, NSArray;

@interface QLDetailItemViewController : QLItemViewController {

	QLFileIconImageView* _filePreviewImageView;
	UIStackView* _informationStackView;
	UIButton* _actionIconButton;
	UIButton* _actionButton;
	BOOL _isSettingStateAnimated;
	UIView* _currentActionButtonView;
	NSString* _previewTitle;
	QLDetailItemViewControllerState* _state;
	NSArray* _information;

}

@property (nonatomic,retain) QLDetailItemViewControllerState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSArray * information;                                //@synthesize information=_information - In the implementation block
@property (assign,nonatomic) CGRect fileThumbnailFrame; 
-(QLDetailItemViewControllerState *)state;
-(void)setState:(QLDetailItemViewControllerState *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)performAction;
-(void)setState:(id)arg1 animated:(BOOL)arg2 ;
-(void)setInformation:(NSArray *)arg1 ;
-(NSArray *)information;
-(BOOL)canSwipeToDismiss;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFileThumbnailFrame:(CGRect)arg1 ;
-(void)_setActionButtonView:(id)arg1 animated:(BOOL)arg2 actionButtonLabel:(id)arg3 informationVisible:(BOOL)arg4 ;
-(void)_updateInformation;
-(CGRect)fileThumbnailFrame;
@end

