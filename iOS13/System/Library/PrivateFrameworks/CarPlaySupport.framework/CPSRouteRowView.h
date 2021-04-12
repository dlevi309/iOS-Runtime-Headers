/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CPSRouteRowInteracting;
@class CPRouteChoice, UIImageView, CPSAbridgableLabel, UIView, CPSInvisibleButton, UIStackView;

@interface CPSRouteRowView : UIView {

	BOOL _selected;
	CPRouteChoice* _representedRouteChoice;
	UIImageView* _checkmarkView;
	CPSAbridgableLabel* _title;
	CPSAbridgableLabel* _detail;
	UIView* _focusBackground;
	CPSInvisibleButton* _rowButton;
	id<CPSRouteRowInteracting> _interactionDelegate;
	UIStackView* _labelStackView;

}

@property (nonatomic,readonly) UIImageView * checkmarkView;                                      //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,readonly) CPSAbridgableLabel * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) CPSAbridgableLabel * detail;                                      //@synthesize detail=_detail - In the implementation block
@property (nonatomic,retain) UIView * focusBackground;                                           //@synthesize focusBackground=_focusBackground - In the implementation block
@property (nonatomic,retain) CPSInvisibleButton * rowButton;                                     //@synthesize rowButton=_rowButton - In the implementation block
@property (assign,nonatomic,__weak) id<CPSRouteRowInteracting> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,retain) UIStackView * labelStackView;                                       //@synthesize labelStackView=_labelStackView - In the implementation block
@property (nonatomic,retain) CPRouteChoice * representedRouteChoice;                             //@synthesize representedRouteChoice=_representedRouteChoice - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                    //@synthesize selected=_selected - In the implementation block
-(CPSAbridgableLabel *)title;
-(BOOL)isSelected;
-(void)setInteractionDelegate:(id<CPSRouteRowInteracting>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateAppearance;
-(void)setLabelStackView:(UIStackView *)arg1 ;
-(UIStackView *)labelStackView;
-(CPSAbridgableLabel *)detail;
-(id<CPSRouteRowInteracting>)interactionDelegate;
-(UIImageView *)checkmarkView;
-(void)handleRowSelection:(id)arg1 ;
-(CPRouteChoice *)representedRouteChoice;
-(CPSInvisibleButton *)rowButton;
-(UIView *)focusBackground;
-(void)setRepresentedRouteChoice:(CPRouteChoice *)arg1 ;
-(void)setFocusBackground:(UIView *)arg1 ;
-(void)setRowButton:(CPSInvisibleButton *)arg1 ;
@end

