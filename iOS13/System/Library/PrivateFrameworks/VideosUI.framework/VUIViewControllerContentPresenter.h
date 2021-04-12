/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class UIView, NSString, UIViewController;

@interface VUIViewControllerContentPresenter : NSObject {

	BOOL _contentHasBeenDeleted;
	BOOL _contentHasBeenManuallyDeleted;
	unsigned long long _currentContentViewType;
	UIView* _currentView;
	UIView* _contentView;
	NSString* _noContentErrorTitle;
	NSString* _noContentErrorMessage;
	NSString* _deletedContentErrorMessage;
	NSString* _logName;
	UIView* _rootView;
	UIViewController* _viewController;

}

@property (assign,nonatomic) BOOL contentHasBeenDeleted;                             //@synthesize contentHasBeenDeleted=_contentHasBeenDeleted - In the implementation block
@property (nonatomic,retain) UIView * currentView;                                   //@synthesize currentView=_currentView - In the implementation block
@property (nonatomic,retain) UIView * rootView;                                      //@synthesize rootView=_rootView - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                      //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) unsigned long long currentContentViewType;              //@synthesize currentContentViewType=_currentContentViewType - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) NSString * noContentErrorTitle;                           //@synthesize noContentErrorTitle=_noContentErrorTitle - In the implementation block
@property (nonatomic,copy) NSString * noContentErrorMessage;                         //@synthesize noContentErrorMessage=_noContentErrorMessage - In the implementation block
@property (assign,nonatomic) BOOL contentHasBeenManuallyDeleted;                     //@synthesize contentHasBeenManuallyDeleted=_contentHasBeenManuallyDeleted - In the implementation block
@property (nonatomic,copy) NSString * deletedContentErrorMessage;                    //@synthesize deletedContentErrorMessage=_deletedContentErrorMessage - In the implementation block
@property (nonatomic,retain) NSString * logName;                                     //@synthesize logName=_logName - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(UIView *)rootView;
-(void)setRootView:(UIView *)arg1 ;
-(NSString *)logName;
-(void)setLogName:(NSString *)arg1 ;
-(UIView *)currentView;
-(void)setCurrentView:(UIView *)arg1 ;
-(void)setCurrentContentViewType:(unsigned long long)arg1 ;
-(void)setRootViewForViewController;
-(void)configureCurrentViewFrame;
-(void)setNoContentErrorTitle:(NSString *)arg1 ;
-(unsigned long long)currentContentViewType;
-(id)_logNameForContentViewType:(unsigned long long)arg1 ;
-(NSString *)noContentErrorTitle;
-(NSString *)noContentErrorMessage;
-(id)_createAlertViewWithTitle:(id)arg1 description:(id)arg2 ;
-(void)setContentHasBeenDeleted:(BOOL)arg1 ;
-(void)setNoContentErrorMessage:(NSString *)arg1 ;
-(BOOL)contentHasBeenDeleted;
-(BOOL)contentHasBeenManuallyDeleted;
-(void)setContentHasBeenManuallyDeleted:(BOOL)arg1 ;
-(NSString *)deletedContentErrorMessage;
-(void)setDeletedContentErrorMessage:(NSString *)arg1 ;
@end

