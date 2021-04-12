/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNContactCell.h>
#import <libobjc.A.dylib/CNStarkActionViewDelegate.h>

@protocol CNPropertyCellDelegate;
@class NSDictionary, UILabel, CNStarkActionView, NSString;

@interface CNStarkFaceTimeCell : CNContactCell <CNStarkActionViewDelegate> {

	id<CNPropertyCellDelegate> _delegate;
	NSDictionary* _labelTextAttributes;
	UILabel* _faceTimeLabel;
	CNStarkActionView* _actionView;

}

@property (nonatomic,retain) UILabel * faceTimeLabel;                                 //@synthesize faceTimeLabel=_faceTimeLabel - In the implementation block
@property (nonatomic,readonly) CNStarkActionView * actionView;                        //@synthesize actionView=_actionView - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * labelTextAttributes;                        //@synthesize labelTextAttributes=_labelTextAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(id<CNPropertyCellDelegate>)delegate;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CNStarkActionView *)actionView;
-(id)variableConstraints;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(id)constantConstraints;
-(void)performDefaultAction;
-(void)_cnui_applyContactStyle;
-(NSDictionary *)labelTextAttributes;
-(UILabel *)faceTimeLabel;
-(void)actionViewTapped:(id)arg1 ;
-(BOOL)supportsTintColorValue;
-(BOOL)shouldShowStar;
-(void)updateTransportButtons;
-(void)setFaceTimeLabel:(UILabel *)arg1 ;
@end

