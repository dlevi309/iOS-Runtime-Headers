/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UITableViewCell.h>

@protocol PKTextInputDebugViewTableCellDelegate;
@class NSString, NSAttributedString, UILabel, UIButton;

@interface PKTextInputDebugViewTableCell : UITableViewCell {

	BOOL _showDetailsButton;
	NSString* _titleText;
	NSAttributedString* _valueAttributedText;
	NSString* _statusKey;
	id<PKTextInputDebugViewTableCellDelegate> _delegate;
	UILabel* __titleLabel;
	UILabel* __valueLabel;
	UIButton* __detailsButton;

}

@property (nonatomic,retain) UILabel * _titleLabel;                                                  //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * _valueLabel;                                                  //@synthesize _valueLabel=__valueLabel - In the implementation block
@property (nonatomic,retain) UIButton * _detailsButton;                                              //@synthesize _detailsButton=__detailsButton - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                     //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSAttributedString * valueAttributedText;                                 //@synthesize valueAttributedText=_valueAttributedText - In the implementation block
@property (assign,nonatomic) BOOL showDetailsButton;                                                 //@synthesize showDetailsButton=_showDetailsButton - In the implementation block
@property (nonatomic,copy) NSString * statusKey;                                                     //@synthesize statusKey=_statusKey - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputDebugViewTableCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKTextInputDebugViewTableCellDelegate>)delegate;
-(void)_updateLabels;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setDelegate:(id<PKTextInputDebugViewTableCellDelegate>)arg1 ;
-(UIButton *)_detailsButton;
-(UILabel *)_valueLabel;
-(UILabel *)_titleLabel;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)statusKey;
-(void)setValueAttributedText:(NSAttributedString *)arg1 ;
-(void)setShowDetailsButton:(BOOL)arg1 ;
-(void)setStatusKey:(NSString *)arg1 ;
-(void)set_titleLabel:(UILabel *)arg1 ;
-(void)set_valueLabel:(UILabel *)arg1 ;
-(void)_handleDetailsButton:(id)arg1 ;
-(void)set_detailsButton:(UIButton *)arg1 ;
-(void)_setupContentViewsIfNeeded;
-(NSAttributedString *)valueAttributedText;
-(BOOL)showDetailsButton;
@end

