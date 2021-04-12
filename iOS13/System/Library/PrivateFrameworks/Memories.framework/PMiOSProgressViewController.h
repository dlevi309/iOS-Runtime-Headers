/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILabel, PMRoundProgressView, NSLayoutConstraint, UIButton, NSString;

@interface PMiOSProgressViewController : UIViewController <UIGestureRecognizerDelegate> {

	BOOL _showCancelButton;
	unsigned long long _cancelStyle;
	UILabel* _label;
	PMRoundProgressView* _progressView;
	NSLayoutConstraint* _verticalProgressLabelSpace;
	NSLayoutConstraint* _verticalCenteredLabel;
	NSLayoutConstraint* _horizontalCenteredLabel;
	NSLayoutConstraint* _nonCompactRoundProgressCenterY;
	NSLayoutConstraint* _cancelButtonTopConstraint;
	NSLayoutConstraint* _cancelButtonLeadingConstraint;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UILabel * label;                                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) PMRoundProgressView * progressView;                               //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalProgressLabelSpace;                  //@synthesize verticalProgressLabelSpace=_verticalProgressLabelSpace - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalCenteredLabel;                       //@synthesize verticalCenteredLabel=_verticalCenteredLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * horizontalCenteredLabel;                     //@synthesize horizontalCenteredLabel=_horizontalCenteredLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nonCompactRoundProgressCenterY;              //@synthesize nonCompactRoundProgressCenterY=_nonCompactRoundProgressCenterY - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cancelButtonTopConstraint;                   //@synthesize cancelButtonTopConstraint=_cancelButtonTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * cancelButtonLeadingConstraint;               //@synthesize cancelButtonLeadingConstraint=_cancelButtonLeadingConstraint - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                          //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) NSString * description; 
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) BOOL showCancelButton;                                            //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (assign,nonatomic) unsigned long long cancelStyle;                                   //@synthesize cancelStyle=_cancelStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(float)progress;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)setProgress:(float)arg1 ;
-(void)loadView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(BOOL)showCancelButton;
-(PMRoundProgressView *)progressView;
-(void)setProgressView:(PMRoundProgressView *)arg1 ;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)setCancelTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setVerticalProgressLabelSpace:(NSLayoutConstraint *)arg1 ;
-(void)setVerticalCenteredLabel:(NSLayoutConstraint *)arg1 ;
-(void)setHorizontalCenteredLabel:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)verticalProgressLabelSpace;
-(NSLayoutConstraint *)horizontalCenteredLabel;
-(void)attachCancelButton;
-(void)updateLayoutWithTraitCollection:(id)arg1 ;
-(NSLayoutConstraint *)nonCompactRoundProgressCenterY;
-(NSLayoutConstraint *)cancelButtonTopConstraint;
-(NSLayoutConstraint *)cancelButtonLeadingConstraint;
-(unsigned long long)cancelStyle;
-(void)setCancelButtonTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCancelButtonLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCancelStyle:(unsigned long long)arg1 ;
-(NSLayoutConstraint *)verticalCenteredLabel;
-(void)setNonCompactRoundProgressCenterY:(NSLayoutConstraint *)arg1 ;
@end

