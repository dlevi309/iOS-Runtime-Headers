/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSButtonDelegate.h>
#import <libobjc.A.dylib/CPSActionButtonLayoutDelegate.h>
#import <libobjc.A.dylib/CPSLinearFocusProviding.h>

@protocol CPSPointsOfInterestPickerInfoDelegate;
@class CPPointOfInterest, UIStackView, UILabel, CPSStyledTextButton, NSString;

@interface CPSPointsOfInterestPickerInfoView : UIView <CPSButtonDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding> {

	CPPointOfInterest* _model;
	id<CPSPointsOfInterestPickerInfoDelegate> _delegate;
	UIStackView* _topStackView;
	UIStackView* _bottomStackView;
	UILabel* _detailsTitle;
	UILabel* _detailsSubtitle;
	UILabel* _detailsInformativeText;
	CPSStyledTextButton* _primaryButton;
	CPSStyledTextButton* _secondaryButton;

}

@property (nonatomic,retain) CPPointOfInterest * model;                                              //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UIStackView * topStackView;                                             //@synthesize topStackView=_topStackView - In the implementation block
@property (nonatomic,retain) UIStackView * bottomStackView;                                          //@synthesize bottomStackView=_bottomStackView - In the implementation block
@property (nonatomic,retain) UILabel * detailsTitle;                                                 //@synthesize detailsTitle=_detailsTitle - In the implementation block
@property (nonatomic,retain) UILabel * detailsSubtitle;                                              //@synthesize detailsSubtitle=_detailsSubtitle - In the implementation block
@property (nonatomic,retain) UILabel * detailsInformativeText;                                       //@synthesize detailsInformativeText=_detailsInformativeText - In the implementation block
@property (nonatomic,retain) CPSStyledTextButton * primaryButton;                                    //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,retain) CPSStyledTextButton * secondaryButton;                                  //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (assign,nonatomic,__weak) id<CPSPointsOfInterestPickerInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL useRightHandDriveFocusGuide; 
-(UIEdgeInsets)safeAreaInsets;
-(CPPointOfInterest *)model;
-(void)setPrimaryButton:(CPSStyledTextButton *)arg1 ;
-(void)setSecondaryButton:(CPSStyledTextButton *)arg1 ;
-(id<CPSPointsOfInterestPickerInfoDelegate>)delegate;
-(void)updateWithModel:(id)arg1 ;
-(void)setDelegate:(id<CPSPointsOfInterestPickerInfoDelegate>)arg1 ;
-(void)setModel:(CPPointOfInterest *)arg1 ;
-(CPSStyledTextButton *)primaryButton;
-(CPSStyledTextButton *)secondaryButton;
-(void)setupViews;
-(void)didSelectButton:(id)arg1 ;
-(id)_linearFocusItems;
-(UIStackView *)topStackView;
-(void)setTopStackView:(UIStackView *)arg1 ;
-(UIStackView *)bottomStackView;
-(void)setBottomStackView:(UIStackView *)arg1 ;
-(UILabel *)detailsTitle;
-(void)setDetailsTitle:(UILabel *)arg1 ;
-(UILabel *)detailsSubtitle;
-(void)setDetailsSubtitle:(UILabel *)arg1 ;
-(UILabel *)detailsInformativeText;
-(void)setDetailsInformativeText:(UILabel *)arg1 ;
@end

