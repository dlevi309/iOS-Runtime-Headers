/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKitCore/UIViewController.h>

@class OBWelcomeController, UIView, NSString, UIImage;

@interface OBSetupAssistantDynamicLayoutController : UIViewController {

	BOOL _enableStickyHeader;
	OBWelcomeController* _backingController;
	/*^block*/id _constraintForLayoutFactory;
	UIView* _mainContentSubview;
	UIView* _outerContentView;
	NSString* _localTitle;
	NSString* _localDetailText;
	UIImage* _localImage;

}

@property (nonatomic,retain) OBWelcomeController * backingController;              //@synthesize backingController=_backingController - In the implementation block
@property (nonatomic,copy) id constraintForLayoutFactory;                          //@synthesize constraintForLayoutFactory=_constraintForLayoutFactory - In the implementation block
@property (nonatomic,retain) UIView * mainContentSubview;                          //@synthesize mainContentSubview=_mainContentSubview - In the implementation block
@property (nonatomic,retain) UIView * outerContentView;                            //@synthesize outerContentView=_outerContentView - In the implementation block
@property (nonatomic,copy) NSString * localTitle;                                  //@synthesize localTitle=_localTitle - In the implementation block
@property (nonatomic,copy) NSString * localDetailText;                             //@synthesize localDetailText=_localDetailText - In the implementation block
@property (nonatomic,retain) UIImage * localImage;                                 //@synthesize localImage=_localImage - In the implementation block
@property (assign,nonatomic) BOOL enableStickyHeader;                              //@synthesize enableStickyHeader=_enableStickyHeader - In the implementation block
-(id)contentView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)headerView;
-(long long)contentViewLayout;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 ;
-(id)buttonTray;
-(OBWelcomeController *)backingController;
-(UIView *)outerContentView;
-(void)_updateScrollUnderLayout;
-(void)_relayoutContentSubviewIfNeeded;
-(void)setMainContentSubview:(UIView *)arg1 ;
-(void)setConstraintForLayoutFactory:(id)arg1 ;
-(NSString *)localTitle;
-(NSString *)localDetailText;
-(UIImage *)localImage;
-(UIView *)mainContentSubview;
-(void)setBackingController:(OBWelcomeController *)arg1 ;
-(BOOL)enableStickyHeader;
-(id)constraintForLayoutFactory;
-(void)addContentSubView:(id)arg1 heightConstraintForLayout:(/*^block*/id)arg2 ;
-(void)setEnableStickyHeader:(BOOL)arg1 ;
-(void)resetLayoutTo:(long long)arg1 ;
-(void)setOuterContentView:(UIView *)arg1 ;
-(void)setLocalTitle:(NSString *)arg1 ;
-(void)setLocalDetailText:(NSString *)arg1 ;
-(void)setLocalImage:(UIImage *)arg1 ;
@end

