/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class UILabel, NSString;

@interface HUAssociatedServiceTypeOptionCell : UITableViewCell <HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _checked;
	BOOL _suggestion;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isChecked,nonatomic) BOOL checked;                    //@synthesize checked=_checked - In the implementation block
@property (assign,getter=isSuggestion,nonatomic) BOOL suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(BOOL)isSuggestion;
-(void)setSuggestion:(BOOL)arg1 ;
-(id)colorForCurrentState;
@end

