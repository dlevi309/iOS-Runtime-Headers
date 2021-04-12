/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetGroupViewControllerDelegate.h>

@protocol SBTodayOverlayViewControllerDelegate;
@class SBHRootSidebarController, MTMaterialView, NSLayoutConstraint, NSString;

@interface SBTodayOverlayViewController : UIViewController <WGWidgetGroupViewControllerDelegate> {

	id<SBTodayOverlayViewControllerDelegate> _delegate;
	double _presentationProgress;
	SBHRootSidebarController* _contentViewController;
	MTMaterialView* _backgroundView;
	NSLayoutConstraint* _contentLeadingConstraint;

}

@property (nonatomic,readonly) MTMaterialView * backgroundView;                                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentLeadingConstraint;                         //@synthesize contentLeadingConstraint=_contentLeadingConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<SBTodayOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double presentationProgress;                                           //@synthesize presentationProgress=_presentationProgress - In the implementation block
@property (nonatomic,readonly) double contentWidth; 
@property (nonatomic,readonly) CGRect contentRect; 
@property (getter=isHeaderVisible,nonatomic,readonly) BOOL headerVisible; 
@property (nonatomic,readonly) SBHRootSidebarController * contentViewController;                    //@synthesize contentViewController=_contentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBTodayOverlayViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBTodayOverlayViewControllerDelegate>)arg1 ;
-(double)contentWidth;
-(MTMaterialView *)backgroundView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(SBHRootSidebarController *)contentViewController;
-(CGRect)contentRect;
-(BOOL)isHeaderVisible;
-(void)widgetGroupViewControllerDidChangeHeaderVisibility:(id)arg1 ;
-(CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2 ;
-(void)setContentLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentLeadingConstraint;
-(double)presentationProgress;
-(void)setPresentationProgress:(double)arg1 ;
-(CGSize)_suggestedTodayViewSizeForBounds:(CGRect)arg1 ;
@end

