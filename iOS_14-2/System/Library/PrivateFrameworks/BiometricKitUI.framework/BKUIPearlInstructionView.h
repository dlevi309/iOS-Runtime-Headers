/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <BiometricKitUI/BiometricKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIScrollView, UILabel, NSLayoutConstraint, NSLayoutYAxisAnchor;

@interface BKUIPearlInstructionView : UIView {

	BOOL _darkMode;
	NSString* _instruction;
	NSString* _detail;
	UIScrollView* _scrollView;
	UILabel* _instructionLabel;
	UILabel* _detailLabel;
	NSLayoutConstraint* _labelsWidthConstraint;
	UIEdgeInsets _labelsHorizontalMargin;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * instructionLabel;                             //@synthesize instructionLabel=_instructionLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * detailLabel;                                  //@synthesize detailLabel=_detailLabel - In the implementation block
@property (assign,nonatomic) UIEdgeInsets labelsHorizontalMargin;                           //@synthesize labelsHorizontalMargin=_labelsHorizontalMargin - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelsWidthConstraint;                    //@synthesize labelsWidthConstraint=_labelsWidthConstraint - In the implementation block
@property (nonatomic,retain) NSString * instruction;                                        //@synthesize instruction=_instruction - In the implementation block
@property (nonatomic,retain) NSString * detail;                                             //@synthesize detail=_detail - In the implementation block
@property (assign,nonatomic) BOOL darkMode;                                                 //@synthesize darkMode=_darkMode - In the implementation block
@property (nonatomic,readonly) NSLayoutYAxisAnchor * instructionTextTopAnchor; 
-(id)viewForLastBaselineLayout;
-(NSString *)detail;
-(id)init;
-(id)viewForFirstBaselineLayout;
-(BOOL)darkMode;
-(UILabel *)instructionLabel;
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(NSString *)instruction;
-(void)setInstruction:(NSString *)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(UIScrollView *)scrollView;
-(UILabel *)detailLabel;
-(void)setDarkMode:(BOOL)arg1 ;
-(void)_configureConstraints;
-(void)setLabelsHorizontalMargin:(UIEdgeInsets)arg1 ;
-(void)setLabelsWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelsWidthConstraint;
-(UIEdgeInsets)labelsHorizontalMargin;
-(NSLayoutYAxisAnchor *)instructionTextTopAnchor;
@end

