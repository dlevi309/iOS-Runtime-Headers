/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCell.h>
#import <libobjc.A.dylib/HUAccessoryViewCellProtocol.h>

@class HFItem, UIView, HUGridStatusCellLayoutOptions, HUIconView, HUGridStatusCellTextView, UIStackView, NSArray, UILabel, NSString;

@interface HUGridStatusCell : HUGridCell <HUAccessoryViewCellProtocol> {

	HFItem* _item;
	UIView* _accessoryView;
	HUGridStatusCellLayoutOptions* _statusCellLayoutOptions;
	HUIconView* _iconView;
	HUGridStatusCellTextView* _titleTextView;
	UIStackView* _descriptionStackView;
	NSArray* _layoutConstraints;
	UILabel* _largeDescriptionLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) HUIconView * iconView;                                                       //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) HUGridStatusCellTextView * titleTextView;                                    //@synthesize titleTextView=_titleTextView - In the implementation block
@property (nonatomic,retain) UIStackView * descriptionStackView;                                          //@synthesize descriptionStackView=_descriptionStackView - In the implementation block
@property (nonatomic,retain) NSArray * layoutConstraints;                                                 //@synthesize layoutConstraints=_layoutConstraints - In the implementation block
@property (nonatomic,retain) UILabel * largeDescriptionLabel;                                             //@synthesize largeDescriptionLabel=_largeDescriptionLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                  //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                                                      //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic,__weak) HUGridStatusCellLayoutOptions * statusCellLayoutOptions;              //@synthesize statusCellLayoutOptions=_statusCellLayoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
+(Class)layoutOptionsClass;
+(BOOL)shouldUseOutlineStyleForCategory:(unsigned long long)arg1 ;
+(id)outlineStyleBackgroundEffect;
-(void)_updateStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_invalidateConstraints;
-(UIView *)accessoryView;
-(id)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)_updateLabels;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)prepareForReuse;
-(NSArray *)layoutConstraints;
-(void)setLayoutConstraints:(NSArray *)arg1 ;
-(void)setItem:(id)arg1 ;
-(HUGridStatusCellTextView *)titleTextView;
-(void)setTitleTextView:(HUGridStatusCellTextView *)arg1 ;
-(void)updateConstraints;
-(HUIconView *)iconView;
-(void)_updateBadge;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setIconView:(HUIconView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)_updateIconAnimated:(BOOL)arg1 ;
-(unsigned long long)iconDisplayStyle;
-(void)layoutOptionsDidChange;
-(BOOL)managesOwnBackgroundViewLayout;
-(void)_setupStatusCell;
-(UILabel *)largeDescriptionLabel;
-(HUGridStatusCellLayoutOptions *)statusCellLayoutOptions;
-(void)setDescriptionStackView:(UIStackView *)arg1 ;
-(UIStackView *)descriptionStackView;
-(void)setLargeDescriptionLabel:(UILabel *)arg1 ;
-(id)_iconBadgeViewWithImage:(id)arg1 ;
-(id)_numberedBadgeViewWithValue:(long long)arg1 ;
-(void)_updateMask;
-(void)setStatusCellLayoutOptions:(HUGridStatusCellLayoutOptions *)arg1 ;
@end

