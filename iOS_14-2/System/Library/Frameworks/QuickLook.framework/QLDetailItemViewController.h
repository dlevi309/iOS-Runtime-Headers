/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

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
-(void)performAction;
-(id)_scalableSystemFontOfSize:(double)arg1 ;
-(void)_setActionButtonView:(id)arg1 animated:(BOOL)arg2 actionButtonLabel:(id)arg3 informationVisible:(BOOL)arg4 ;
-(void)_updateInformation;
-(void)setState:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)setInformation:(NSArray *)arg1 ;
-(void)setState:(QLDetailItemViewControllerState *)arg1 ;
-(QLDetailItemViewControllerState *)state;
-(NSArray *)information;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(BOOL)canSwipeToDismiss;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

