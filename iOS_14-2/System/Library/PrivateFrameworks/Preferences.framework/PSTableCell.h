/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, NSString, PSSpecifier, PSTableCellHighlightContext, NSURLSession, NSURL, UILongPressGestureRecognizer;

@interface PSTableCell : UITableViewCell {

	id _value;
	UIImageView* _checkedImageView;
	BOOL _checked;
	BOOL _shouldHideTitle;
	NSString* _hiddenTitle;
	int _alignment;
	SEL _pAction;
	id _pTarget;
	BOOL _cellEnabled;
	PSSpecifier* _specifier;
	long long _type;
	BOOL _lazyIcon;
	BOOL _lazyIconDontUnload;
	BOOL _lazyIconForceSynchronous;
	NSString* _lazyIconAppID;
	BOOL _reusedCell;
	PSTableCellHighlightContext* _customHighlightContext;
	NSURLSession* _urlSession;
	NSURL* _lazyIconURL;
	BOOL _forceHideDisclosureIndicator;
	BOOL _isCopyable;
	UILongPressGestureRecognizer* _longTapRecognizer;

}

@property (assign,nonatomic) BOOL isCopyable;                                               //@synthesize isCopyable=_isCopyable - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longTapRecognizer;              //@synthesize longTapRecognizer=_longTapRecognizer - In the implementation block
@property (assign,nonatomic) long long type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                       //@synthesize specifier=_specifier - In the implementation block
@property (assign,nonatomic) BOOL reusedCell;                                               //@synthesize reusedCell=_reusedCell - In the implementation block
@property (assign,nonatomic) BOOL forceHideDisclosureIndicator;                             //@synthesize forceHideDisclosureIndicator=_forceHideDisclosureIndicator - In the implementation block
+(id)stringFromCellType:(long long)arg1 ;
+(id)reuseIdentifierForBasicCellTypes:(long long)arg1 ;
+(long long)cellTypeFromString:(id)arg1 ;
+(double)defaultCellHeight;
+(long long)cellStyle;
+(Class)cellClassForSpecifier:(id)arg1 ;
+(id)reuseIdentifierForSpecifier:(id)arg1 ;
+(id)reuseIdentifierForClassAndType:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)titleLabel;
-(void)copy:(id)arg1 ;
-(id)iconImageView;
-(void)setTarget:(id)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)blankIcon;
-(id)getIcon;
-(void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(double)textFieldOffset;
-(id)_automationID;
-(id)cellTarget;
-(id)_copyableText;
-(void)longPressed:(id)arg1 ;
-(void)_invalidateHighlightContext;
-(void)_updateAccessoryTypeForSpecifier:(id)arg1 ;
-(id)getLazyIconID;
-(void)setShouldHideTitle:(BOOL)arg1 ;
-(id)lazyIconQueue:(id)arg1 ;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
-(void)setCellTarget:(id)arg1 ;
-(void)setCellAction:(SEL)arg1 ;
-(id)titleTextLabel;
-(void)setIsCopyable:(BOOL)arg1 ;
-(void)setForceHideDisclosureIndicator:(BOOL)arg1 ;
-(BOOL)forceHideDisclosureIndicator;
-(UILongPressGestureRecognizer *)longTapRecognizer;
-(void)setLongTapRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(id)_checkmarkImage:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setTitle:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)_disclosureChevronImage:(BOOL)arg1 ;
-(void)setIcon:(id)arg1 ;
-(SEL)action;
-(void)setType:(long long)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)prepareForReuse;
-(void)setCellEnabled:(BOOL)arg1 ;
-(void)setAlignment:(int)arg1 ;
-(void)setValue:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)layoutSubviews;
-(BOOL)canReload;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)isChecked;
-(long long)type;
-(id)_contentString;
-(id)scriptingInfoWithChildren;
-(id)valueLabel;
-(id)target;
-(SEL)cellAction;
-(BOOL)reusedCell;
-(BOOL)isCopyable;
-(void)setReusedCell:(BOOL)arg1 ;
-(void)forceSynchronousIconLoadOnNextIconLoad;
-(void)cellRemovedFromView;
-(BOOL)canBeChecked;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)highlightCellForDuration:(double)arg1 animateUnighlight:(BOOL)arg2 ;
-(id)value;
-(id)title;
-(id)_urlSession;
-(void)dealloc;
-(id)getLazyIcon;
-(BOOL)cellEnabled;
@end

