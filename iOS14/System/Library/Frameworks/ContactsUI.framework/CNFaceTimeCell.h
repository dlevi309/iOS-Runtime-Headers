/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNLabeledCell.h>
#import <libobjc.A.dylib/CNActionViewDelegate.h>

@protocol CNPropertyCellDelegate;
@class CNUIUserActionListDataSource, UILabel, CNActionView, NSString;

@interface CNFaceTimeCell : CNLabeledCell <CNActionViewDelegate> {

	BOOL _isFaceTimeAudioAvailable;
	CNUIUserActionListDataSource* _actionsDataSource;
	id<CNPropertyCellDelegate> _delegate;
	UILabel* _faceTimeLabel;
	CNActionView* _actionView1;
	CNActionView* _actionView2;

}

@property (nonatomic,readonly) UILabel * faceTimeLabel;                                     //@synthesize faceTimeLabel=_faceTimeLabel - In the implementation block
@property (assign,nonatomic) BOOL isFaceTimeAudioAvailable;                                 //@synthesize isFaceTimeAudioAvailable=_isFaceTimeAudioAvailable - In the implementation block
@property (nonatomic,readonly) CNActionView * actionView1;                                  //@synthesize actionView1=_actionView1 - In the implementation block
@property (nonatomic,readonly) CNActionView * actionView2;                                  //@synthesize actionView2=_actionView2 - In the implementation block
@property (nonatomic,retain) CNUIUserActionListDataSource * actionsDataSource;              //@synthesize actionsDataSource=_actionsDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tintColorDidChange;
-(id<CNPropertyCellDelegate>)delegate;
-(id)labelView;
-(CNActionView *)actionView1;
-(CNActionView *)actionView2;
-(UILabel *)faceTimeLabel;
-(void)didPressActionView:(id)arg1 longPress:(BOOL)arg2 ;
-(void)updateHorizontalTouchAreas;
-(void)setIsFaceTimeAudioAvailable:(BOOL)arg1 ;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(double)minCellHeight;
-(id)rightMostView;
-(id)constantConstraints;
-(void)performDefaultAction;
-(id)variableConstraints;
-(CNUIUserActionListDataSource *)actionsDataSource;
-(void)setActionsDataSource:(CNUIUserActionListDataSource *)arg1 ;
-(BOOL)isFaceTimeAudioAvailable;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

